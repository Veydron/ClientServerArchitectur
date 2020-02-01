#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<Telepathy.Message>
struct Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294;
// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>
struct ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.TcpClient
struct TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Telepathy.Client
struct Client_t00748E10E80324FD9D1C491A162829231DB6A3FA;
// Telepathy.Client/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A;
// Telepathy.Common
struct Common_tFCC994B3A027AC464326397B2D22751359949226;
// Telepathy.SafeQueue`1<System.Byte[]>
struct SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10;
// Telepathy.SafeQueue`1<System.Object>
struct SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadInterruptedException_t40D8296AA9D9E8B74E29BFAE1089CFACC5F03751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07C2A556387E3B1C144A340F4608E87E198E43E3;
IL2CPP_EXTERN_C String_t* _stringLiteral127F2CAC43CF322FF20CDF7E64956362406DAF02;
IL2CPP_EXTERN_C String_t* _stringLiteral1619BAA13AB771AF07557F27C1908E8741D4EB10;
IL2CPP_EXTERN_C String_t* _stringLiteral3118EE4F680A68045ACAF0DA59222F14B2B82D03;
IL2CPP_EXTERN_C String_t* _stringLiteral323840433491887C80933D471B6D60A7DA8FA3AD;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0381D8F0DE8F7AEDB7644FBD418B4E17DCFCF7;
IL2CPP_EXTERN_C String_t* _stringLiteral66543C5BE27E9FC762E6F61A6DE92E339B2A8B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral74265ECE03804A284CADB382A1C43A65A3BED1D6;
IL2CPP_EXTERN_C String_t* _stringLiteral76F1F10EB368D6EE8D808B40444B229BD727601E;
IL2CPP_EXTERN_C String_t* _stringLiteral9A9D4FB8F6DD38303AC06055F285E03378D0ED1E;
IL2CPP_EXTERN_C String_t* _stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3;
IL2CPP_EXTERN_C String_t* _stringLiteralFF0B2412DB663B29233C65450608AE6CF9A39980;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_mD5CB6F36326250CDC99D015E0E3F1DE60E353A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_ReadMessageBlocking_mC45D12BF3D6423ADC33E218C7B72C2A3043E43A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_ReceiveLoop_mA637B6F419A805ADE0499560C92D0686FFAA2A7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common__cctor_m57448D04D9AAFEBAE67A1C82D4ECA233221736D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98ATelepathy_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger__cctor_m41F7B2E8747B6E5497190A1B4BAAC9482FA83D11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkStreamExtensions_ReadSafely_mEFDB9E4634167152592FDE0BDDD0F5AFB210BE5C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA17699993644A33091DD0C3FB25A70E390E832B4 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>
struct  ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1_Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1_Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88, ____tail_3)); }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * get__tail_3() const { return ____tail_3; }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88, ____head_4)); }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * get__head_4() const { return ____head_4; }
	inline Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t931D93A8E56584FDB5DDC90FF01782FBAB800294 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Console
struct  Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D  : public RuntimeObject
{
public:

public:
};

struct Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * ___cancel_event_5;
	// System.Console_InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdout_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stderr_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdin_2)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Telepathy.Client_<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A  : public RuntimeObject
{
public:
	// Telepathy.Client Telepathy.Client_<>c__DisplayClass11_0::<>4__this
	Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * ___U3CU3E4__this_0;
	// System.String Telepathy.Client_<>c__DisplayClass11_0::ip
	String_t* ___ip_1;
	// System.Int32 Telepathy.Client_<>c__DisplayClass11_0::port
	int32_t ___port_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A, ___U3CU3E4__this_0)); }
	inline Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Client_t00748E10E80324FD9D1C491A162829231DB6A3FA ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_ip_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A, ___ip_1)); }
	inline String_t* get_ip_1() const { return ___ip_1; }
	inline String_t** get_address_of_ip_1() { return &___ip_1; }
	inline void set_ip_1(String_t* value)
	{
		___ip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ip_1), (void*)value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}
};


// Telepathy.Common
struct  Common_tFCC994B3A027AC464326397B2D22751359949226  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message> Telepathy.Common::receiveQueue
	ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * ___receiveQueue_0;
	// System.Boolean Telepathy.Common::NoDelay
	bool ___NoDelay_2;
	// System.Int32 Telepathy.Common::MaxMessageSize
	int32_t ___MaxMessageSize_3;
	// System.Int32 Telepathy.Common::SendTimeout
	int32_t ___SendTimeout_4;

public:
	inline static int32_t get_offset_of_receiveQueue_0() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226, ___receiveQueue_0)); }
	inline ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * get_receiveQueue_0() const { return ___receiveQueue_0; }
	inline ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 ** get_address_of_receiveQueue_0() { return &___receiveQueue_0; }
	inline void set_receiveQueue_0(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * value)
	{
		___receiveQueue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveQueue_0), (void*)value);
	}

	inline static int32_t get_offset_of_NoDelay_2() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226, ___NoDelay_2)); }
	inline bool get_NoDelay_2() const { return ___NoDelay_2; }
	inline bool* get_address_of_NoDelay_2() { return &___NoDelay_2; }
	inline void set_NoDelay_2(bool value)
	{
		___NoDelay_2 = value;
	}

	inline static int32_t get_offset_of_MaxMessageSize_3() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226, ___MaxMessageSize_3)); }
	inline int32_t get_MaxMessageSize_3() const { return ___MaxMessageSize_3; }
	inline int32_t* get_address_of_MaxMessageSize_3() { return &___MaxMessageSize_3; }
	inline void set_MaxMessageSize_3(int32_t value)
	{
		___MaxMessageSize_3 = value;
	}

	inline static int32_t get_offset_of_SendTimeout_4() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226, ___SendTimeout_4)); }
	inline int32_t get_SendTimeout_4() const { return ___SendTimeout_4; }
	inline int32_t* get_address_of_SendTimeout_4() { return &___SendTimeout_4; }
	inline void set_SendTimeout_4(int32_t value)
	{
		___SendTimeout_4 = value;
	}
};

struct Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields
{
public:
	// System.Int32 Telepathy.Common::messageQueueSizeWarning
	int32_t ___messageQueueSizeWarning_1;

public:
	inline static int32_t get_offset_of_messageQueueSizeWarning_1() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields, ___messageQueueSizeWarning_1)); }
	inline int32_t get_messageQueueSizeWarning_1() const { return ___messageQueueSizeWarning_1; }
	inline int32_t* get_address_of_messageQueueSizeWarning_1() { return &___messageQueueSizeWarning_1; }
	inline void set_messageQueueSizeWarning_1(int32_t value)
	{
		___messageQueueSizeWarning_1 = value;
	}
};

struct Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields
{
public:
	// System.Byte[] Telepathy.Common::header
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___header_5;
	// System.Byte[] Telepathy.Common::payload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload_6;

public:
	inline static int32_t get_offset_of_header_5() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields, ___header_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_header_5() const { return ___header_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_header_5() { return &___header_5; }
	inline void set_header_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___header_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_5), (void*)value);
	}

	inline static int32_t get_offset_of_payload_6() { return static_cast<int32_t>(offsetof(Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields, ___payload_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_payload_6() const { return ___payload_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_payload_6() { return &___payload_6; }
	inline void set_payload_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___payload_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_6), (void*)value);
	}
};


// Telepathy.Logger
struct  Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4  : public RuntimeObject
{
public:

public:
};

struct Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields
{
public:
	// System.Action`1<System.String> Telepathy.Logger::Log
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Log_0;
	// System.Action`1<System.String> Telepathy.Logger::LogWarning
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___LogWarning_1;
	// System.Action`1<System.String> Telepathy.Logger::LogError
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___LogError_2;

public:
	inline static int32_t get_offset_of_Log_0() { return static_cast<int32_t>(offsetof(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields, ___Log_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Log_0() const { return ___Log_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Log_0() { return &___Log_0; }
	inline void set_Log_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Log_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Log_0), (void*)value);
	}

	inline static int32_t get_offset_of_LogWarning_1() { return static_cast<int32_t>(offsetof(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields, ___LogWarning_1)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_LogWarning_1() const { return ___LogWarning_1; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_LogWarning_1() { return &___LogWarning_1; }
	inline void set_LogWarning_1(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___LogWarning_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogWarning_1), (void*)value);
	}

	inline static int32_t get_offset_of_LogError_2() { return static_cast<int32_t>(offsetof(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields, ___LogError_2)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_LogError_2() const { return ___LogError_2; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_LogError_2() { return &___LogError_2; }
	inline void set_LogError_2(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___LogError_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogError_2), (void*)value);
	}
};


// Telepathy.NetworkStreamExtensions
struct  NetworkStreamExtensions_t1EFA1A0C947902B32267198CB99A4C4A0E9E4C80  : public RuntimeObject
{
public:

public:
};


// Telepathy.SafeQueue`1<System.Byte[]>
struct  SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> Telepathy.SafeQueue`1::queue
	Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * ___queue_0;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10, ___queue_0)); }
	inline Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * get_queue_0() const { return ___queue_0; }
	inline Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_1_t8562F1B190CBBD67B4F5E105ECADB5DE3B24DD7F * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_0), (void*)value);
	}
};


// Telepathy.Utils
struct  Utils_tA3393C3425EEF65407FEDF107262C468D55B54D0  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct  NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_StreamSocket_5)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Telepathy.Client
struct  Client_t00748E10E80324FD9D1C491A162829231DB6A3FA  : public Common_tFCC994B3A027AC464326397B2D22751359949226
{
public:
	// System.Net.Sockets.TcpClient Telepathy.Client::client
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client_7;
	// System.Threading.Thread Telepathy.Client::receiveThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___receiveThread_8;
	// System.Threading.Thread Telepathy.Client::sendThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___sendThread_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Telepathy.Client::_Connecting
	bool ____Connecting_10;
	// Telepathy.SafeQueue`1<System.Byte[]> Telepathy.Client::sendQueue
	SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * ___sendQueue_11;
	// System.Threading.ManualResetEvent Telepathy.Client::sendPending
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___sendPending_12;

public:
	inline static int32_t get_offset_of_client_7() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___client_7)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get_client_7() const { return ___client_7; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of_client_7() { return &___client_7; }
	inline void set_client_7(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		___client_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_7), (void*)value);
	}

	inline static int32_t get_offset_of_receiveThread_8() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___receiveThread_8)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_receiveThread_8() const { return ___receiveThread_8; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_receiveThread_8() { return &___receiveThread_8; }
	inline void set_receiveThread_8(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___receiveThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_sendThread_9() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___sendThread_9)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_sendThread_9() const { return ___sendThread_9; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_sendThread_9() { return &___sendThread_9; }
	inline void set_sendThread_9(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___sendThread_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendThread_9), (void*)value);
	}

	inline static int32_t get_offset_of__Connecting_10() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ____Connecting_10)); }
	inline bool get__Connecting_10() const { return ____Connecting_10; }
	inline bool* get_address_of__Connecting_10() { return &____Connecting_10; }
	inline void set__Connecting_10(bool value)
	{
		____Connecting_10 = value;
	}

	inline static int32_t get_offset_of_sendQueue_11() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___sendQueue_11)); }
	inline SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * get_sendQueue_11() const { return ___sendQueue_11; }
	inline SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 ** get_address_of_sendQueue_11() { return &___sendQueue_11; }
	inline void set_sendQueue_11(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * value)
	{
		___sendQueue_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendQueue_11), (void*)value);
	}

	inline static int32_t get_offset_of_sendPending_12() { return static_cast<int32_t>(offsetof(Client_t00748E10E80324FD9D1C491A162829231DB6A3FA, ___sendPending_12)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_sendPending_12() const { return ___sendPending_12; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_sendPending_12() { return &___sendPending_12; }
	inline void set_sendPending_12(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___sendPending_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendPending_12), (void*)value);
	}
};


// Telepathy.EventType
struct  EventType_t335A0BD09D746B4FF67DBC19E317F1D79A420267 
{
public:
	// System.Int32 Telepathy.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t335A0BD09D746B4FF67DBC19E317F1D79A420267, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.Sockets.Socket
struct  Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_17)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_18)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_19)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_20)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_40;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_26)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_26() const { return ___AcceptAsyncCallback_26; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_26() { return &___AcceptAsyncCallback_26; }
	inline void set_AcceptAsyncCallback_26(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_27)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_27() const { return ___BeginAcceptCallback_27; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_27() { return &___BeginAcceptCallback_27; }
	inline void set_BeginAcceptCallback_27(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_28() const { return ___BeginAcceptReceiveCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_28() { return &___BeginAcceptReceiveCallback_28; }
	inline void set_BeginAcceptReceiveCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_29() const { return ___ConnectAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_29() { return &___ConnectAsyncCallback_29; }
	inline void set_ConnectAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_30() const { return ___BeginConnectCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_30() { return &___BeginConnectCallback_30; }
	inline void set_BeginConnectCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_31)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_31() const { return ___DisconnectAsyncCallback_31; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_31() { return &___DisconnectAsyncCallback_31; }
	inline void set_DisconnectAsyncCallback_31(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_32)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_32() const { return ___BeginDisconnectCallback_32; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_32() { return &___BeginDisconnectCallback_32; }
	inline void set_BeginDisconnectCallback_32(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_33)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_33() const { return ___ReceiveAsyncCallback_33; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_33() { return &___ReceiveAsyncCallback_33; }
	inline void set_ReceiveAsyncCallback_33(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_34)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_34() const { return ___BeginReceiveCallback_34; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_34() { return &___BeginReceiveCallback_34; }
	inline void set_BeginReceiveCallback_34(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_35() const { return ___BeginReceiveGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_35() { return &___BeginReceiveGenericCallback_35; }
	inline void set_BeginReceiveGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_36() const { return ___ReceiveFromAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_36() { return &___ReceiveFromAsyncCallback_36; }
	inline void set_ReceiveFromAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_37() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_37)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_37() const { return ___BeginReceiveFromCallback_37; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_37() { return &___BeginReceiveFromCallback_37; }
	inline void set_BeginReceiveFromCallback_37(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_38() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_38)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_38() const { return ___SendAsyncCallback_38; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_38() { return &___SendAsyncCallback_38; }
	inline void set_SendAsyncCallback_38(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_39() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_39)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_39() const { return ___BeginSendGenericCallback_39; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_39() { return &___BeginSendGenericCallback_39; }
	inline void set_BeginSendGenericCallback_39(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_40() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_40)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_40() const { return ___SendToAsyncCallback_40; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_40() { return &___SendToAsyncCallback_40; }
	inline void set_SendToAsyncCallback_40(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_40), (void*)value);
	}
};


// System.Net.Sockets.TcpClient
struct  TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_ClientSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_DataStream_2)); }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
{
public:

public:
};


// Telepathy.Message
struct  Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 
{
public:
	// System.Int32 Telepathy.Message::connectionId
	int32_t ___connectionId_0;
	// Telepathy.EventType Telepathy.Message::eventType
	int32_t ___eventType_1;
	// System.Byte[] Telepathy.Message::data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data_2;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_eventType_1() { return static_cast<int32_t>(offsetof(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603, ___eventType_1)); }
	inline int32_t get_eventType_1() const { return ___eventType_1; }
	inline int32_t* get_address_of_eventType_1() { return &___eventType_1; }
	inline void set_eventType_1(int32_t value)
	{
		___eventType_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603, ___data_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Telepathy.Message
struct Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_pinvoke
{
	int32_t ___connectionId_0;
	int32_t ___eventType_1;
	Il2CppSafeArray/*NONE*/* ___data_2;
};
// Native definition for COM marshalling of Telepathy.Message
struct Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_com
{
	int32_t ___connectionId_0;
	int32_t ___eventType_1;
	Il2CppSafeArray/*NONE*/* ___data_2;
};

// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408  : public EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98
{
public:

public:
};


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t40D8296AA9D9E8B74E29BFAE1089CFACC5F03751  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct  Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct  SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5  : public Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5, ___m_EndPoint_20)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* m_Items[1];

public:
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_gshared (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_gshared (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1_Clear_m178E43D7574D6A9FD1B84ADD1FFBAF9BF0688586_gshared (SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1__ctor_mF744F2CCAFC6B253ACC98000817C52DF3B127299_gshared (SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9_gshared (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * ___result0, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_gshared (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.SafeQueue`1<System.Object>::TryDequeueAll(T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeQueue_1_TryDequeueAll_m94EF3FBBB606A38C4D5E1083B5E1DE2876FB98AE_gshared (SafeQueue_1_t73CF4A8B82A998628569E4E7DB947BC37AF48F8D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** ___result0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Connect_m6E8AD9DC60C1B44FCFB27223E88F21AC78ABCC23 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, String_t* ___hostname0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_NoDelay_mEBF30E23E072AD94F1FC9F9D2AD0134016FBE492 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_SendTimeout_m323916999A477F938121A52B1192D6B94DFC3F41 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Common::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ReceiveLoop_mA637B6F419A805ADE0499560C92D0686FFAA2A7A (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * ___receiveQueue2, int32_t ___MaxMessageSize3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void Telepathy.Message::.ctor(System.Int32,Telepathy.EventType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12 (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data2, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::Enqueue(!0)
inline void ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603  ___item0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 , const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Interrupt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Interrupt_m9A3506B1F1CDF92E362922E04E3E38618A4E90B8 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m98744FE21E89CF25CCF84D9785E5AF9FB55D6225 (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TcpClient_set_Client_m932460A905C55EC815A5471D37C2EF7DDE63EFCB_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::.ctor()
inline void ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, const RuntimeMethod*))ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_gshared)(__this, method);
}
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::Clear()
inline void SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *, const RuntimeMethod*))SafeQueue_1_Clear_m178E43D7574D6A9FD1B84ADD1FFBAF9BF0688586_gshared)(__this, method);
}
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::.ctor()
inline void SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33 (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *, const RuntimeMethod*))SafeQueue_1__ctor_mF744F2CCAFC6B253ACC98000817C52DF3B127299_gshared)(__this, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1 (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void Telepathy.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963 (Common_tFCC994B3A027AC464326397B2D22751359949226 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Common::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.SafeQueue`1<System.Byte[]>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780 (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * ___sendQueue2, ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___sendPending3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client::ReceiveThreadFunction(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9_gshared)(__this, ___result0, method);
}
// System.Void Telepathy.Utils::IntToBytesBigEndianNonAlloc(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_IntToBytesBigEndianNonAlloc_m5B2E4C23258C66A1417DEB70ABFCAEFB9C1A862E (int32_t ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Boolean Telepathy.NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_mF118BE4A6AF60145D6C00E6D5D11A8490A4E1414 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___amount2, const RuntimeMethod* method);
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_m0BB7C8D78A1D26D9362333EAB2994B6826A11320 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Boolean Telepathy.Common::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Int32,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_ReadMessageBlocking_mC45D12BF3D6423ADC33E218C7B72C2A3043E43A7 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, int32_t ___MaxMessageSize1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___content2, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882 (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_gshared)(__this, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m59EBCEA32BC9C67B4E432BEA5FF0A42ED0CC8A6F (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.SafeQueue`1<System.Byte[]>::TryDequeueAll(T[]&)
inline bool SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595 (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * __this, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7**, const RuntimeMethod*))SafeQueue_1_TryDequeueAll_m94EF3FBBB606A38C4D5E1083B5E1DE2876FB98AE_gshared)(__this, ___result0, method);
}
// System.Boolean Telepathy.Common::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ___messages1, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline (const RuntimeMethod* method);
// System.Int32 Telepathy.NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_mEFDB9E4634167152592FDE0BDDD0F5AFB210BE5C (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_client_7();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_1 = __this->get_client_7();
		NullCheck(L_1);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_3 = __this->get_client_7();
		NullCheck(L_3);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_4 = TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_4, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
	}

IL_0028:
	{
		return (bool)G_B4_0;
	}
}
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__Connecting_10();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Void Telepathy.Client::ReceiveThreadFunction(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B8_0 = NULL;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B7_0 = NULL;
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * G_B11_0 = NULL;
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * G_B10_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_client_7();
		String_t* L_1 = ___ip0;
		int32_t L_2 = ___port1;
		NullCheck(L_0);
		TcpClient_Connect_m6E8AD9DC60C1B44FCFB27223E88F21AC78ABCC23(L_0, L_1, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(0);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_3 = __this->get_client_7();
		bool L_4 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_NoDelay_2();
		NullCheck(L_3);
		TcpClient_set_NoDelay_mEBF30E23E072AD94F1FC9F9D2AD0134016FBE492(L_3, L_4, /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_5 = __this->get_client_7();
		int32_t L_6 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_SendTimeout_4();
		NullCheck(L_5);
		TcpClient_set_SendTimeout_m323916999A477F938121A52B1192D6B94DFC3F41(L_5, L_6, /*hidden argument*/NULL);
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_7 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_7, __this, (intptr_t)((intptr_t)Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_8 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_8, L_7, /*hidden argument*/NULL);
		__this->set_sendThread_9(L_8);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_9 = __this->get_sendThread_9();
		NullCheck(L_9);
		Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_9, (bool)1, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_10 = __this->get_sendThread_9();
		NullCheck(L_10);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_10, /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_11 = __this->get_client_7();
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_12 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_receiveQueue_0();
		int32_t L_13 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_MaxMessageSize_3();
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common_ReceiveLoop_mA637B6F419A805ADE0499560C92D0686FFAA2A7A(0, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0106;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0089;
		if(il2cpp_codegen_class_is_assignable_from (ThreadInterruptedException_t40D8296AA9D9E8B74E29BFAE1089CFACC5F03751_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e1;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e6;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00eb;
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_14 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral07C2A556387E3B1C144A340F4608E87E198E43E3);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral07C2A556387E3B1C144A340F4608E87E198E43E3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		String_t* L_18 = ___ip0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_17;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralFF0B2412DB663B29233C65450608AE6CF9A39980);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFF0B2412DB663B29233C65450608AE6CF9A39980);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		int32_t L_21 = ___port1;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral9A9D4FB8F6DD38303AC06055F285E03378D0ED1E);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral9A9D4FB8F6DD38303AC06055F285E03378D0ED1E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_24;
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_26);
		String_t* L_27 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_25, /*hidden argument*/NULL);
		NullCheck(L_14);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_14, L_27, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_28 = ((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->get_receiveQueue_0();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12((&L_29), 0, 2, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		NullCheck(L_28);
		ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_28, L_29, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
		goto IL_0106;
	} // end catch (depth: 1)

CATCH_00e1:
	{ // begin catch(System.Threading.ThreadInterruptedException)
		goto IL_0106;
	} // end catch (depth: 1)

CATCH_00e6:
	{ // begin catch(System.Threading.ThreadAbortException)
		goto IL_0106;
	} // end catch (depth: 1)

CATCH_00eb:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_30 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_31 = V_1;
		String_t* L_32 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral323840433491887C80933D471B6D60A7DA8FA3AD, L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_30, L_32, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		goto IL_0106;
	} // end catch (depth: 1)

IL_0106:
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_33 = __this->get_sendThread_9();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_34 = L_33;
		G_B7_0 = L_34;
		if (L_34)
		{
			G_B8_0 = L_34;
			goto IL_0112;
		}
	}
	{
		goto IL_0118;
	}

IL_0112:
	{
		NullCheck(G_B8_0);
		Thread_Interrupt_m9A3506B1F1CDF92E362922E04E3E38618A4E90B8(G_B8_0, /*hidden argument*/NULL);
	}

IL_0118:
	{
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(0);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_35 = __this->get_client_7();
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_36 = L_35;
		G_B10_0 = L_36;
		if (L_36)
		{
			G_B11_0 = L_36;
			goto IL_012d;
		}
	}
	{
		goto IL_0133;
	}

IL_012d:
	{
		NullCheck(G_B11_0);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(G_B11_0, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Connect_m5A61686AC8018F73202AE1005AB4FE6889B7060A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_0 = (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m98744FE21E89CF25CCF84D9785E5AF9FB55D6225(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_2 = V_0;
		String_t* L_3 = ___ip0;
		NullCheck(L_2);
		L_2->set_ip_1(L_3);
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_4 = V_0;
		int32_t L_5 = ___port1;
		NullCheck(L_4);
		L_4->set_port_2(L_5);
		bool L_6 = Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		bool L_7 = Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B3_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_009b;
	}

IL_0033:
	{
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(1);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_9 = (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)il2cpp_codegen_object_new(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var);
		TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF(L_9, /*hidden argument*/NULL);
		__this->set_client_7(L_9);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_10 = __this->get_client_7();
		NullCheck(L_10);
		TcpClient_set_Client_m932460A905C55EC815A5471D37C2EF7DDE63EFCB_inline(L_10, (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL, /*hidden argument*/NULL);
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_11 = (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *)il2cpp_codegen_object_new(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238(L_11, /*hidden argument*/ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_RuntimeMethod_var);
		((Common_tFCC994B3A027AC464326397B2D22751359949226 *)__this)->set_receiveQueue_0(L_11);
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_12 = __this->get_sendQueue_11();
		NullCheck(L_12);
		SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B(L_12, /*hidden argument*/SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * L_13 = V_0;
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_14 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_mD5CB6F36326250CDC99D015E0E3F1DE60E353A38_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_15 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_15, L_14, /*hidden argument*/NULL);
		__this->set_receiveThread_8(L_15);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_16 = __this->get_receiveThread_8();
		NullCheck(L_16);
		Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_16, (bool)1, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_17 = __this->get_receiveThread_8();
		NullCheck(L_17);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_17, /*hidden argument*/NULL);
	}

IL_009b:
	{
		return;
	}
}
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3 (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Disconnect_m4F84F228BB93B41776E6ECDBC9D3753CE88673D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B6_0 = NULL;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * G_B5_0 = NULL;
	{
		bool L_0 = Client_get_Connecting_m4A163551916F14C2EF31648888C19DD1BE6BEA40(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = Client_get_Connected_m98098892072CD1FEB5926C8F0416422DAD4702FE(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_3 = __this->get_client_7();
		NullCheck(L_3);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_3, /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_4 = __this->get_receiveThread_8();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_5 = L_4;
		G_B5_0 = L_5;
		if (L_5)
		{
			G_B6_0 = L_5;
			goto IL_002f;
		}
	}
	{
		goto IL_0035;
	}

IL_002f:
	{
		NullCheck(G_B6_0);
		Thread_Interrupt_m9A3506B1F1CDF92E362922E04E3E38618A4E90B8(G_B6_0, /*hidden argument*/NULL);
	}

IL_0035:
	{
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(0);
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_6 = __this->get_sendQueue_11();
		NullCheck(L_6);
		SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B(L_6, /*hidden argument*/SafeQueue_1_Clear_mFD3440BCB58F0F84F0F4BEC9CF69128C9E3B231B_RuntimeMethod_var);
		__this->set_client_7((TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void Telepathy.Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client__ctor_mCA926EB641779A5A0B7FC0A0BCC17F8E7D50796B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_0 = (SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 *)il2cpp_codegen_object_new(SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10_il2cpp_TypeInfo_var);
		SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33(L_0, /*hidden argument*/SafeQueue_1__ctor_m460E7015E13028426B10F3C99C741A9648354C33_RuntimeMethod_var);
		__this->set_sendQueue_11(L_0);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_1 = (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *)il2cpp_codegen_object_new(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_sendPending_12(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client::<ReceiveThreadFunction>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E (Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_U3CReceiveThreadFunctionU3Eb__10_0_m332AE09FEA6BED9159EACABA907653889E42EB0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_client_7();
		SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_1 = __this->get_sendQueue_11();
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_2 = __this->get_sendPending_12();
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780(0, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Telepathy.Client_<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m98744FE21E89CF25CCF84D9785E5AF9FB55D6225 (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client_<>c__DisplayClass11_0::<Connect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_mD5CB6F36326250CDC99D015E0E3F1DE60E353A38 (U3CU3Ec__DisplayClass11_0_tDD188502825F8BF1DDA40A52712D65898111E82A * __this, const RuntimeMethod* method)
{
	{
		Client_t00748E10E80324FD9D1C491A162829231DB6A3FA * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_ip_1();
		int32_t L_2 = __this->get_port_2();
		NullCheck(L_0);
		Client_ReceiveThreadFunction_mC2BD6BAFB0F0AFAFB27A2A1575CC5F641A2EA166(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Telepathy.Common::GetNextMessage(Telepathy.Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28 (Common_tFCC994B3A027AC464326397B2D22751359949226 * __this, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_GetNextMessage_mFF794F304B59C60898F5F6927DD8EBD063864A28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_0 = __this->get_receiveQueue_0();
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * L_1 = ___message0;
		NullCheck(L_0);
		bool L_2 = ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9(L_0, (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *)L_1, /*hidden argument*/ConcurrentQueue_1_TryDequeue_m6EC4EDDD91C401F34806DE32DC3158C849C1B5A9_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Telepathy.Common::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ___messages1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			V_0 = 0;
			V_2 = 0;
			goto IL_0016;
		}

IL_0008:
		{
			int32_t L_0 = V_0;
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_1 = ___messages1;
			int32_t L_2 = V_2;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			NullCheck(L_4);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))));
			int32_t L_5 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		}

IL_0016:
		{
			int32_t L_6 = V_2;
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_7 = ___messages1;
			NullCheck(L_7);
			V_3 = (bool)((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))? 1 : 0);
			bool L_8 = V_3;
			if (L_8)
			{
				goto IL_0008;
			}
		}

IL_0020:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_payload_6();
			if (!L_9)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_payload_6();
			NullCheck(L_10);
			int32_t L_11 = V_0;
			G_B7_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))) < ((int32_t)L_11))? 1 : 0);
			goto IL_0034;
		}

IL_0033:
		{
			G_B7_0 = 1;
		}

IL_0034:
		{
			V_4 = (bool)G_B7_0;
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_0045;
			}
		}

IL_003a:
		{
			int32_t L_13 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_13);
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->set_payload_6(L_14);
		}

IL_0045:
		{
			V_1 = 0;
			V_5 = 0;
			goto IL_00c7;
		}

IL_004c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
			V_6 = (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_16 = V_6;
			if (!L_16)
			{
				goto IL_0066;
			}
		}

IL_005b:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->set_header_5(L_17);
		}

IL_0066:
		{
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_18 = ___messages1;
			int32_t L_19 = V_5;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			NullCheck(L_21);
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
			Utils_IntToBytesBigEndianNonAlloc_m5B2E4C23258C66A1417DEB70ABFCAEFB9C1A862E((((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))), L_22, /*hidden argument*/NULL);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_payload_6();
			int32_t L_25 = V_1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
			NullCheck(L_26);
			Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_23, 0, (RuntimeArray *)(RuntimeArray *)L_24, L_25, (((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))), /*hidden argument*/NULL);
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_27 = ___messages1;
			int32_t L_28 = V_5;
			NullCheck(L_27);
			int32_t L_29 = L_28;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_payload_6();
			int32_t L_32 = V_1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
			NullCheck(L_33);
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_34 = ___messages1;
			int32_t L_35 = V_5;
			NullCheck(L_34);
			int32_t L_36 = L_35;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
			NullCheck(L_37);
			Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_30, 0, (RuntimeArray *)(RuntimeArray *)L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))), (((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))), /*hidden argument*/NULL);
			int32_t L_38 = V_1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
			NullCheck(L_39);
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_40 = ___messages1;
			int32_t L_41 = V_5;
			NullCheck(L_40);
			int32_t L_42 = L_41;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			NullCheck(L_43);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))));
			int32_t L_44 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00c7:
		{
			int32_t L_45 = V_5;
			ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_46 = ___messages1;
			NullCheck(L_46);
			V_7 = (bool)((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))? 1 : 0);
			bool L_47 = V_7;
			if (L_47)
			{
				goto IL_004c;
			}
		}

IL_00d7:
		{
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_48 = ___stream0;
			IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_49 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_payload_6();
			int32_t L_50 = V_0;
			NullCheck(L_48);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_48, L_49, 0, L_50);
			V_8 = (bool)1;
			goto IL_0109;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ea;
		throw e;
	}

CATCH_00ea:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_51 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
		Exception_t * L_52 = V_9;
		String_t* L_53 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral74265ECE03804A284CADB382A1C43A65A3BED1D6, L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_51, L_53, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		V_8 = (bool)0;
		goto IL_0109;
	} // end catch (depth: 1)

IL_0109:
	{
		bool L_54 = V_8;
		return L_54;
	}
}
// System.Boolean Telepathy.Common::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Int32,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_ReadMessageBlocking_mC45D12BF3D6423ADC33E218C7B72C2A3043E43A7 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, int32_t ___MaxMessageSize1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_ReadMessageBlocking_mC45D12BF3D6423ADC33E218C7B72C2A3043E43A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___content2;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->set_header_5(L_3);
	}

IL_001b:
	{
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_4 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
		bool L_6 = NetworkStreamExtensions_ReadExactly_mF118BE4A6AF60145D6C00E6D5D11A8490A4E1414(L_4, L_5, 4, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0083;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_header_5();
		int32_t L_9 = Utils_BytesToIntBigEndian_m0BB7C8D78A1D26D9362333EAB2994B6826A11320(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = ___MaxMessageSize1;
		V_4 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_13 = ___content2;
		int32_t L_14 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_14);
		*((RuntimeObject **)L_13) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)(RuntimeObject *)L_15);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_16 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_17 = ___content2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_17);
		int32_t L_19 = V_0;
		bool L_20 = NetworkStreamExtensions_ReadExactly_mF118BE4A6AF60145D6C00E6D5D11A8490A4E1414(L_16, L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		goto IL_0083;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_21 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogWarning_1();
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral5C0381D8F0DE8F7AEDB7644FBD418B4E17DCFCF7, L_24, _stringLiteral127F2CAC43CF322FF20CDF7E64956362406DAF02, /*hidden argument*/NULL);
		NullCheck(L_21);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_21, L_25, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		V_3 = (bool)0;
		goto IL_0083;
	}

IL_0083:
	{
		bool L_26 = V_3;
		return L_26;
	}
}
// System.Void Telepathy.Common::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ReceiveLoop_mA637B6F419A805ADE0499560C92D0686FFAA2A7A (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * ___receiveQueue2, int32_t ___MaxMessageSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_ReceiveLoop_mA637B6F419A805ADE0499560C92D0686FFAA2A7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * V_0 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = ___client1;
		NullCheck(L_0);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_1 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_3 = ___receiveQueue2;
				int32_t L_4 = ___connectionId0;
				Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603  L_5;
				memset((&L_5), 0, sizeof(L_5));
				Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12((&L_5), L_4, 0, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
				NullCheck(L_3);
				ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_3, L_5, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
				goto IL_00ad;
			}

IL_0023:
			{
				NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_6 = V_0;
				int32_t L_7 = ___MaxMessageSize3;
				IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
				bool L_8 = Common_ReadMessageBlocking_mC45D12BF3D6423ADC33E218C7B72C2A3043E43A7(L_6, L_7, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_2), /*hidden argument*/NULL);
				V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_0036;
				}
			}

IL_0034:
			{
				goto IL_00b5;
			}

IL_0036:
			{
				ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_10 = ___receiveQueue2;
				int32_t L_11 = ___connectionId0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_2;
				Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603  L_13;
				memset((&L_13), 0, sizeof(L_13));
				Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12((&L_13), L_11, 1, L_12, /*hidden argument*/NULL);
				NullCheck(L_10);
				ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_10, L_13, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
				ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_14 = ___receiveQueue2;
				NullCheck(L_14);
				int32_t L_15 = ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882(L_14, /*hidden argument*/ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_RuntimeMethod_var);
				IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
				int32_t L_16 = ((Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields*)il2cpp_codegen_static_fields_for(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->get_messageQueueSizeWarning_1();
				V_4 = (bool)((((int32_t)L_15) > ((int32_t)L_16))? 1 : 0);
				bool L_17 = V_4;
				if (!L_17)
				{
					goto IL_00ac;
				}
			}

IL_0058:
			{
				IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
				DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_18 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
				DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_19 = V_1;
				TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_20 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_18, L_19, /*hidden argument*/NULL);
				V_5 = L_20;
				double L_21 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_5), /*hidden argument*/NULL);
				V_6 = (bool)((((double)L_21) > ((double)(10.0)))? 1 : 0);
				bool L_22 = V_6;
				if (!L_22)
				{
					goto IL_00ab;
				}
			}

IL_007e:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
				Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_23 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_LogWarning_1();
				ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_24 = ___receiveQueue2;
				NullCheck(L_24);
				int32_t L_25 = ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882(L_24, /*hidden argument*/ConcurrentQueue_1_get_Count_mE8D982D8EEBBD40AB4C45785A2A6B2D10B60D882_RuntimeMethod_var);
				int32_t L_26 = L_25;
				RuntimeObject * L_27 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_26);
				String_t* L_28 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral1619BAA13AB771AF07557F27C1908E8741D4EB10, L_27, _stringLiteral3118EE4F680A68045ACAF0DA59222F14B2B82D03, /*hidden argument*/NULL);
				NullCheck(L_23);
				Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_23, L_28, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
				IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
				DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_29 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
				V_1 = L_29;
			}

IL_00ab:
			{
			}

IL_00ac:
			{
			}

IL_00ad:
			{
				V_7 = (bool)1;
				goto IL_0023;
			}

IL_00b5:
			{
				goto IL_00f2;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00b8;
			throw e;
		}

CATCH_00b8:
		{ // begin catch(System.Exception)
			V_8 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
			Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_30 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_31;
			NullCheck(L_32);
			ArrayElementTypeCheck (L_32, _stringLiteral76F1F10EB368D6EE8D808B40444B229BD727601E);
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral76F1F10EB368D6EE8D808B40444B229BD727601E);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_32;
			int32_t L_34 = ___connectionId0;
			int32_t L_35 = L_34;
			RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
			NullCheck(L_33);
			ArrayElementTypeCheck (L_33, L_36);
			(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_36);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = L_33;
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, _stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_37;
			Exception_t * L_39 = V_8;
			NullCheck(L_38);
			ArrayElementTypeCheck (L_38, L_39);
			(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_39);
			String_t* L_40 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_38, /*hidden argument*/NULL);
			NullCheck(L_30);
			Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_30, L_40, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
			goto IL_00f2;
		} // end catch (depth: 2)

IL_00f2:
		{
			IL2CPP_LEAVE(0x114, FINALLY_00f4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f4;
	}

FINALLY_00f4:
	{ // begin finally (depth: 1)
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_41 = V_0;
		NullCheck(L_41);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_41);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_42 = ___client1;
		NullCheck(L_42);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_42, /*hidden argument*/NULL);
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_43 = ___receiveQueue2;
		int32_t L_44 = ___connectionId0;
		Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12((&L_45), L_44, 2, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		NullCheck(L_43);
		ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59(L_43, L_45, /*hidden argument*/ConcurrentQueue_1_Enqueue_m6125CF593F2A8706CB4BF556C3061D60B897ED59_RuntimeMethod_var);
		IL2CPP_END_FINALLY(244)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(244)
	{
		IL2CPP_JUMP_TBL(0x114, IL_0114)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0114:
	{
		return;
	}
}
// System.Void Telepathy.Common::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.SafeQueue`1<System.Byte[]>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780 (int32_t ___connectionId0, TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___client1, SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * ___sendQueue2, ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___sendPending3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_SendLoop_m557A26F5F590B71B7AD5E999C10278C91D7FD780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * V_0 = NULL;
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = ___client1;
		NullCheck(L_0);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_1 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				goto IL_0039;
			}

IL_000b:
			{
				ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_2 = ___sendPending3;
				NullCheck(L_2);
				EventWaitHandle_Reset_m59EBCEA32BC9C67B4E432BEA5FF0A42ED0CC8A6F(L_2, /*hidden argument*/NULL);
				SafeQueue_1_tFFEE4F1831828D606378CF003D0003A4A7424F10 * L_3 = ___sendQueue2;
				NullCheck(L_3);
				bool L_4 = SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595(L_3, (ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7**)(&V_1), /*hidden argument*/SafeQueue_1_TryDequeueAll_m25C99C52B06FCD69F34DF4AA87DB4AAC0A465595_RuntimeMethod_var);
				V_2 = L_4;
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0031;
				}
			}

IL_001f:
			{
				NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_6 = V_0;
				ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_7 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var);
				bool L_8 = Common_SendMessagesBlocking_m5066E8D1C091012F7D4A3354EFB65FE95C7C5C33(L_6, L_7, /*hidden argument*/NULL);
				V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_0030;
				}
			}

IL_002e:
			{
				goto IL_0045;
			}

IL_0030:
			{
			}

IL_0031:
			{
				ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_10 = ___sendPending3;
				NullCheck(L_10);
				VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_10);
			}

IL_0039:
			{
				TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_11 = ___client1;
				NullCheck(L_11);
				bool L_12 = TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C(L_11, /*hidden argument*/NULL);
				V_4 = L_12;
				bool L_13 = V_4;
				if (L_13)
				{
					goto IL_000b;
				}
			}

IL_0045:
			{
				goto IL_008c;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t0B7CFB34B2901B695FBCFF84E0A1EBDFC8177468_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0048;
			if(il2cpp_codegen_class_is_assignable_from (ThreadInterruptedException_t40D8296AA9D9E8B74E29BFAE1089CFACC5F03751_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_004d;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0052;
			throw e;
		}

CATCH_0048:
		{ // begin catch(System.Threading.ThreadAbortException)
			goto IL_008c;
		} // end catch (depth: 2)

CATCH_004d:
		{ // begin catch(System.Threading.ThreadInterruptedException)
			goto IL_008c;
		} // end catch (depth: 2)

CATCH_0052:
		{ // begin catch(System.Exception)
			V_5 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var);
			Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_14 = ((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->get_Log_0();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, _stringLiteral66543C5BE27E9FC762E6F61A6DE92E339B2A8B9F);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral66543C5BE27E9FC762E6F61A6DE92E339B2A8B9F);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
			int32_t L_18 = ___connectionId0;
			int32_t L_19 = L_18;
			RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, L_20);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_17;
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, _stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE8DF8A178D45C37CCBA3FBF4BD8950103C51ADC3);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_21;
			Exception_t * L_23 = V_5;
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_23);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
			String_t* L_24 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_22, /*hidden argument*/NULL);
			NullCheck(L_14);
			Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_14, L_24, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
			goto IL_008c;
		} // end catch (depth: 2)

IL_008c:
		{
			IL2CPP_LEAVE(0x9F, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_25 = V_0;
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_25);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_26 = ___client1;
		NullCheck(L_26);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_26, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(142)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0x9F, IL_009f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009f:
	{
		return;
	}
}
// System.Void Telepathy.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963 (Common_tFCC994B3A027AC464326397B2D22751359949226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common__ctor_m13F2E5C6F6BF201A417C3D2F7EEF1068D6C3F963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 * L_0 = (ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88 *)il2cpp_codegen_object_new(ConcurrentQueue_1_tF0BE801E2109C7C4BC3312B8B6B682B29A371A88_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238(L_0, /*hidden argument*/ConcurrentQueue_1__ctor_mE0C98FA8DF17628759165E71ABA079F43E138238_RuntimeMethod_var);
		__this->set_receiveQueue_0(L_0);
		__this->set_NoDelay_2((bool)1);
		__this->set_MaxMessageSize_3(((int32_t)16384));
		__this->set_SendTimeout_4(((int32_t)5000));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Common::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__cctor_m57448D04D9AAFEBAE67A1C82D4ECA233221736D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common__cctor_m57448D04D9AAFEBAE67A1C82D4ECA233221736D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Common_tFCC994B3A027AC464326397B2D22751359949226_StaticFields*)il2cpp_codegen_static_fields_for(Common_tFCC994B3A027AC464326397B2D22751359949226_il2cpp_TypeInfo_var))->set_messageQueueSizeWarning_1(((int32_t)100000));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Telepathy.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_m41F7B2E8747B6E5497190A1B4BAAC9482FA83D11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger__cctor_m41F7B2E8747B6E5497190A1B4BAAC9482FA83D11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_0, NULL, (intptr_t)((intptr_t)Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_Log_0(L_0);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_1, NULL, (intptr_t)((intptr_t)Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_LogWarning_1(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline(/*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_3 = L_2;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_4 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_4, L_3, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_3, 18)), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t2B713402D88A4DE569D1D2017C4686DF622E61F4_il2cpp_TypeInfo_var))->set_LogError_2(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshal_pinvoke(const Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603& unmarshaled, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_pinvoke& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.get_connectionId_0();
	marshaled.___eventType_1 = unmarshaled.get_eventType_1();
	marshaled.___data_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_data_2());
}
IL2CPP_EXTERN_C void Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshal_pinvoke_back(const Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_pinvoke& marshaled, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_connectionId_temp_0 = 0;
	unmarshaled_connectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.set_connectionId_0(unmarshaled_connectionId_temp_0);
	int32_t unmarshaled_eventType_temp_1 = 0;
	unmarshaled_eventType_temp_1 = marshaled.___eventType_1;
	unmarshaled.set_eventType_1(unmarshaled_eventType_temp_1);
	unmarshaled.set_data_2((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, marshaled.___data_2));
}
// Conversion method for clean up from marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshal_pinvoke_cleanup(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___data_2);
	marshaled.___data_2 = NULL;
}
// Conversion methods for marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshal_com(const Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603& unmarshaled, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_com& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.get_connectionId_0();
	marshaled.___eventType_1 = unmarshaled.get_eventType_1();
	marshaled.___data_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_data_2());
}
IL2CPP_EXTERN_C void Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshal_com_back(const Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_com& marshaled, Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_connectionId_temp_0 = 0;
	unmarshaled_connectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.set_connectionId_0(unmarshaled_connectionId_temp_0);
	int32_t unmarshaled_eventType_temp_1 = 0;
	unmarshaled_eventType_temp_1 = marshaled.___eventType_1;
	unmarshaled.set_eventType_1(unmarshaled_eventType_temp_1);
	unmarshaled.set_data_2((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, marshaled.___data_2));
}
// Conversion method for clean up from marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshal_com_cleanup(Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___data_2);
	marshaled.___data_2 = NULL;
}
// System.Void Telepathy.Message::.ctor(System.Int32,Telepathy.EventType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12 (Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___connectionId0;
		__this->set_connectionId_0(L_0);
		int32_t L_1 = ___eventType1;
		__this->set_eventType_1(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data2;
		__this->set_data_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12_AdjustorThunk (RuntimeObject * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data2, const RuntimeMethod* method)
{
	Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 * _thisAdjusted = reinterpret_cast<Message_t940B2E5E84B40C284B9D6DA8F6319D5B3E0CE603 *>(__this + 1);
	Message__ctor_mBEF974E200260B769415EFB7C6D35483DEA19D12(_thisAdjusted, ___connectionId0, ___eventType1, ___data2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Telepathy.NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_mEFDB9E4634167152592FDE0BDDD0F5AFB210BE5C (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkStreamExtensions_ReadSafely_mEFDB9E4634167152592FDE0BDDD0F5AFB210BE5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_0 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer1;
		int32_t L_2 = ___offset2;
		int32_t L_3 = ___size3;
		NullCheck(L_0);
		int32_t L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0014;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000e;
		throw e;
	}

CATCH_000e:
	{ // begin catch(System.IO.IOException)
		V_0 = 0;
		goto IL_0014;
	} // end catch (depth: 1)

IL_0014:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Telepathy.NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_mF118BE4A6AF60145D6C00E6D5D11A8490A4E1414 (NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___amount2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		int32_t L_0 = ___amount2;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_2 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer1;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = NetworkStreamExtensions_ReadSafely_mEFDB9E4634167152592FDE0BDDD0F5AFB210BE5C(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0035;
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
	}

IL_0026:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___amount2;
		V_5 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_14 = V_4;
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Telepathy.Utils::IntToBytesBigEndianNonAlloc(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_IntToBytesBigEndianNonAlloc_m5B2E4C23258C66A1417DEB70ABFCAEFB9C1A862E (int32_t ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes1;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)24)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes1;
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___bytes1;
		int32_t L_5 = ___value0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___bytes1;
		int32_t L_7 = ___value0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)L_7))));
		return;
	}
}
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_m0BB7C8D78A1D26D9362333EAB2994B6826A11320 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___bytes0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___bytes0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method)
{
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_ClientSocket_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TcpClient_set_Client_m932460A905C55EC815A5471D37C2EF7DDE63EFCB_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = ___value0;
		__this->set_m_ClientSocket_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98ATelepathy_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var))->get_stderr_1();
		return L_0;
	}
}
