using System;
using UnityEngine;
using System.Collections.Generic;

namespace AnySync
{
    /// <summary>
    /// Transform keyframe buffer with interpolation math that helps with synchronizing motion over the network.
    /// </summary>
    public class MotionGenerator
    {
        /// <summary>
        /// Creates a new MotionGenerator with default settings that suit most projects.
        /// </summary>
        public MotionGenerator() { }

        /// <summary>
        /// Creates a new MotionGenerator with specified interpolationLatency.
        /// </summary>
        /// <param name="interpolationLatency">Usually kept equal to send interval.</param>
        public MotionGenerator(float interpolationLatency)
        {
            InterpolationLatency = interpolationLatency;
        }

        
        /// <summary>
        /// It's basically a keyframe buffer length defined in seconds.
        /// Values above sync message send interval increase resistance to bad network conditions.
        /// Values below sync message send interval compensate the latency by using extrapolation.
        /// </summary>
        public float InterpolationLatency = 0.12f;

        /// <summary>
        /// Smoothly corrects position and rotation extrapolation errors.
        /// </summary>
        public float ErrorCorrectionSpeed = 10f;

        /// <summary>
        /// Smoothly corrects time drift back into correct time frame.
        /// </summary>
        public float TimeCorrectionSpeed = 3f;

        /// <summary>
        /// Sometimes extrapolation may not be desired at all because of overshooting.
        /// Make sure to use InterpolationLatency above sync message send interval if you enable this setting.
        /// </summary>
        public bool DisableExtrapolation;


        /// <summary>
        /// Invoked when UpdatePlayback is called. Float represents delta time with corrected time drift.
        /// </summary>
        public event Action<float> PlaybackUpdateEvent;

        /// <summary>
        /// Gets playback time between current and the next keyframe.
        /// </summary>
        public float PlaybackTime { get; protected set; }

        /// <summary>
        /// Gets current time drift.
        /// </summary>
        public float TimeDrift { get; protected set; }


        protected List<Keyframe> Keyframes = new List<Keyframe>();
        public struct Keyframe
        {
            public float InterpolationTime;

            public Vector3 Position;
            public Vector3 Velocity;

            public Quaternion Rotation;
            public Vector3 AngularVelocity;
        }

        /// <summary>
        /// Used to identify if it's currently playing back through keyframes or predicting the future.
        /// </summary>
        public virtual bool IsExtrapolating => Keyframes.Count == 1;

        /// <summary>
        /// Gets current position drift.
        /// </summary>
        public Vector3 ExtrapolationPositionDrift { get; protected set; } = Vector3.zero;
        /// <summary>
        /// Gets current rotation drift.
        /// </summary>
        public Quaternion ExtrapolationRotationDrift { get; protected set; } = Quaternion.identity;

        /// <summary>
        /// Gets position at current playback time.
        /// </summary>
        public virtual Vector3 Position => PositionNoErrorCorrection + ExtrapolationPositionDrift;

        /// <summary>
        /// Same as Position, but doesn't smoothly correct extrapolation drift when new keyframe arrives.
        /// </summary>
        protected virtual Vector3 PositionNoErrorCorrection
        {
            get
            {
                if (!HasKeyframes)
                {
                    Debug.LogWarning("Trying to access position in an empty buffer. Zero vector returned.");
                    return Vector3.zero;
                }

                if (DisableExtrapolation && IsExtrapolating)
                    return Keyframes[0].Position;

                return Keyframes[0].Position + Keyframes[0].Velocity * PlaybackTime;
            }
        }

        /// <summary>
        /// Gets velocity at current playback time.
        /// </summary>
        public virtual Vector3 Velocity
        {
            get
            {
                if (!HasKeyframes)
                {
                    Debug.LogWarning("Trying to access velocity in an empty buffer. Zero vector returned.");
                    return Vector3.zero;
                }

                return Keyframes[0].Velocity;
            }
        }

        /// <summary>
        /// Gets rotation at current playback time.
        /// </summary>
        public virtual Quaternion Rotation => RotationNoErrorCorrection * ExtrapolationRotationDrift;

        /// <summary>
        /// Same as Rotation, but doesn't smoothly correct extrapolation drift when new keyframe arrives.
        /// </summary>
        protected virtual Quaternion RotationNoErrorCorrection
        {
            get
            {
                if (!HasKeyframes)
                {
                    Debug.LogWarning("Trying to access rotation in an empty buffer. Zero rotation returned.");
                    return Quaternion.identity;
                }

                if (DisableExtrapolation && IsExtrapolating)
                    return Keyframes[0].Rotation;
                
                return Keyframes[0].Rotation * Quaternion.Euler(Keyframes[0].AngularVelocity * PlaybackTime);
            }
        }

        /// <summary>
        /// Gets angular velocity at current playback time.
        /// </summary>
        public virtual Vector3 AngularVelocity
        {
            get
            {
                if (!HasKeyframes)
                {
                    Debug.LogWarning("Trying to access angular velocity in an empty buffer. Zero vector returned.");
                    return Vector3.zero;
                }

                return Keyframes[0].AngularVelocity;
            }
        }

        /// <summary>
        /// Indicates if the keyframe buffer is not empty (received any keyframes).
        /// </summary>
        public virtual bool HasKeyframes => Keyframes.Count != 0;

        /// <summary>
        /// Gets last received keyframe.
        /// </summary>
        public virtual Keyframe LastReceivedKeyframe
        {
            get
            {
                if (!HasKeyframes)
                {
                    Debug.LogWarning("Trying to access LastReceivedKeyframe in an empty buffer. Blank keyframe returned.");
                    return new Keyframe();
                }
                return Keyframes[Keyframes.Count - 1];
            }
        }

        /// <summary>
        /// Gets keyframe you're currently interpolating from.
        /// </summary>
        public virtual Keyframe CurrentKeyframe
        {
            get
            {
                if (!HasKeyframes)
                {
                    Debug.LogWarning("Trying to access CurrentKeyframe in an empty buffer. Blank keyframe returned.");
                    return new Keyframe();
                }
                return Keyframes[0];
            }
        }

        /// <summary>
        /// Adds a new keyframe to the buffer. Basic version that automatically calculates the velocity.
        /// </summary>
        /// <param name="interpolationTime">Time it will take to interpolate to this keyframe from the previous one.</param>
        /// <param name="position"></param>
        /// <param name="rotation">Optional parameter. Omit if you don't need to sync rotations.</param>
        public virtual void AddKeyframe(float interpolationTime, Vector3 position, Quaternion rotation = default)
        {
            AddKeyframeCustom(interpolationTime, position, rotation: rotation);
        }

        /// <summary>
        /// Adds a new keyframe to the buffer. Advanced version with explicitly specified velocity.
        /// Greatly improves extrapolation results and helps to simplify code that saves traffic on idling objects.
        /// </summary>
        /// <param name="interpolationTime">Time it will take to interpolate to this keyframe from the previous one.</param>
        /// <param name="position"></param>
        /// <param name="velocity">Improves extrapolation results and helps optimizing bandwidth for idling objects.</param>
        /// <param name="rotation">Optional parameter. Omit if you don't need to sync rotations.</param>
        /// <param name="angularVelocity">Optional parameter, specified in degrees. Calculated using previous keyframe when omitted.
        /// Be aware that Rigidbody.angularVelocity returns radians.</param>
        public virtual void AddKeyframe(float interpolationTime, Vector3 position, Vector3 velocity, Quaternion rotation = default, Vector3? angularVelocity = null)
        {
            AddKeyframeCustom(interpolationTime, position, velocity, rotation, angularVelocity);
        }

        /// <summary>
        /// Adds a new keyframe to the buffer. Expert version where you can choose what to specify.
        /// </summary>
        protected virtual void AddKeyframeCustom(float interpolationTime, Vector3 position = default, Vector3? velocity = null, Quaternion rotation = default, Vector3? angularVelocity = null)
        {
            // Prevent long first frame if some keyframes were skipped before the first frame.
            if (Keyframes.Count < 1)
                interpolationTime = Mathf.Max(InterpolationLatency, 0.01f);

            // Calculate time drift.
            var timeTillKeyframeBufferEnd = interpolationTime - PlaybackTime;
            for (var keyframeIterator = 1; keyframeIterator < Keyframes.Count; keyframeIterator++)
                timeTillKeyframeBufferEnd += Keyframes[keyframeIterator].InterpolationTime;

            TimeDrift = InterpolationLatency - timeTillKeyframeBufferEnd;

            // Inserting empty keyframe the buffer is empty (LastReceivedKeyframe doesn't exist).
            if (Keyframes.Count < 1)
            {
                var fakeKeyframe = new Keyframe
                {
                    InterpolationTime = 0f,
                    Position = position,
                    Velocity = Vector3.zero,

                    Rotation = rotation,
                    AngularVelocity = Vector3.zero
                };
                Keyframes.Add(fakeKeyframe);
            }

            var positionBeforeNewKeyframe = Position;
            var rotationBeforeNewKeyframe = Rotation;
            
            // Add the keyframe.
            var lastReceivedKeyframe = LastReceivedKeyframe;
            var calculatedVelocity = interpolationTime > 0f ? (position - lastReceivedKeyframe.Position) / interpolationTime : Vector3.zero;
            var calculatedRotationDifference = GetRotationDifference(lastReceivedKeyframe.Rotation, rotation);
            var calculatedAngularVelocity = interpolationTime > 0f ? FormatEulerRotation180(calculatedRotationDifference.eulerAngles) / interpolationTime : Vector3.zero;
            
            var keyframe = new Keyframe
            {
                InterpolationTime = interpolationTime,
                Position = position,
                Velocity = velocity ?? calculatedVelocity,

                Rotation = rotation,
                AngularVelocity = angularVelocity ?? calculatedAngularVelocity
            };
            Keyframes.Add(keyframe);

            // Set previous keyframe velocity to match the new position.
            lastReceivedKeyframe.Velocity = calculatedVelocity;
            lastReceivedKeyframe.AngularVelocity = calculatedAngularVelocity;
            Keyframes[Keyframes.Count - 2] = lastReceivedKeyframe;

            // Get onto a new frame if needed.
            UpdatePlayback(0f);

            // Calculate drift.
            var positionAfterNewKeyframe = PositionNoErrorCorrection;
            var rotationAfterNewKeyframe = RotationNoErrorCorrection;

            ExtrapolationPositionDrift = positionBeforeNewKeyframe - positionAfterNewKeyframe;
            ExtrapolationRotationDrift = GetRotationDifference(rotationAfterNewKeyframe, rotationBeforeNewKeyframe);
        }

        /// <summary>
        /// Progress the playback further by deltaTime.
        /// </summary>
        /// <param name="deltaTime">Time in seconds.</param>
        public virtual void UpdatePlayback(float deltaTime)
        {
            if (Keyframes.Count < 1)
            {
                Debug.LogWarning("Trying to update playback in an empty buffer.");
                return;
            }

            if (deltaTime > 0f)
            {
                // Smoothly correct time drift.
                var timeDriftCorrection = -Mathf.Lerp(0f, TimeDrift, TimeCorrectionSpeed * deltaTime);
                // Add the time drift correction to delta time so it properly affects everything else.
                deltaTime += timeDriftCorrection;
                TimeDrift += timeDriftCorrection;
                PlaybackTime += deltaTime;
                PlaybackUpdateEvent?.Invoke(deltaTime);

                // Smoothly correct extrapolation errors.
                ExtrapolationPositionDrift = Vector3.Lerp(ExtrapolationPositionDrift, Vector3.zero, ErrorCorrectionSpeed * deltaTime);
                ExtrapolationRotationDrift = Quaternion.Lerp(ExtrapolationRotationDrift, Quaternion.identity, ErrorCorrectionSpeed * deltaTime);
            }

            // Remove old keyframes.
            while (Keyframes.Count > 1 && PlaybackTime >= Keyframes[1].InterpolationTime)
            {
                // If you're going through an instant keyframe, nullify drifting because it's a teleport keyframe.
                if (Keyframes[1].InterpolationTime == 0f)
                {
                    ExtrapolationPositionDrift = Vector3.zero;
                    ExtrapolationRotationDrift = Quaternion.identity;
                }

                PlaybackTime -= Keyframes[1].InterpolationTime;
                Keyframes.RemoveAt(0);
            }
        }

        /// <summary>
        /// Gets the rotation difference between two quaternions.
        /// Basically output is "toRotation - fromRotation", but in quaternion math.
        /// </summary>
        protected Quaternion GetRotationDifference(Quaternion fromRotation, Quaternion toRotation)
        {
            return Quaternion.Inverse(fromRotation) * toRotation;
        }

        /// <summary>
        /// Converts vector rotation values from 0 to 360 degree range into -180 to 180 degree range.
        /// </summary>
        protected Vector3 FormatEulerRotation180(Vector3 eulerRotation)
        {
            return new Vector3(FormatEulerAngle180(eulerRotation.x), FormatEulerAngle180(eulerRotation.y), FormatEulerAngle180(eulerRotation.z));
        }

        /// <summary>
        /// Converts angle values from 0 to 360 degree range into -180 to 180 degree range.
        /// </summary>
        protected float FormatEulerAngle180(float angle)
        {
            return angle > 180 ? angle - 360f : angle;
        }
    }
}
