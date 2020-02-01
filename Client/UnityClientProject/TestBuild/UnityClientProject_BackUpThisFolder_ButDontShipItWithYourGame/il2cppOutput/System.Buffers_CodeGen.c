#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Resources.ResourceManager System.SR::get_ResourceManager()
extern void SR_get_ResourceManager_mDDE630E07B2A48CDC1D44F5C6DCDA58597AE843D ();
// 0x00000002 System.String System.SR::GetResourceString(System.String,System.String)
extern void SR_GetResourceString_m7204B07E77B8406B899383F98992C6150EA4D3E2 ();
// 0x00000003 System.String System.SR::get_ArgumentException_BufferNotFromPool()
extern void SR_get_ArgumentException_BufferNotFromPool_m6B3A1AB7485B21529D661A23248B8DACD32A25C7 ();
// 0x00000004 System.Type System.SR::get_ResourceType()
extern void SR_get_ResourceType_m18E13AB942DA0B29B543A003136103E57141459A ();
// 0x00000005 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::get_Shared()
// 0x00000006 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::EnsureSharedCreated()
// 0x00000007 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::Create()
// 0x00000008 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::Create(System.Int32,System.Int32)
// 0x00000009 T[] System.Buffers.ArrayPool`1::Rent(System.Int32)
// 0x0000000A System.Void System.Buffers.ArrayPool`1::Return(T[],System.Boolean)
// 0x0000000B System.Void System.Buffers.ArrayPool`1::.ctor()
// 0x0000000C System.Void System.Buffers.ArrayPoolEventSource::BufferRented(System.Int32,System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferRented_m8B49EE27064A40A8965F341CEBFAA4E8016CC190 ();
// 0x0000000D System.Void System.Buffers.ArrayPoolEventSource::BufferAllocated(System.Int32,System.Int32,System.Int32,System.Int32,System.Buffers.ArrayPoolEventSource_BufferAllocatedReason)
extern void ArrayPoolEventSource_BufferAllocated_mDB8EB9931B78A79F44B9A1AFB571FDBBE7C22573 ();
// 0x0000000E System.Void System.Buffers.ArrayPoolEventSource::BufferReturned(System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferReturned_m15382FF901C23CF2589740A672FB282E9EB143F5 ();
// 0x0000000F System.Void System.Buffers.ArrayPoolEventSource::.ctor()
extern void ArrayPoolEventSource__ctor_m8C489092023ABC8AA1453FCDF8D50D93D4D27A40 ();
// 0x00000010 System.Void System.Buffers.ArrayPoolEventSource::.cctor()
extern void ArrayPoolEventSource__cctor_m20744C6552E429FD90EA4C55348B13EC6E08101B ();
// 0x00000011 System.Void System.Buffers.DefaultArrayPool`1::.ctor()
// 0x00000012 System.Void System.Buffers.DefaultArrayPool`1::.ctor(System.Int32,System.Int32)
// 0x00000013 System.Int32 System.Buffers.DefaultArrayPool`1::get_Id()
// 0x00000014 T[] System.Buffers.DefaultArrayPool`1::Rent(System.Int32)
// 0x00000015 System.Void System.Buffers.DefaultArrayPool`1::Return(T[],System.Boolean)
// 0x00000016 System.Void System.Buffers.DefaultArrayPool`1_Bucket::.ctor(System.Int32,System.Int32,System.Int32)
// 0x00000017 System.Int32 System.Buffers.DefaultArrayPool`1_Bucket::get_Id()
// 0x00000018 T[] System.Buffers.DefaultArrayPool`1_Bucket::Rent()
// 0x00000019 System.Void System.Buffers.DefaultArrayPool`1_Bucket::Return(T[])
// 0x0000001A System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
extern void Utilities_SelectBucketIndex_m0D2D2945864E1716A77DE05B881BB902C918F1D9 ();
// 0x0000001B System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
extern void Utilities_GetMaxSizeForBucket_m66CC363CFD48EAAD4C801224D9DEE3CBF0297A2C ();
static Il2CppMethodPointer s_methodPointers[27] = 
{
	SR_get_ResourceManager_mDDE630E07B2A48CDC1D44F5C6DCDA58597AE843D,
	SR_GetResourceString_m7204B07E77B8406B899383F98992C6150EA4D3E2,
	SR_get_ArgumentException_BufferNotFromPool_m6B3A1AB7485B21529D661A23248B8DACD32A25C7,
	SR_get_ResourceType_m18E13AB942DA0B29B543A003136103E57141459A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ArrayPoolEventSource_BufferRented_m8B49EE27064A40A8965F341CEBFAA4E8016CC190,
	ArrayPoolEventSource_BufferAllocated_mDB8EB9931B78A79F44B9A1AFB571FDBBE7C22573,
	ArrayPoolEventSource_BufferReturned_m15382FF901C23CF2589740A672FB282E9EB143F5,
	ArrayPoolEventSource__ctor_m8C489092023ABC8AA1453FCDF8D50D93D4D27A40,
	ArrayPoolEventSource__cctor_m20744C6552E429FD90EA4C55348B13EC6E08101B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Utilities_SelectBucketIndex_m0D2D2945864E1716A77DE05B881BB902C918F1D9,
	Utilities_GetMaxSizeForBucket_m66CC363CFD48EAAD4C801224D9DEE3CBF0297A2C,
};
static const int32_t s_InvokerIndices[27] = 
{
	4,
	1,
	4,
	4,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	302,
	473,
	38,
	23,
	3,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	21,
	21,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x02000004, { 0, 8 } },
	{ 0x02000007, { 8, 12 } },
	{ 0x02000008, { 20, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[23] = 
{
	{ (Il2CppRGCTXDataType)2, 25287 },
	{ (Il2CppRGCTXDataType)3, 37750 },
	{ (Il2CppRGCTXDataType)3, 37751 },
	{ (Il2CppRGCTXDataType)3, 37752 },
	{ (Il2CppRGCTXDataType)3, 37753 },
	{ (Il2CppRGCTXDataType)2, 28660 },
	{ (Il2CppRGCTXDataType)3, 37754 },
	{ (Il2CppRGCTXDataType)3, 37755 },
	{ (Il2CppRGCTXDataType)3, 37756 },
	{ (Il2CppRGCTXDataType)3, 37757 },
	{ (Il2CppRGCTXDataType)2, 25299 },
	{ (Il2CppRGCTXDataType)3, 37758 },
	{ (Il2CppRGCTXDataType)2, 28661 },
	{ (Il2CppRGCTXDataType)2, 25304 },
	{ (Il2CppRGCTXDataType)3, 37759 },
	{ (Il2CppRGCTXDataType)2, 28662 },
	{ (Il2CppRGCTXDataType)2, 25301 },
	{ (Il2CppRGCTXDataType)3, 37760 },
	{ (Il2CppRGCTXDataType)3, 37761 },
	{ (Il2CppRGCTXDataType)3, 37762 },
	{ (Il2CppRGCTXDataType)2, 28663 },
	{ (Il2CppRGCTXDataType)2, 25307 },
	{ (Il2CppRGCTXDataType)3, 37763 },
};
extern const Il2CppCodeGenModule g_System_BuffersCodeGenModule;
const Il2CppCodeGenModule g_System_BuffersCodeGenModule = 
{
	"System.Buffers.dll",
	27,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	23,
	s_rgctxValues,
	NULL,
};
