using OPS.Serialization.Byte;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace OPS.Serialization.IO
{
    internal class ArraySerializer : ISerializerComponent
    {
        private class ArrayIndexer_D_1
        {
            readonly int totalLength;

            readonly int lowerBound_0;

            int current;

            public ArrayIndexer_D_1(int _Length_0, int _LowerBound_0)
            {
                this.totalLength = _Length_0;

                this.lowerBound_0 = _LowerBound_0;
                this.current = -1;
            }

            public bool MoveNext()
            {
                current++;
                return current < totalLength;
            }

            public int Current_0
            {
                get
                {
                    return this.current + this.lowerBound_0;
                }
            }
        }

        private class ArrayIndexer_D_2
        {
            readonly int totalLength;
            readonly int lastIndexLength;

            readonly int length_0;

            readonly int lowerBound_0;
            readonly int lowerBound_1;

            int current;

            int currentZeroBased_0;
            int currentZeroBased_1;

            public ArrayIndexer_D_2(int _Length_0, int _Length_1, int _LowerBound_0, int _LowerBound_1)
            {
                this.lastIndexLength = _Length_1;
                this.totalLength = _Length_0 * _Length_1;

                this.length_0 = _Length_0;

                this.lowerBound_0 = _LowerBound_0;
                this.lowerBound_1 = _LowerBound_1;

                this.current = -1;

                this.currentZeroBased_0 = 0;
                this.currentZeroBased_1 = 0;
            }

            public bool MoveNext()
            {
                current++;
                if (current != 0)
                {
                    this.currentZeroBased_1 = current % lastIndexLength;
                    if (this.currentZeroBased_1 == 0)
                    {
                        this.currentZeroBased_0++;
                        if(this.currentZeroBased_0 == this.length_0)
                        {
                            this.currentZeroBased_0 = 0;
                        }
                    }
                }
                return current < totalLength;
            }

            public int Current_0
            {
                get
                {
                    return this.currentZeroBased_0 + this.lowerBound_0;
                }
            }

            public int Current_1
            {
                get
                {
                    return this.currentZeroBased_1 + this.lowerBound_1;
                }
            }
        }

        private class ArrayIndexer_D_N
        {
            readonly int rank;

            readonly int totalLength;
            readonly int lastIndexLength;
            readonly int[] lengths;
            readonly int[] lowerBounds;
            int current;
            readonly int[] currentZeroBased;

            int[] index;

            public ArrayIndexer_D_N(int[] lengths, int[] lowerBounds)
            {
                this.rank = lengths.Length;

                this.lastIndexLength = lengths[this.rank - 1];
                this.totalLength = lengths[0];
                for (int i = 1; i < this.rank; i++)
                {
                    totalLength *= lengths[i];
                }
                this.lengths = lengths;
                this.lowerBounds = lowerBounds;
                this.currentZeroBased = new int[this.rank];
                this.current = -1;

                this.index = new int[this.rank];
            }

            public bool MoveNext()
            {
                current++;
                if (current != 0)
                {
                    int currLastIndex = current % lastIndexLength;
                    currentZeroBased[currentZeroBased.Length - 1] = currLastIndex;
                    if (currLastIndex == 0)
                    {
                        for (int i = currentZeroBased.Length - 2; i >= 0; i--)
                        {
                            currentZeroBased[i]++;
                            if (currentZeroBased[i] != lengths[i])
                                break;
                            currentZeroBased[i] = 0;
                        }
                    }
                }
                return current < totalLength;
            }

            public int[] Current
            {
                get
                {
                    for (int i = 0; i < this.index.Length; i++)
                    {
                        this.index[i] = currentZeroBased[i] + lowerBounds[i];
                    }
                    return this.index;
                }
            }
        }

        public bool Serialize(Type _Type, object _Object, out byte[] _Bytes)
        {
            if (!_Type.IsArray)
            {
                _Bytes = null;
                return false;
            }

            ByteWriter var_Writer = new ByteWriter();

            if (_Object == null)
            {
                var_Writer.Write((bool)true);
                _Bytes = var_Writer.ToArray();
                return true;
            }
            else
            {
                var_Writer.Write((bool)false);
            }

            //

            Array var_Array = _Object as Array;
            
            Type var_ElementType = _Type.GetElementType();

            //Write dimensions!
            int var_Rank = var_Array.Rank;
            var_Writer.Write((int)var_Rank);
            //Go through each dimension and write the length!
            int[] var_ArrayLength = new int[var_Array.Rank];
            for(int d = 0; d < var_Array.Rank; d++)
            {
                var_ArrayLength[d] = (int)var_Array.GetLength(d);
                var_Writer.Write((int)var_Array.GetLength(d));
            }
            //Go through each dimension and write the lowerbound!
            int[] var_ArrayLowerBound = new int[var_Array.Rank];
            for (int d = 0; d < var_Array.Rank; d++)
            {
                var_ArrayLowerBound[d] = (int)var_Array.GetLowerBound(d);
                var_Writer.Write((int)var_Array.GetLowerBound(d));
            }

            if(var_Rank == 1)
            {
                ArrayIndexer_D_1 arrayIndexer = new ArrayIndexer_D_1(var_ArrayLength[0], var_ArrayLowerBound[0]);

                if (PrimitiveTypeMatcher.TypeHashSet.Contains(var_ElementType))
                {
                    int[] var_IndexArray = new int[1];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;

                        var_Writer.Write(var_ElementType, var_Array.GetValue(var_IndexArray));
                    }
                }
                else
                {
                    int[] var_IndexArray = new int[1];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;

#pragma warning disable
                        byte[] var_Bytes = Serializer.Internal_Serialize(var_ElementType, var_Array.GetValue(var_IndexArray));
#pragma warning restore
                        var_Writer.WriteBytesAndSize(var_Bytes, var_Bytes.Length);
                    }
                }
            }
            else if (var_Rank == 2)
            {
                ArrayIndexer_D_2 arrayIndexer = new ArrayIndexer_D_2(var_ArrayLength[0], var_ArrayLength[1], var_ArrayLowerBound[0], var_ArrayLowerBound[1]);

                if (PrimitiveTypeMatcher.TypeHashSet.Contains(var_ElementType))
                {
                    int[] var_IndexArray = new int[2];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;
                        var_IndexArray[1] = arrayIndexer.Current_1;

                        var_Writer.Write(var_ElementType, var_Array.GetValue(var_IndexArray));
                    }
                }
                else
                {
                    int[] var_IndexArray = new int[2];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;
                        var_IndexArray[1] = arrayIndexer.Current_1;

#pragma warning disable
                        byte[] var_Bytes = Serializer.Internal_Serialize(var_ElementType, var_Array.GetValue(var_IndexArray));
#pragma warning restore
                        var_Writer.WriteBytesAndSize(var_Bytes, var_Bytes.Length);
                    }
                }
            }
            else
            {
                ArrayIndexer_D_N arrayIndexer = new ArrayIndexer_D_N(var_ArrayLength, var_ArrayLowerBound);

                if (PrimitiveTypeMatcher.TypeHashSet.Contains(var_ElementType))
                {
                    while (arrayIndexer.MoveNext())
                    {
                        var_Writer.Write(var_ElementType, var_Array.GetValue(arrayIndexer.Current));
                    }
                }
                else
                {
                    while (arrayIndexer.MoveNext())
                    {
#pragma warning disable
                        byte[] var_Bytes = Serializer.Internal_Serialize(var_ElementType, var_Array.GetValue(arrayIndexer.Current));
#pragma warning restore
                        var_Writer.WriteBytesAndSize(var_Bytes, var_Bytes.Length);
                    }
                }
            }

            _Bytes = var_Writer.ToArray();
            return true;
        }

        public bool DeSerialize(Type _Type, byte[] _Bytes, out object _Object)
        {
            if(!_Type.IsArray)
            {
                _Object = null;
                return false;
            }

            ByteReader var_Reader = new ByteReader(_Bytes);

            bool var_IsNull = var_Reader.ReadBoolean();
            if (var_IsNull)
            {
                _Object = null;
                return true;
            }

            //

            Type var_ElementType = _Type.GetElementType();

            //Read rank
            int var_Rank = var_Reader.ReadInt32();

            //Go through each dimension and read the length!
            int[] var_ArrayLength = new int[var_Rank];
            for (int d = 0; d < var_Rank; d++)
            {
                var_ArrayLength[d] = var_Reader.ReadInt32();
            }

            //Go through each dimension and read the lowerbound!
            int[] var_ArrayLowerBound = new int[var_Rank];
            for (int d = 0; d < var_Rank; d++)
            {
                var_ArrayLowerBound[d] = var_Reader.ReadInt32();
            }
            
            var var_Array = Array.CreateInstance(var_ElementType, var_ArrayLength);

            if (var_Rank == 1)
            {
                ArrayIndexer_D_1 arrayIndexer = new ArrayIndexer_D_1(var_ArrayLength[0], var_ArrayLowerBound[0]);

                if (PrimitiveTypeMatcher.TypeHashSet.Contains(var_ElementType))
                {
                    int[] var_IndexArray = new int[1];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;

                        var_Array.SetValue(var_Reader.Read(var_ElementType), var_IndexArray);
                    }
                }
                else
                {
                    int[] var_IndexArray = new int[1];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;

                        byte[] var_Bytes = var_Reader.ReadBytesAndSize();
                        Object var_Item = Serializer.DeSerialize(_Type.GetElementType(), var_Bytes);
                        var_Array.SetValue(var_Item, var_IndexArray);
                    }
                }
            }
            else if (var_Rank == 2)
            {
                ArrayIndexer_D_2 arrayIndexer = new ArrayIndexer_D_2(var_ArrayLength[0], var_ArrayLength[1], var_ArrayLowerBound[0], var_ArrayLowerBound[1]);

                if (PrimitiveTypeMatcher.TypeHashSet.Contains(var_ElementType))
                {
                    int[] var_IndexArray = new int[2];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;
                        var_IndexArray[1] = arrayIndexer.Current_1;

                        var_Array.SetValue(var_Reader.Read(var_ElementType), var_IndexArray);
                    }
                }
                else
                {
                    int[] var_IndexArray = new int[2];
                    while (arrayIndexer.MoveNext())
                    {
                        var_IndexArray[0] = arrayIndexer.Current_0;
                        var_IndexArray[1] = arrayIndexer.Current_1;

                        byte[] var_Bytes = var_Reader.ReadBytesAndSize();
                        Object var_Item = Serializer.DeSerialize(_Type.GetElementType(), var_Bytes);
                        var_Array.SetValue(var_Item, var_IndexArray);
                    }
                }
            }
            else
            {
                ArrayIndexer_D_N arrayIndexer = new ArrayIndexer_D_N(var_ArrayLength, var_ArrayLowerBound);

                if (PrimitiveTypeMatcher.TypeHashSet.Contains(var_ElementType))
                {
                    while (arrayIndexer.MoveNext())
                    {
                        var_Array.SetValue(var_Reader.Read(var_ElementType), arrayIndexer.Current);
                    }
                }
                else
                {
                    while (arrayIndexer.MoveNext())
                    {
                        byte[] var_Bytes = var_Reader.ReadBytesAndSize();
                        Object var_Item = Serializer.DeSerialize(_Type.GetElementType(), var_Bytes);
                        var_Array.SetValue(var_Item, arrayIndexer.Current);
                    }
                }
            }

            _Object = var_Array;
            return true;
        }
    }
}
