using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using UnityEngine;

namespace OPS.Serialization.Byte
{
    internal static class PrimitiveTypeMatcher
    {
        public static HashSet<Type> TypeHashSet = new HashSet<Type>()
        {
            { typeof(byte)},

            { typeof(bool)},

            { typeof(Int16)},
            { typeof(Int32)},
            { typeof(Int64)},
            { typeof(UInt16)},
            { typeof(UInt32)},
            { typeof(UInt64)},

            { typeof(float)},
            { typeof(double)},
            { typeof(decimal)},

            { typeof(char)},

            { typeof(Color)},
            { typeof(Color32)},

            { typeof(Vector2)},
            { typeof(Vector3)},
            { typeof(Vector4)},
            { typeof(Quaternion)},
            { typeof(Matrix4x4)},

            { typeof(Plane)},
            { typeof(Ray)},
            { typeof(Rect)},

            { typeof(String) },
        };
    }
}
