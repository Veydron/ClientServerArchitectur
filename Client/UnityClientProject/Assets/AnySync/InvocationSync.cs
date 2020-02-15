using System;
using System.Collections.Generic;

namespace AnySync
{
    /// <summary>
    /// Add-on for MotionGenerator that can execute some code at the right time with the movement.
    /// </summary>
    public class InvocationSync
    {
        /// <summary>
        /// Creates a new invocation synchronizer.
        /// </summary>
        /// <param name="motionGenerator">MotionGenerator to sync events with.</param>
        public InvocationSync(MotionGenerator motionGenerator)
        {
            _motionGenerator = motionGenerator;
            _motionGenerator.PlaybackUpdateEvent += OnPlaybackUpdate;
        }

        private readonly MotionGenerator _motionGenerator;
        private readonly List<ActionInfo> _actionList = new List<ActionInfo>();

        private class ActionInfo
        {
            public float WaitingTime;
            public Action Action;
        }

        /// <summary>
        /// Adds the action to be executed in sync with the movement.
        /// </summary>
        public void AddAction(Action action)
        {
            // MotionGenerator adjusts the deltaTime in OnPlaybackUpdate according to TimeDrift,
            // so we simply specify the InterpolationLatency as waiting time.
            _actionList.Add(new ActionInfo{ WaitingTime = _motionGenerator.InterpolationLatency, Action = action });
        }

        private void OnPlaybackUpdate(float deltaTime)
        {
            for (var actionIterator = _actionList.Count - 1; actionIterator >= 0; actionIterator--)
            {
                var actionInfo = _actionList[actionIterator];
                actionInfo.WaitingTime -= deltaTime;

                if (actionInfo.WaitingTime <= 0f)
                {
                    actionInfo.Action?.Invoke();
                    _actionList.RemoveAt(actionIterator);
                }
            }
        }
    }
}