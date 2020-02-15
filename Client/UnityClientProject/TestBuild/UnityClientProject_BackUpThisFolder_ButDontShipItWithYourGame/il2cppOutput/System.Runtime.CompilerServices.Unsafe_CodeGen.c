#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 T System.Runtime.CompilerServices.Unsafe::Read(System.Void*)
// 0x00000002 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000003 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x00000004 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000005 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_mE6A86CC8B8FD5487C2A5EA37B8CE3D0CD1AC9AC2 ();
// 0x00000006 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m721CD8672D708BEBA741837AEE9E4922CEFC86D2 ();
// 0x00000007 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_mB6268C63B5D88E4C3F93D49EEBD8FD38836A4318 ();
// 0x00000008 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000009 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x0000000A TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x0000000B T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x0000000C T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000000D T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000000E System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x0000000F System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x00000010 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_mB7C7A8A2D5E010FA4CD9DC7F5AB22F858A1FB768 ();
static Il2CppMethodPointer s_methodPointers[16] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_mE6A86CC8B8FD5487C2A5EA37B8CE3D0CD1AC9AC2,
	Unsafe_InitBlockUnaligned_m721CD8672D708BEBA741837AEE9E4922CEFC86D2,
	Unsafe_InitBlockUnaligned_mB6268C63B5D88E4C3F93D49EEBD8FD38836A4318,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_mB7C7A8A2D5E010FA4CD9DC7F5AB22F858A1FB768,
};
static const int32_t s_InvokerIndices[16] = 
{
	-1,
	-1,
	-1,
	-1,
	208,
	1436,
	1436,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	23,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000004, { 0, 1 } },
	{ 0x0600000B, { 1, 1 } },
	{ 0x0600000C, { 2, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, 31461 },
	{ (Il2CppRGCTXDataType)2, 27289 },
	{ (Il2CppRGCTXDataType)2, 27291 },
};
extern const Il2CppCodeGenModule g_System_Runtime_CompilerServices_UnsafeCodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_UnsafeCodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	16,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
};
