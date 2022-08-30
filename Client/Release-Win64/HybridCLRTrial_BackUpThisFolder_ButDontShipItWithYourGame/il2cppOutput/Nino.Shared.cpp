#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>
struct ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// Nino.Shared.UncheckedStack`1<System.Byte[]>
struct UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549;
// Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream>
struct UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73;
// Nino.Shared.UncheckedStack`1<System.Object>
struct UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Nino.Shared.IO.DeflateStream[]
struct DeflateStreamU5BU5D_tA5F6D361A1286BCF34D983CEE33FDD08ECA5B134;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// Nino.Shared.IO.DeflateStream
struct DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// Nino.Shared.IO.DeflateStreamNative
struct DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t3B9217E181EF71597DFBD19831C246CC19018BBF;
// System.Exception
struct Exception_t;
// Nino.Shared.IO.FlexibleStream
struct FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t1B042322F7D06DEF403CB4846C903C3E81AFFCDE;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Nino.Shared.IO.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t68103BAE5A2686167BF5624C92AAD7D5487639C7;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Nino.Shared.IO.DeflateStream/ReadMethod
struct ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE;
// Nino.Shared.IO.DeflateStream/WriteMethod
struct WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B;
// Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803;
// Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t857EFF3F6E2498403A602D550FC04119E0F33BD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F;
IL2CPP_EXTERN_C String_t* _stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral07702D5F5969B544D214EA9E9468070CF19EA4BA;
IL2CPP_EXTERN_C String_t* _stringLiteral13CC24095DC438E015CCDE6A713B03FF64343A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163;
IL2CPP_EXTERN_C String_t* _stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910;
IL2CPP_EXTERN_C String_t* _stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral31C53F202B67119D22AC507AAE892587165F9D66;
IL2CPP_EXTERN_C String_t* _stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB7D84BC3C90F349117D6F4100F358B896400FD;
IL2CPP_EXTERN_C String_t* _stringLiteral40B3106E8D65A9AFED8EFCECC655597DF4514316;
IL2CPP_EXTERN_C String_t* _stringLiteral44D061897625DA0245637E66BA8370C7473BE825;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral53549F14C4C0C01E846937308C01413567514ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral547999BA16094C3536189EA1CC631B96EFC47117;
IL2CPP_EXTERN_C String_t* _stringLiteral59BD369CF985844B111CA4447943A285D359441C;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C85FFE5902E6E4DE2B24B994E3F2BE85344A417;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434;
IL2CPP_EXTERN_C String_t* _stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408;
IL2CPP_EXTERN_C String_t* _stringLiteral657077AAA5067FE1724B8C2C594BA0E8549AEF0F;
IL2CPP_EXTERN_C String_t* _stringLiteral750AF247E170327CFECDB02B23AF71333977CE80;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7;
IL2CPP_EXTERN_C String_t* _stringLiteral83E7A7D8CF7E1B966366C4730A2B294B57921217;
IL2CPP_EXTERN_C String_t* _stringLiteral8482980BCAC9FE731DE3516F3F8FD93971225945;
IL2CPP_EXTERN_C String_t* _stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D;
IL2CPP_EXTERN_C String_t* _stringLiteral9368F3E20C1F0D81CFC05A20CCDB13D4C5D49511;
IL2CPP_EXTERN_C String_t* _stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551;
IL2CPP_EXTERN_C String_t* _stringLiteral9942CCD703E935161FA1380844C0F159BF64D1D9;
IL2CPP_EXTERN_C String_t* _stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA6A7127E5787A7B54E2108BF8B31ABC7480250A5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE88896FEC103CD29973D839C81ADBFC150CFA41;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBEB17699EF324D4A48BB4C3E5AAD55C872328BA8;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralDF44D04766D2C00AF1E5362E916202DC9ADCDDBF;
IL2CPP_EXTERN_C String_t* _stringLiteralE04815E8A9DB8CC5111396684998019EC9A834C3;
IL2CPP_EXTERN_C String_t* _stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE346190681BC32736373A919BC84C5142A8E8D00;
IL2CPP_EXTERN_C String_t* _stringLiteralE46175CB698B559BFB05A69EA06D5567E8EA40CC;
IL2CPP_EXTERN_C String_t* _stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD;
IL2CPP_EXTERN_C String_t* _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
IL2CPP_EXTERN_C String_t* _stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41;
IL2CPP_EXTERN_C String_t* _stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstMgr__cctor_mA915E003E8F41A457A5E405541B3A4737C9DDEAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedRead_mEC47FA8621529D848F62FB3C4808EB964B199384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedWrite_m4DCEDDED79DFBD1247A2FDEDC4F1E1690B1EC6A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_mB13146C4B51BF65A82A4B20DCB907DC88CB74419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadInternal_m0A536FECF9E2713195000EDFB2FF9434E052C094_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_m88E6788456F7002BBE9EF3A45FDB629D6DE7DA0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_mB2971C5DB496E3E89EEC0DE73482BB6B29B14BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteInternal_mAC7ABAF2CDFBCD979AA2AB3E7231AAC22CDF69B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_mAF3385768A3540318B18B3245CB0A391DE6997C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mDC0AD1D47C36AF192BDF4FC2BAA5EF5268385F9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_m6EFA060015060A4B9A2D37DBB9D783822C5DFBF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_GetBuffer_m80AD9FFA7FBB95BC43083AF893DF0F9735960F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_Read_m343FA5C6E18CD7F3545970B5CDE3DFB2524CA415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_Seek_m8F3499DE0A7FF3F170C8070EF59D07B5F2DF086E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_SetLength_m75F1216867BBF4FB19B533114B87F70A2CE8D745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_WriteByte_m5278A101FB3D1456502E525FE2E2AAA7AD42A885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_set_Capacity_mD697A656FB3B4E742D81F55FEEAE1E3ED8E6C4F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleStream_set_Position_m5A52CBCA555020455DD06FC89DDADEF0C16D881E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Peak_mC59B25790CAD531AD4CB00962DBB9BB8FFEAED8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Request_m51E42690C6EC44A227143B78D004A3E5BCB60535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_mDB88DE7126A54B1772B44DD6E741F5024A423369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PowerOf2_RoundUpToPowerOf2_mA2FB6EBF44A21C6300DB4486BB8AD40D2A13EF29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1_Peek_m3CF46E9C8FDB90DE8F38FF91B73E867F8D07725A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1_Pop_m70767D86B3C97D2386C4BE200394DF24475B81D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1_Push_m97B4F2C5A073787DD3F0A81688A64F9143D043D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1__ctor_m68464CCA66AC7700AB011194FA6C3F984E375716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1__ctor_mC610218C686ABB72B85B56272635FE35EECE82FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t197258D22601EE380F47D473166520556087ECB6 
{
};

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};

struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>
struct ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73  : public RuntimeObject
{
	// T* Nino.Shared.IO.ExtensibleBuffer`1::<Data>k__BackingField
	uint8_t* ___U3CDataU3Ek__BackingField_1;
	// System.Byte Nino.Shared.IO.ExtensibleBuffer`1::sizeOfT
	uint8_t ___sizeOfT_2;
	// System.Int32 Nino.Shared.IO.ExtensibleBuffer`1::ExpandSize
	int32_t ___ExpandSize_3;
	// System.Int32 Nino.Shared.IO.ExtensibleBuffer`1::_totalLength
	int32_t ____totalLength_4;
};

// Nino.Shared.UncheckedStack`1<System.Byte[]>
struct UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549  : public RuntimeObject
{
	// T[] Nino.Shared.UncheckedStack`1::_array
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____array_0;
	// System.Int32 Nino.Shared.UncheckedStack`1::_size
	int32_t ____size_1;
	// System.Int32 Nino.Shared.UncheckedStack`1::_version
	int32_t ____version_2;
	// System.Object Nino.Shared.UncheckedStack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

struct UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549_StaticFields
{
	// T[] Nino.Shared.UncheckedStack`1::_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____emptyArray_5;
};

// Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream>
struct UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73  : public RuntimeObject
{
	// T[] Nino.Shared.UncheckedStack`1::_array
	DeflateStreamU5BU5D_tA5F6D361A1286BCF34D983CEE33FDD08ECA5B134* ____array_0;
	// System.Int32 Nino.Shared.UncheckedStack`1::_size
	int32_t ____size_1;
	// System.Int32 Nino.Shared.UncheckedStack`1::_version
	int32_t ____version_2;
	// System.Object Nino.Shared.UncheckedStack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

struct UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73_StaticFields
{
	// T[] Nino.Shared.UncheckedStack`1::_emptyArray
	DeflateStreamU5BU5D_tA5F6D361A1286BCF34D983CEE33FDD08ECA5B134* ____emptyArray_5;
};

// Nino.Shared.UncheckedStack`1<System.Object>
struct UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0  : public RuntimeObject
{
	// T[] Nino.Shared.UncheckedStack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 Nino.Shared.UncheckedStack`1::_size
	int32_t ____size_1;
	// System.Int32 Nino.Shared.UncheckedStack`1::_version
	int32_t ____version_2;
	// System.Object Nino.Shared.UncheckedStack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

struct UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0_StaticFields
{
	// T[] Nino.Shared.UncheckedStack`1::_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Nino.Shared.IO.BufferPool
struct BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6  : public RuntimeObject
{
};

struct BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields
{
	// Nino.Shared.UncheckedStack`1<System.Byte[]> Nino.Shared.IO.BufferPool::Buffers
	UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* ___Buffers_0;
	// System.Object Nino.Shared.IO.BufferPool::Lock
	RuntimeObject* ___Lock_1;
};

// Nino.Shared.Mgr.CompressMgr
struct CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059  : public RuntimeObject
{
};

struct CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields
{
	// Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream> Nino.Shared.Mgr.CompressMgr::CompressStreams
	UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* ___CompressStreams_0;
	// Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream> Nino.Shared.Mgr.CompressMgr::DecompressStreams
	UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* ___DecompressStreams_1;
	// System.Object Nino.Shared.Mgr.CompressMgr::CompressedLock
	RuntimeObject* ___CompressedLock_2;
	// System.Object Nino.Shared.Mgr.CompressMgr::DecompressedLock
	RuntimeObject* ___DecompressedLock_3;
};

// Nino.Shared.Mgr.ConstMgr
struct ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55  : public RuntimeObject
{
};

struct ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields
{
	// System.Boolean Nino.Shared.Mgr.ConstMgr::IsMono
	bool ___IsMono_0;
	// System.Byte[] Nino.Shared.Mgr.ConstMgr::Null
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Null_1;
	// System.Object[] Nino.Shared.Mgr.ConstMgr::EmptyParam
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyParam_2;
	// System.Type Nino.Shared.Mgr.ConstMgr::ObjectType
	Type_t* ___ObjectType_3;
	// System.Type Nino.Shared.Mgr.ConstMgr::ByteType
	Type_t* ___ByteType_4;
	// System.Type Nino.Shared.Mgr.ConstMgr::SByteType
	Type_t* ___SByteType_5;
	// System.Type Nino.Shared.Mgr.ConstMgr::ShortType
	Type_t* ___ShortType_6;
	// System.Type Nino.Shared.Mgr.ConstMgr::UShortType
	Type_t* ___UShortType_7;
	// System.Type Nino.Shared.Mgr.ConstMgr::IntType
	Type_t* ___IntType_8;
	// System.Type Nino.Shared.Mgr.ConstMgr::UIntType
	Type_t* ___UIntType_9;
	// System.Type Nino.Shared.Mgr.ConstMgr::LongType
	Type_t* ___LongType_10;
	// System.Type Nino.Shared.Mgr.ConstMgr::ULongType
	Type_t* ___ULongType_11;
	// System.Type Nino.Shared.Mgr.ConstMgr::StringType
	Type_t* ___StringType_12;
	// System.Type Nino.Shared.Mgr.ConstMgr::BoolType
	Type_t* ___BoolType_13;
	// System.Type Nino.Shared.Mgr.ConstMgr::DecimalType
	Type_t* ___DecimalType_14;
	// System.Type Nino.Shared.Mgr.ConstMgr::DoubleType
	Type_t* ___DoubleType_15;
	// System.Type Nino.Shared.Mgr.ConstMgr::FloatType
	Type_t* ___FloatType_16;
	// System.Type Nino.Shared.Mgr.ConstMgr::CharType
	Type_t* ___CharType_17;
	// System.Type Nino.Shared.Mgr.ConstMgr::DateTimeType
	Type_t* ___DateTimeType_18;
	// System.Type Nino.Shared.Mgr.ConstMgr::ByteArrType
	Type_t* ___ByteArrType_19;
	// System.Type Nino.Shared.Mgr.ConstMgr::ByteListType
	Type_t* ___ByteListType_20;
	// System.Type Nino.Shared.Mgr.ConstMgr::ListDefType
	Type_t* ___ListDefType_21;
	// System.Type Nino.Shared.Mgr.ConstMgr::DictDefType
	Type_t* ___DictDefType_22;
	// System.Type Nino.Shared.Mgr.ConstMgr::NullableDefType
	Type_t* ___NullableDefType_23;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Nino.Shared.IO.ExtensibleBufferExtensions
struct ExtensibleBufferExtensions_t2B77730822B82A3158D1999450AF722064F9854E  : public RuntimeObject
{
};

// Nino.Shared.Util.Hash
struct Hash_t45DF9AB46862B2D5B004AB9A22B1AA6B30E69D76  : public RuntimeObject
{
};

// Nino.Shared.Util.Logger
struct Logger_tEE602416905082E3ACD3D905F9AEE2DB17B08B4C  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Nino.Shared.PowerOf2
struct PowerOf2_t5E8F47BB5F78A518029DE7E5223E63498276D558  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t3B9217E181EF71597DFBD19831C246CC19018BBF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t1B042322F7D06DEF403CB4846C903C3E81AFFCDE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Nino.Shared.IO.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t68103BAE5A2686167BF5624C92AAD7D5487639C7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Nino.Shared.IO.DeflateStreamNative/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t894F3A6D4A485ECCBE48DEF7EF5C1BB2D8109469 
{
	// System.Int32 Nino.Shared.IO.DeflateStreamNative/<>c__DisplayClass23_0::result
	int32_t ___result_0;
};

// Nino.Shared.IO.DeflateStream
struct DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Nino.Shared.IO.FlexibleStream Nino.Shared.IO.DeflateStream::baseStream
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___baseStream_4;
	// System.IO.Compression.CompressionMode Nino.Shared.IO.DeflateStream::mode
	int32_t ___mode_5;
	// System.Boolean Nino.Shared.IO.DeflateStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Boolean Nino.Shared.IO.DeflateStream::disposed
	bool ___disposed_7;
	// Nino.Shared.IO.DeflateStreamNative Nino.Shared.IO.DeflateStream::native
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* ___native_8;
};

// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_4;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_5;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_7;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* ___native_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Nino.Shared.IO.FlexibleStream
struct FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] Nino.Shared.IO.FlexibleStream::internalBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___internalBuffer_4;
	// System.Int32 Nino.Shared.IO.FlexibleStream::origin
	int32_t ___origin_5;
	// System.Int32 Nino.Shared.IO.FlexibleStream::position
	int32_t ___position_6;
	// System.Int32 Nino.Shared.IO.FlexibleStream::length
	int32_t ___length_7;
	// System.Int32 Nino.Shared.IO.FlexibleStream::capacity
	int32_t ___capacity_8;
	// System.Boolean Nino.Shared.IO.FlexibleStream::expandable
	bool ___expandable_9;
	// System.Boolean Nino.Shared.IO.FlexibleStream::exposable
	bool ___exposable_10;
	// System.Boolean Nino.Shared.IO.FlexibleStream::isOpen
	bool ___isOpen_11;
	// System.UInt32 Nino.Shared.IO.FlexibleStream::maxLength
	uint32_t ___maxLength_12;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Nino.Shared.IO.DeflateStreamNative
struct DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05  : public RuntimeObject
{
	// Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite Nino.Shared.IO.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* ___feeder_2;
	// Nino.Shared.IO.FlexibleStream Nino.Shared.IO.DeflateStreamNative::baseStream
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___baseStream_3;
	// Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle Nino.Shared.IO.DeflateStreamNative::zStream
	SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* ___zStream_4;
	// System.Runtime.InteropServices.GCHandle Nino.Shared.IO.DeflateStreamNative::data
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___data_5;
	// System.Boolean Nino.Shared.IO.DeflateStreamNative::disposed
	bool ___disposed_6;
	// System.Exception Nino.Shared.IO.DeflateStreamNative::lastError
	Exception_t* ___lastError_7;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Nino.Shared.IO.DeflateStream/ReadMethod
struct ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE  : public MulticastDelegate_t
{
};

// Nino.Shared.IO.DeflateStream/WriteMethod
struct WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B  : public MulticastDelegate_t
{
};

// Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Nino.Shared.UncheckedStack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UncheckedStack_1__ctor_m9FC51A4082142DA200727EB75C679A5C696C4809_gshared (UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0* __this, const RuntimeMethod* method) ;
// System.Void Nino.Shared.UncheckedStack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UncheckedStack_1_Push_m7F46C365E8AC6504A3DDF2A1FBFA61F53E3AE16C_gshared (UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline (const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.UncheckedStack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UncheckedStack_1_get_Count_m37B4195279FE17B0C87283745DDA7167B06157D3_gshared_inline (UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0* __this, const RuntimeMethod* method) ;
// T Nino.Shared.UncheckedStack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UncheckedStack_1_Pop_m81E146021956CF04D99F2E1C90672763AF5CA501_gshared (UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0* __this, const RuntimeMethod* method) ;
// T Nino.Shared.IO.ObjectPool`1<System.Object>::Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Request_mBCFEF0D5D10D4B8ECE625E22DAE035209CF05E76_gshared (const RuntimeMethod* method) ;
// T Nino.Shared.IO.ObjectPool`1<System.Object>::Peak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Peak_mE9DD61E7385788DB438D4643E5F932FFE08F23E1_gshared (const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.ObjectPool`1<System.Object>::Return(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Return_m462EDDE5BF0B4F9A6D3F6BB97F94D579307B33C8_gshared (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>::CopyTo(T[]&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC_gshared (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___dst0, int32_t ___srcIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// T* Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_gshared_inline (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* __this, const RuntimeMethod* method) ;
// T Nino.Shared.UncheckedStack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UncheckedStack_1_Peek_mD6FA4AF2D451EF02A145C1369E597265F0BEB0B2_gshared (UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0* __this, const RuntimeMethod* method) ;
// System.Void Nino.Shared.UncheckedStack`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UncheckedStack_1__ctor_m91E845AB6717B6FBCBBC6C0556C39A7F3874C5C9_gshared (UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460 (const RuntimeMethod* method) ;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogAssertion(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogAssertion_mC3BDB863CDF67D35AA001E42105DC4925FB028F4 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216 (bool ___condition0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Nino.Shared.Util.Logger::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_D_mB4DA935230F12F7552D42C2B3CC03780A4ADA2C2 (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.Util.Logger::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_W_m20BBEF0924D70B38C3CDEFE30C7D5B1F9F9743FE (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.Util.Logger::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94 (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.Util.Logger::LA(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LA_m5C93678D68965BB31356BA2E69B2F3B548F1AA8F (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream>::.ctor()
inline void UncheckedStack_1__ctor_m68464CCA66AC7700AB011194FA6C3F984E375716 (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* __this, const RuntimeMethod* method)
{
	((  void (*) (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73*, const RuntimeMethod*))UncheckedStack_1__ctor_m9FC51A4082142DA200727EB75C679A5C696C4809_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Nino.Shared.Mgr.ConstMgr::get_EnableNativeDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstMgr_get_EnableNativeDeflate_m856D5EF7637113C1179D69BEBF654C74BB90A6F3 (const RuntimeMethod* method) ;
// System.Void Nino.Shared.Mgr.CompressMgr::GetCompressInformation(Nino.Shared.IO.DeflateStream&,Nino.Shared.IO.FlexibleStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressMgr_GetCompressInformation_mBED4782E00D2D529B867A49CDA2D73F6A05F1FBA (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** ___zipStream0, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5** ___compressedStream1, const RuntimeMethod* method) ;
// System.Byte[] Nino.Shared.IO.BufferPool::RequestBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferPool_RequestBuffer_m32364A82169CC00CBDD5DAAB06027B0E0FDC65A7 (int32_t ___size0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.FlexibleStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___internalBuffer0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStream::.ctor(Nino.Shared.IO.FlexibleStream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m1D0533F530B44CF76994D899515E59E3E7A77600 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream>::Push(T)
inline void UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* __this, DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* ___item0, const RuntimeMethod* method)
{
	((  void (*) (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73*, DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52*, const RuntimeMethod*))UncheckedStack_1_Push_m7F46C365E8AC6504A3DDF2A1FBFA61F53E3AE16C_gshared)(__this, ___item0, method);
}
// T[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline)(method);
}
// System.Void Nino.Shared.Mgr.CompressMgr::GetDecompressInformation(Nino.Shared.IO.DeflateStream&,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressMgr_GetDecompressInformation_mC3C17525CE6703B7F691E9EC80570195DCB0430C (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** ___zipStream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___data1, const RuntimeMethod* method) ;
// System.Byte[] Nino.Shared.Mgr.CompressMgr::Compress(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_Compress_m76F5CC3F5C1B0F533D5CD3A99A6762EDFDFC2068 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Byte[] Nino.Shared.Mgr.CompressMgr::CompressOnNative(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_CompressOnNative_m95E7334476E49F35C41704E7F52229D84DFA3672 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Byte[] Nino.Shared.Mgr.CompressMgr::GetCompressBytes(Nino.Shared.IO.DeflateStream,Nino.Shared.IO.FlexibleStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_GetCompressBytes_m6CCA07FC5D504B685274E5D47430F63B4777D211 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* ___zipStream0, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___compressedStream1, const RuntimeMethod* method) ;
// System.Byte[] Nino.Shared.Mgr.CompressMgr::CompressOnNative(Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_CompressOnNative_m595D53EA7F89B926CADCD92F7FB3A250879BA34C (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* ___data0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.ExtensibleBufferExtensions::WriteToStream(Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>,Nino.Shared.IO.DeflateStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibleBufferExtensions_WriteToStream_m28D57259635A62275C4517FA8D0FC4BED09C2451 (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* ___buffer0, DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* ___stream1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStream::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finish_m591064E2EF51E5122B1F67E1CC94B88D5AF41D8B (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) ;
// System.Byte[] Nino.Shared.IO.FlexibleStream::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FlexibleStream_ToArray_m75D6448904FD5A1E3830E7998AEEFE162B209B1C (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream>::get_Count()
inline int32_t UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_inline (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73*, const RuntimeMethod*))UncheckedStack_1_get_Count_m37B4195279FE17B0C87283745DDA7167B06157D3_gshared_inline)(__this, method);
}
// T Nino.Shared.UncheckedStack`1<Nino.Shared.IO.DeflateStream>::Pop()
inline DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* __this, const RuntimeMethod* method)
{
	return ((  DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* (*) (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73*, const RuntimeMethod*))UncheckedStack_1_Pop_m81E146021956CF04D99F2E1C90672763AF5CA501_gshared)(__this, method);
}
// System.Void Nino.Shared.IO.DeflateStream::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Reset_m355B815A6B0641618F4FB78EED44CD49F94D0265 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) ;
// Nino.Shared.IO.FlexibleStream Nino.Shared.IO.DeflateStream::get_BaseStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* DeflateStream_get_BaseStream_m0B695A753C090EE76973473BFA02C9A96EF91CD3_inline (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.FlexibleStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream__ctor_m8DF3517939E7A373BE9F1478931497D159ABE11F (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) ;
// System.IntPtr Nino.Shared.Mgr.CompressMgr::DecompressOnNative(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CompressMgr_DecompressOnNative_mBA1F5DC8DC0D748E0A45A34AE78F0138B0816C5D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t* ___len1, const RuntimeMethod* method) ;
// System.IntPtr Nino.Shared.IO.DeflateStream::GetDecompressedBytes(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DeflateStream_GetDecompressedBytes_m27D01F87798827EEB26C58FDFCDD244049866065 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, int32_t* ___length0, int32_t ___minLen1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.FlexibleStream::ChangeBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_ChangeBuffer_m09BEADE2182C02EA0CC0BE06A71B07D38E048308 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.ExtensibleBufferExtensions::WriteToStream(Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>,System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibleBufferExtensions_WriteToStream_mCE22E4084EC273B80A6F7716D27ED704F5353137 (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* ___buffer0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, int32_t ___length2, const RuntimeMethod* method) ;
// T Nino.Shared.IO.ObjectPool`1<Nino.Shared.IO.FlexibleStream>::Request()
inline FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ObjectPool_1_Request_m51E42690C6EC44A227143B78D004A3E5BCB60535 (const RuntimeMethod* method)
{
	return ((  FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* (*) (const RuntimeMethod*))ObjectPool_1_Request_mBCFEF0D5D10D4B8ECE625E22DAE035209CF05E76_gshared)(method);
}
// System.Void Nino.Shared.IO.FlexibleStream::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_Reset_mA516175639BFDD579DE86080C89EF27577D3B689 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) ;
// T Nino.Shared.IO.ObjectPool`1<Nino.Shared.IO.FlexibleStream>::Peak()
inline FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ObjectPool_1_Peak_mC59B25790CAD531AD4CB00962DBB9BB8FFEAED8E (const RuntimeMethod* method)
{
	return ((  FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* (*) (const RuntimeMethod*))ObjectPool_1_Peak_mE9DD61E7385788DB438D4643E5F932FFE08F23E1_gshared)(method);
}
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.ObjectPool`1<Nino.Shared.IO.FlexibleStream>::Return(T)
inline void ObjectPool_1_Return_mDB88DE7126A54B1772B44DD6E741F5024A423369 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*, const RuntimeMethod*))ObjectPool_1_Return_m462EDDE5BF0B4F9A6D3F6BB97F94D579307B33C8_gshared)(___obj0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Byte[] Nino.Shared.IO.FlexibleStream::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FlexibleStream_GetBuffer_m80AD9FFA7FBB95BC43083AF893DF0F9735960F2B (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9 (const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>::CopyTo(T[]&,System.Int32,System.Int32)
inline void ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___dst0, int32_t ___srcIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, int32_t, const RuntimeMethod*))ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC_gshared)(__this, ___dst0, ___srcIndex1, ___length2, method);
}
// System.Void Nino.Shared.IO.BufferPool::ReturnBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferPool_ReturnBuffer_m414138CD4C30BEBB4D0F4DE52FCD0CEC274B6849 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// T* Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>::get_Data()
inline uint8_t* ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_inline (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73*, const RuntimeMethod*))ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_gshared_inline)(__this, method);
}
// System.Void Nino.Shared.IO.DeflateStream::Write(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_m0798DBA813BECB49EAD753A2475776C5FA6B0F34 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, uint8_t* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.UncheckedStack`1<System.Byte[]>::get_Count()
inline int32_t UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_inline (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549*, const RuntimeMethod*))UncheckedStack_1_get_Count_m37B4195279FE17B0C87283745DDA7167B06157D3_gshared_inline)(__this, method);
}
// T Nino.Shared.UncheckedStack`1<System.Byte[]>::Pop()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UncheckedStack_1_Pop_m70767D86B3C97D2386C4BE200394DF24475B81D8 (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549*, const RuntimeMethod*))UncheckedStack_1_Pop_m81E146021956CF04D99F2E1C90672763AF5CA501_gshared)(__this, method);
}
// T Nino.Shared.UncheckedStack`1<System.Byte[]>::Peek()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UncheckedStack_1_Peek_m3CF46E9C8FDB90DE8F38FF91B73E867F8D07725A (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549*, const RuntimeMethod*))UncheckedStack_1_Peek_mD6FA4AF2D451EF02A145C1369E597265F0BEB0B2_gshared)(__this, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void Nino.Shared.UncheckedStack`1<System.Byte[]>::Push(T)
inline void UncheckedStack_1_Push_m97B4F2C5A073787DD3F0A81688A64F9143D043D1 (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))UncheckedStack_1_Push_m7F46C365E8AC6504A3DDF2A1FBFA61F53E3AE16C_gshared)(__this, ___item0, method);
}
// System.Void Nino.Shared.UncheckedStack`1<System.Byte[]>::.ctor(System.Int32)
inline void UncheckedStack_1__ctor_mC610218C686ABB72B85B56272635FE35EECE82FF (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549*, int32_t, const RuntimeMethod*))UncheckedStack_1__ctor_m91E845AB6717B6FBCBBC6C0556C39A7F3874C5C9_gshared)(__this, ___capacity0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStream::.ctor(Nino.Shared.IO.FlexibleStream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// Nino.Shared.IO.DeflateStreamNative Nino.Shared.IO.DeflateStreamNative::Create(Nino.Shared.IO.FlexibleStream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* DeflateStreamNative_Create_m95F5BBF514FE8C33109736871ADAA084D7F51F51 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative::DisposeZStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_DisposeZStream_mB2B714B3E5EED1C0BCEB087A3F11D33E5E5D075E (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative::ResetZStream(System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_ResetZStream_m3C8AB611BA9651CC4C686B53FB4EA5BF3732A39D (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, int32_t ___mode0, bool ___gzip1, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReAllocHGlobal(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReAllocHGlobal_m903B07B988C5FED03A8F1887C5F7E9538B24BF77 (intptr_t ___pv0, intptr_t ___cb1, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStream::Read(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, uint8_t* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m08DDE9450FA2087D51BA875141496063A8489F4C (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m0EFACBDEEF1D1A8E1E94918660B9C158D015B700 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStream::ReadInternal(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m83B3FD9D2497FE790AC33C9742C232A07AE9D19A (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, uint8_t* ___ptr0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m0A536FECF9E2713195000EDFB2FF9434E052C094 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m6ACDB9406DA3AA75D9B685037872F8B20347DC11 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_mAC7ABAF2CDFBCD979AA2AB3E7231AAC22CDF69B0 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_mC8B5F7AE305255FB66EE9037F098D89EBA436579 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_m19744ACE29153A74D5D2CCC509BC0B3665434DAE (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult Nino.Shared.IO.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_m34B4329618F4FB060817479CC249F67D109DA972 (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_m3BCB04BD39276E4CD913DCC34D9A0A04B6219799 (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult Nino.Shared.IO.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_mC2D33C9166D113252311D97362388B078FE9086B (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mEC47FA8621529D848F62FB3C4808EB964B199384 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m4DCEDDED79DFBD1247A2FDEDC4F1E1690B1EC6A3 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_m13E20AEA96F2B5693FD697DCE7A0F42D76F8FE52 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mD2D8A5AC847B3048A4DEE09258F52DBE19F1524A (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle Nino.Shared.IO.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* DeflateStreamNative_CreateZStream_m401B8C247011E86EA3ED9741D82F649F6F82EC4C (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::Flush(Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m6C92162F7AFD3ECD2B3B4BEB4362D2D1F4AC9E40 (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* ___stream0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::ReadZStream(Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m8AC9F625DBB6FFD30A06EF3C70824C7DBD98271C (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::WriteZStream(Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_mABC30B008A9739A8020632F0B4E506E4BE88667C (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m86EAA501632A47745D9A77A4B9D2519484510788 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.FlexibleStream::Read(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleStream_Read_mAB9961E8FE04624FA0BC172FE9858B62DC3AFF96 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, uint8_t* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m6158CEF57BB86B6CE5E6F86C52C5782A24B21BDD (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.FlexibleStream::Write(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, uint8_t* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.String Nino.Shared.IO.DeflateStreamNative::<CheckResult>g__R|23_0(Nino.Shared.IO.DeflateStreamNative/<>c__DisplayClass23_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeflateStreamNative_U3CCheckResultU3Eg__RU7C23_0_m1974AF9C34F75E5B885A642EDE9118A567DFB35D (U3CU3Ec__DisplayClass23_0_t894F3A6D4A485ECCBE48DEF7EF5C1BB2D8109469* p0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mFBCCAC8FF1DF5C05FF9A95FB825E8BC1E8CE3429 (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Int32 Nino.Shared.IO.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m8D822E40A9898B5DCC3F25F8CEBA765B0632A7D9 (intptr_t ___stream0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Nino.Shared.IO.FlexibleStream::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_set_Capacity_mD697A656FB3B4E742D81F55FEEAE1E3ED8E6C4F0 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6 (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Int32 Nino.Shared.IO.FlexibleStream::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleStream_get_Capacity_mD33C52F25FF9365FF59772B415C1DA4E69020076 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::MemoryCopy(System.Void*,System.Void*,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_MemoryCopy_mF94BFB19AA8A06BD47F4EA68F95B5A9EBE8E6277 (void* ___source0, void* ___destination1, int64_t ___destinationSizeInBytes2, int64_t ___sourceBytesToCopy3, const RuntimeMethod* method) ;
// System.Boolean Nino.Shared.IO.FlexibleStream::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C void* CDECL CreateZStream(int32_t, int32_t, Il2CppMethodPointer, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL CloseZStream(intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL Flush(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ReadZStream(void*, intptr_t, int32_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WriteZStream(void*, intptr_t, int32_t);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mB2010D3E79A4744DC6A0A97459E54BFD0167BD33 (EmbeddedAttribute_t3B9217E181EF71597DFBD19831C246CC19018BBF* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m95270EFA8D8FDA48DA5F3A13BD7CA29D8E6FF2EB (IsUnmanagedAttribute_t1B042322F7D06DEF403CB4846C903C3E81AFFCDE* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Boolean Nino.Shared.PowerOf2::IsPowerOf2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PowerOf2_IsPowerOf2_mBC8725A2B5D96E685970343A0C7A3B351B05B005 (int32_t ___n0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (n & n - 1) != 0;
		int32_t L_0 = ___n0;
		int32_t L_1 = ___n0;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)il2cpp_codegen_subtract(L_1, 1))))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Byte Nino.Shared.PowerOf2::GetPower(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PowerOf2_GetPower_m433D78A24D2F149F5F676121C4B359551118BBA2 (int32_t ___n0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	{
		// byte ret = 0;
		V_0 = (uint8_t)0;
		goto IL_0011;
	}

IL_0005:
	{
		// ret++;
		uint8_t L_0 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)));
		// n = n >> 1;
		int32_t L_1 = ___n0;
		___n0 = ((int32_t)(L_1>>1));
	}

IL_0011:
	{
		// while (n >> 1 != 0)
		int32_t L_2 = ___n0;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_2>>1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0005;
		}
	}
	{
		// return ret;
		uint8_t L_4 = V_0;
		V_2 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		uint8_t L_5 = V_2;
		return L_5;
	}
}
// System.Int32 Nino.Shared.PowerOf2::RoundUpToPowerOf2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PowerOf2_RoundUpToPowerOf2_mA2FB6EBF44A21C6300DB4486BB8AD40D2A13EF29 (int32_t ___n0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (n < 0 || n > 0x40000000)
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___n0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)1073741824)))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("n");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PowerOf2_RoundUpToPowerOf2_mA2FB6EBF44A21C6300DB4486BB8AD40D2A13EF29_RuntimeMethod_var)));
	}

IL_0020:
	{
		// n = n - 1;
		int32_t L_4 = ___n0;
		___n0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// n = n | (n >> 1);
		int32_t L_5 = ___n0;
		int32_t L_6 = ___n0;
		___n0 = ((int32_t)(L_5|((int32_t)(L_6>>1))));
		// n = n | (n >> 2);
		int32_t L_7 = ___n0;
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)(L_7|((int32_t)(L_8>>2))));
		// n = n | (n >> 4);
		int32_t L_9 = ___n0;
		int32_t L_10 = ___n0;
		___n0 = ((int32_t)(L_9|((int32_t)(L_10>>4))));
		// n = n | (n >> 8);
		int32_t L_11 = ___n0;
		int32_t L_12 = ___n0;
		___n0 = ((int32_t)(L_11|((int32_t)(L_12>>8))));
		// n = n | (n >> 16);
		int32_t L_13 = ___n0;
		int32_t L_14 = ___n0;
		___n0 = ((int32_t)(L_13|((int32_t)(L_14>>((int32_t)16)))));
		// return n + 1;
		int32_t L_15 = ___n0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_004f;
	}

IL_004f:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
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
// System.Int32 Nino.Shared.Util.Hash::GetStringHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash_GetStringHashCode_m896DC4BE313FA960D32DDD0CEFF82B451878A952 (String_t* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		// int len = key.Length;
		String_t* L_0 = ___key0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_1 = L_1;
		// int hash = 1315423911;
		V_2 = ((int32_t)1315423911);
		String_t* L_2 = ___key0;
		V_4 = L_2;
		// fixed (char* ptr = key)
		String_t* L_3 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_3);
		Il2CppChar* L_4 = V_3;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar* L_5 = V_3;
		int32_t L_6;
		L_6 = RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460(NULL);
		V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, L_6));
	}

IL_0020:
	{
		// for(i = 0; i < len; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0025:
	{
		// hash ^= ((hash << 5) + *(ptr + i) + (hash >> 2));
		int32_t L_7 = V_2;
		int32_t L_8 = V_2;
		Il2CppChar* L_9 = V_3;
		int32_t L_10 = V_0;
		int32_t L_11 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 2)))));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)(L_7^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_8<<5)), L_11)), ((int32_t)(L_12>>2))))));
		// for(i = 0; i < len; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		// for(i = 0; i < len; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0025;
		}
	}
	{
		// return hash;
		int32_t L_17 = V_2;
		V_6 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		int32_t L_18 = V_6;
		return L_18;
	}
}
// System.Int32 Nino.Shared.Util.Hash::GetTypeHashCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash_GetTypeHashCode_mD8F985E4F350A53E8605DAC422E475825ED1FBC7 (Type_t* ___type0, const RuntimeMethod* method) 
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// return type.TypeHandle.Value.GetHashCode();
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1;
		L_1 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		V_0 = L_1;
		intptr_t L_2;
		L_2 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_0), NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D((&V_1), NULL);
		V_2 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		int32_t L_4 = V_2;
		return L_4;
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
// System.Void Nino.Shared.Util.Logger::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_D_mB4DA935230F12F7552D42C2B3CC03780A4ADA2C2 (RuntimeObject* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(msg);
		RuntimeObject* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_W_m20BBEF0924D70B38C3CDEFE30C7D5B1F9F9743FE (RuntimeObject* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(msg);
		RuntimeObject* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94 (RuntimeObject* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(msg);
		RuntimeObject* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::LA(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LA_m5C93678D68965BB31356BA2E69B2F3B548F1AA8F (RuntimeObject* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogAssertion(msg);
		RuntimeObject* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogAssertion_mC3BDB863CDF67D35AA001E42105DC4925FB028F4(L_0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Assert_m3485EF868D1411842FE3D257F5DB002E79C973EC (bool ___cond0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(cond);
		bool L_0 = ___cond0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216(L_0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::D(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_D_mCAC040DA28246E11EBC86812DC6E0D91052F4A36 (String_t* ___tag0, RuntimeObject* ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// D($"[{tag}] {msg}");
		String_t* L_0 = ___tag0;
		RuntimeObject* L_1 = ___msg1;
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD, L_0, L_1, NULL);
		Logger_D_mB4DA935230F12F7552D42C2B3CC03780A4ADA2C2(L_2, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::W(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_W_mF869E8BA110ABA2A7934E919EBA5F2E04C090A1C (String_t* ___tag0, RuntimeObject* ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// W($"[{tag}] {msg}");
		String_t* L_0 = ___tag0;
		RuntimeObject* L_1 = ___msg1;
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD, L_0, L_1, NULL);
		Logger_W_m20BBEF0924D70B38C3CDEFE30C7D5B1F9F9743FE(L_2, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::E(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_E_m0963069984CDE82EE7B45BD911EBD87A4A310877 (String_t* ___tag0, RuntimeObject* ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// E($"[{tag}] {msg}");
		String_t* L_0 = ___tag0;
		RuntimeObject* L_1 = ___msg1;
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD, L_0, L_1, NULL);
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(L_2, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.Util.Logger::LA(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LA_m3029618657F134CBE6E8420687D9169E5E30486D (String_t* ___tag0, RuntimeObject* ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LA($"[{tag}] {msg}");
		String_t* L_0 = ___tag0;
		RuntimeObject* L_1 = ___msg1;
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD, L_0, L_1, NULL);
		Logger_LA_m5C93678D68965BB31356BA2E69B2F3B548F1AA8F(L_2, NULL);
		// }
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
// System.Void Nino.Shared.Mgr.CompressMgr::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressMgr__cctor_m85C0D49A7519154CF215DBFFFDEB7515EB9446AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1__ctor_m68464CCA66AC7700AB011194FA6C3F984E375716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_0 = NULL;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* V_4 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_5 = NULL;
	{
		// private static readonly UncheckedStack<DeflateStream> CompressStreams = new UncheckedStack<DeflateStream>();
		UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_0 = (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73*)il2cpp_codegen_object_new(UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UncheckedStack_1__ctor_m68464CCA66AC7700AB011194FA6C3F984E375716(L_0, UncheckedStack_1__ctor_m68464CCA66AC7700AB011194FA6C3F984E375716_RuntimeMethod_var);
		((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressStreams_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressStreams_0), (void*)L_0);
		// private static readonly UncheckedStack<DeflateStream> DecompressStreams = new UncheckedStack<DeflateStream>();
		UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_1 = (UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73*)il2cpp_codegen_object_new(UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UncheckedStack_1__ctor_m68464CCA66AC7700AB011194FA6C3F984E375716(L_1, UncheckedStack_1__ctor_m68464CCA66AC7700AB011194FA6C3F984E375716_RuntimeMethod_var);
		((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressStreams_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressStreams_1), (void*)L_1);
		// private static readonly object CompressedLock = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressedLock_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressedLock_2), (void*)L_2);
		// private static readonly object DecompressedLock = new object();
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressedLock_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressedLock_3), (void*)L_3);
		// if (!ConstMgr.EnableNativeDeflate) return;
		il2cpp_codegen_runtime_class_init_inline(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConstMgr_get_EnableNativeDeflate_m856D5EF7637113C1179D69BEBF654C74BB90A6F3(NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// if (!ConstMgr.EnableNativeDeflate) return;
		goto IL_009b;
	}

IL_0037:
	{
		// GetCompressInformation(out _, out _);
		CompressMgr_GetCompressInformation_mBED4782E00D2D529B867A49CDA2D73F6A05F1FBA((&V_4), (&V_5), NULL);
		// var compressedStream = new FlexibleStream(BufferPool.RequestBuffer(10240));
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = BufferPool_RequestBuffer_m32364A82169CC00CBDD5DAAB06027B0E0FDC65A7(((int32_t)10240), NULL);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_7 = (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)il2cpp_codegen_object_new(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1(L_7, L_6, NULL);
		V_0 = L_7;
		// var zipStream = new DeflateStream(compressedStream, CompressionMode.Compress, true);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_8 = V_0;
		DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_9 = (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52*)il2cpp_codegen_object_new(DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		DeflateStream__ctor_m1D0533F530B44CF76994D899515E59E3E7A77600(L_9, L_8, 1, (bool)1, NULL);
		V_1 = L_9;
		// CompressStreams.Push(zipStream);
		UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_10 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressStreams_0;
		DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_11 = V_1;
		NullCheck(L_10);
		UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E(L_10, L_11, UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
		// var empty = Array.Empty<byte>();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		V_2 = L_12;
		// GetDecompressInformation(out _, ref empty);
		CompressMgr_GetDecompressInformation_mC3C17525CE6703B7F691E9EC80570195DCB0430C((&V_4), (&V_2), NULL);
		// compressedStream = new FlexibleStream(BufferPool.RequestBuffer(10240));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = BufferPool_RequestBuffer_m32364A82169CC00CBDD5DAAB06027B0E0FDC65A7(((int32_t)10240), NULL);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_14 = (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)il2cpp_codegen_object_new(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1(L_14, L_13, NULL);
		V_0 = L_14;
		// zipStream = new DeflateStream(compressedStream, CompressionMode.Decompress, true);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_15 = V_0;
		DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_16 = (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52*)il2cpp_codegen_object_new(DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DeflateStream__ctor_m1D0533F530B44CF76994D899515E59E3E7A77600(L_16, L_15, 0, (bool)1, NULL);
		V_1 = L_16;
		// DecompressStreams.Push(zipStream);
		UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_17 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressStreams_1;
		DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_18 = V_1;
		NullCheck(L_17);
		UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E(L_17, L_18, UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Byte[] Nino.Shared.Mgr.CompressMgr::Compress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_Compress_mA9B7E0F965FF86BC17A7577281FA9BD73CC82FDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// return Compress(data, data.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = CompressMgr_Compress_m76F5CC3F5C1B0F533D5CD3A99A6762EDFDFC2068(L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Nino.Shared.Mgr.CompressMgr::Compress(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_Compress_m76F5CC3F5C1B0F533D5CD3A99A6762EDFDFC2068 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* V_2 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_3 = NULL;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	{
		// lock (CompressedLock)
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressedLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (!ConstMgr.EnableNativeDeflate)
				il2cpp_codegen_runtime_class_init_inline(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = ConstMgr_get_EnableNativeDeflate_m856D5EF7637113C1179D69BEBF654C74BB90A6F3(NULL);
				V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_4;
				if (!L_5)
				{
					goto IL_002d_1;
				}
			}
			{
				// return CompressOnNative(data, length);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
				int32_t L_7 = ___length1;
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = CompressMgr_CompressOnNative_m95E7334476E49F35C41704E7F52229D84DFA3672(L_6, L_7, NULL);
				V_5 = L_8;
				goto IL_0057;
			}

IL_002d_1:
			{
				// GetCompressInformation(out var zipStream, out var compressedStream);
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				CompressMgr_GetCompressInformation_mBED4782E00D2D529B867A49CDA2D73F6A05F1FBA((&V_2), (&V_3), NULL);
				// zipStream.Write(data, 0, length);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_9 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___data0;
				int32_t L_11 = ___length1;
				NullCheck(L_9);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
				// return GetCompressBytes(zipStream, compressedStream);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_12 = V_2;
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_13 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = CompressMgr_GetCompressBytes_m6CCA07FC5D504B685274E5D47430F63B4777D211(L_12, L_13, NULL);
				V_5 = L_14;
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_5;
		return L_15;
	}
}
// System.Byte[] Nino.Shared.Mgr.CompressMgr::Compress(Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_Compress_mACEE8DBADF352718E406A1AA157346E04D96B4E0 (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* V_2 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_3 = NULL;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	{
		// lock (CompressedLock)
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressedLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (!ConstMgr.EnableNativeDeflate)
				il2cpp_codegen_runtime_class_init_inline(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = ConstMgr_get_EnableNativeDeflate_m856D5EF7637113C1179D69BEBF654C74BB90A6F3(NULL);
				V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_4;
				if (!L_5)
				{
					goto IL_002d_1;
				}
			}
			{
				// return CompressOnNative(data, length);
				ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* L_6 = ___data0;
				int32_t L_7 = ___length1;
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = CompressMgr_CompressOnNative_m595D53EA7F89B926CADCD92F7FB3A250879BA34C(L_6, L_7, NULL);
				V_5 = L_8;
				goto IL_0056;
			}

IL_002d_1:
			{
				// GetCompressInformation(out var zipStream, out var compressedStream);
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				CompressMgr_GetCompressInformation_mBED4782E00D2D529B867A49CDA2D73F6A05F1FBA((&V_2), (&V_3), NULL);
				// data.WriteToStream(zipStream, length);
				ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* L_9 = ___data0;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_10 = V_2;
				int32_t L_11 = ___length1;
				ExtensibleBufferExtensions_WriteToStream_m28D57259635A62275C4517FA8D0FC4BED09C2451(L_9, L_10, L_11, NULL);
				// return GetCompressBytes(zipStream, compressedStream);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_12 = V_2;
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_13 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = CompressMgr_GetCompressBytes_m6CCA07FC5D504B685274E5D47430F63B4777D211(L_12, L_13, NULL);
				V_5 = L_14;
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_5;
		return L_15;
	}
}
// System.Byte[] Nino.Shared.Mgr.CompressMgr::GetCompressBytes(Nino.Shared.IO.DeflateStream,Nino.Shared.IO.FlexibleStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_GetCompressBytes_m6CCA07FC5D504B685274E5D47430F63B4777D211 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* ___zipStream0, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___compressedStream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// zipStream.Finish();
		DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_0 = ___zipStream0;
		NullCheck(L_0);
		DeflateStream_Finish_m591064E2EF51E5122B1F67E1CC94B88D5AF41D8B(L_0, NULL);
		// CompressStreams.Push(zipStream);
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_1 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressStreams_0;
		DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_2 = ___zipStream0;
		NullCheck(L_1);
		UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E(L_1, L_2, UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
		// return compressedStream.ToArray();
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_3 = ___compressedStream1;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = FlexibleStream_ToArray_m75D6448904FD5A1E3830E7998AEEFE162B209B1C(L_3, NULL);
		V_0 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.Void Nino.Shared.Mgr.CompressMgr::GetCompressInformation(Nino.Shared.IO.DeflateStream&,Nino.Shared.IO.FlexibleStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressMgr_GetCompressInformation_mBED4782E00D2D529B867A49CDA2D73F6A05F1FBA (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** ___zipStream0, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5** ___compressedStream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (CompressedLock)
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressedLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (CompressStreams.Count > 0)
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_4 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressStreams_0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_inline(L_4, UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0045_1;
				}
			}
			{
				// zipStream = CompressStreams.Pop();
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_7 = ___zipStream0;
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_8 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___CompressStreams_0;
				NullCheck(L_8);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_9;
				L_9 = UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E(L_8, UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E_RuntimeMethod_var);
				*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
				// zipStream.Reset();
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_10 = ___zipStream0;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_11 = *((DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52**)L_10);
				NullCheck(L_11);
				DeflateStream_Reset_m355B815A6B0641618F4FB78EED44CD49F94D0265(L_11, NULL);
				// compressedStream = zipStream.BaseStream;
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5** L_12 = ___compressedStream1;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_13 = ___zipStream0;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_14 = *((DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52**)L_13);
				NullCheck(L_14);
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_15;
				L_15 = DeflateStream_get_BaseStream_m0B695A753C090EE76973473BFA02C9A96EF91CD3_inline(L_14, NULL);
				*((RuntimeObject**)L_12) = (RuntimeObject*)L_15;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_15);
				goto IL_0059_1;
			}

IL_0045_1:
			{
				// compressedStream = new FlexibleStream();
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5** L_16 = ___compressedStream1;
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_17 = (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)il2cpp_codegen_object_new(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				FlexibleStream__ctor_m8DF3517939E7A373BE9F1478931497D159ABE11F(L_17, NULL);
				*((RuntimeObject**)L_16) = (RuntimeObject*)L_17;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_17);
				// zipStream = new DeflateStream(compressedStream, CompressionMode.Compress, true);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_18 = ___zipStream0;
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5** L_19 = ___compressedStream1;
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_20 = *((FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5**)L_19);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_21 = (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52*)il2cpp_codegen_object_new(DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				DeflateStream__ctor_m1D0533F530B44CF76994D899515E59E3E7A77600(L_21, L_20, 1, (bool)1, NULL);
				*((RuntimeObject**)L_18) = (RuntimeObject*)L_21;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_21);
			}

IL_0059_1:
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.IntPtr Nino.Shared.Mgr.CompressMgr::Decompress(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CompressMgr_Decompress_mC36CC975386EA25AA02CA2E530E5CB9894FB0B11 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t* ___outputLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// lock (DecompressedLock)
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressedLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (!ConstMgr.EnableNativeDeflate)
				il2cpp_codegen_runtime_class_init_inline(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = ConstMgr_get_EnableNativeDeflate_m856D5EF7637113C1179D69BEBF654C74BB90A6F3(NULL);
				V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_4;
				if (!L_5)
				{
					goto IL_002d_1;
				}
			}
			{
				// return DecompressOnNative(data, out outputLength);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
				int32_t* L_7 = ___outputLength1;
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				intptr_t L_8;
				L_8 = CompressMgr_DecompressOnNative_mBA1F5DC8DC0D748E0A45A34AE78F0138B0816C5D(L_6, L_7, NULL);
				V_5 = L_8;
				goto IL_005e;
			}

IL_002d_1:
			{
				// GetDecompressInformation(out var zipStream, ref data);
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				CompressMgr_GetDecompressInformation_mC3C17525CE6703B7F691E9EC80570195DCB0430C((&V_2), (&___data0), NULL);
				// var ret = zipStream.GetDecompressedBytes(out outputLength, data.Length);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_9 = V_2;
				int32_t* L_10 = ___outputLength1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___data0;
				NullCheck(L_11);
				NullCheck(L_9);
				intptr_t L_12;
				L_12 = DeflateStream_GetDecompressedBytes_m27D01F87798827EEB26C58FDFCDD244049866065(L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
				V_3 = L_12;
				// DecompressStreams.Push(zipStream);
				UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_13 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressStreams_1;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_14 = V_2;
				NullCheck(L_13);
				UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E(L_13, L_14, UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
				// return ret;
				intptr_t L_15 = V_3;
				V_5 = L_15;
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		intptr_t L_16 = V_5;
		return L_16;
	}
}
// System.Byte[] Nino.Shared.Mgr.CompressMgr::Decompress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_Decompress_mA6BE31AA084400E05B2C487F1A997D1CFD559F2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool V_6 = false;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	{
		// lock (DecompressedLock)
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressedLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0096:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (!ConstMgr.EnableNativeDeflate)
				il2cpp_codegen_runtime_class_init_inline(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = ConstMgr_get_EnableNativeDeflate_m856D5EF7637113C1179D69BEBF654C74BB90A6F3(NULL);
				V_6 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_6;
				if (!L_5)
				{
					goto IL_0048_1;
				}
			}
			{
				// var ptr = DecompressOnNative(data, out var length);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				intptr_t L_7;
				L_7 = CompressMgr_DecompressOnNative_mBA1F5DC8DC0D748E0A45A34AE78F0138B0816C5D(L_6, (&V_8), NULL);
				V_7 = L_7;
				// byte[] buf = new byte[length];
				int32_t L_8 = V_8;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
				V_9 = L_9;
				// Marshal.Copy(ptr, buf, 0, length);
				intptr_t L_10 = V_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_9;
				int32_t L_12 = V_8;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_10, L_11, 0, L_12, NULL);
				// return buf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_9;
				V_10 = L_13;
				goto IL_0097;
			}

IL_0048_1:
			{
				// GetDecompressInformation(out var zipStream, ref data);
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				CompressMgr_GetDecompressInformation_mC3C17525CE6703B7F691E9EC80570195DCB0430C((&V_2), (&___data0), NULL);
				// var ret = zipStream.GetDecompressedBytes(out var len, data.Length);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_14 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___data0;
				NullCheck(L_15);
				NullCheck(L_14);
				intptr_t L_16;
				L_16 = DeflateStream_GetDecompressedBytes_m27D01F87798827EEB26C58FDFCDD244049866065(L_14, (&V_4), ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
				V_3 = L_16;
				// DecompressStreams.Push(zipStream);
				UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_17 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressStreams_1;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_18 = V_2;
				NullCheck(L_17);
				UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E(L_17, L_18, UncheckedStack_1_Push_mE6660F93D7461D49B9519E6355EC8363CB29801E_RuntimeMethod_var);
				// var buffer = new byte[len];
				int32_t L_19 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
				V_5 = L_20;
				// Marshal.Copy(ret, buffer, 0, len);
				intptr_t L_21 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_5;
				int32_t L_23 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_21, L_22, 0, L_23, NULL);
				// Marshal.FreeHGlobal(ret);
				intptr_t L_24 = V_3;
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_24, NULL);
				// return buffer;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_5;
				V_10 = L_25;
				goto IL_0097;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_10;
		return L_26;
	}
}
// System.Void Nino.Shared.Mgr.CompressMgr::GetDecompressInformation(Nino.Shared.IO.DeflateStream&,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressMgr_GetDecompressInformation_mC3C17525CE6703B7F691E9EC80570195DCB0430C (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** ___zipStream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_3 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_4 = NULL;
	{
		// lock (DecompressedLock)
		il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressedLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0070;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0070:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (DecompressStreams.Count > 0)
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_4 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressStreams_1;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_inline(L_4, UncheckedStack_1_get_Count_m8F80ACA8472108741740BB1962DE5E119EB89240_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_004d_1;
				}
			}
			{
				// zipStream = DecompressStreams.Pop();
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_7 = ___zipStream0;
				il2cpp_codegen_runtime_class_init_inline(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var);
				UncheckedStack_1_tAA2ADE1194292EB410AC6488F6D8ECF5A8B30E73* L_8 = ((CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_StaticFields*)il2cpp_codegen_static_fields_for(CompressMgr_t7C6391AC23BDF9909C89444D64DA57AF3F462059_il2cpp_TypeInfo_var))->___DecompressStreams_1;
				NullCheck(L_8);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_9;
				L_9 = UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E(L_8, UncheckedStack_1_Pop_m1A4CED9434698B827705244389EEB607CFECED8E_RuntimeMethod_var);
				*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
				// zipStream.Reset();
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_10 = ___zipStream0;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_11 = *((DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52**)L_10);
				NullCheck(L_11);
				DeflateStream_Reset_m355B815A6B0641618F4FB78EED44CD49F94D0265(L_11, NULL);
				// var dataStream = zipStream.BaseStream;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_12 = ___zipStream0;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_13 = *((DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52**)L_12);
				NullCheck(L_13);
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_14;
				L_14 = DeflateStream_get_BaseStream_m0B695A753C090EE76973473BFA02C9A96EF91CD3_inline(L_13, NULL);
				V_3 = L_14;
				// dataStream.ChangeBuffer(data);
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_15 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_16 = ___data1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_16);
				NullCheck(L_15);
				FlexibleStream_ChangeBuffer_m09BEADE2182C02EA0CC0BE06A71B07D38E048308(L_15, L_17, NULL);
				goto IL_0063_1;
			}

IL_004d_1:
			{
				// var dataStream = new FlexibleStream(data);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_18 = ___data1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_18);
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_20 = (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)il2cpp_codegen_object_new(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1(L_20, L_19, NULL);
				V_4 = L_20;
				// zipStream = new DeflateStream(dataStream, CompressionMode.Decompress, true);
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52** L_21 = ___zipStream0;
				FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_22 = V_4;
				DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_23 = (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52*)il2cpp_codegen_object_new(DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				DeflateStream__ctor_m1D0533F530B44CF76994D899515E59E3E7A77600(L_23, L_22, 0, (bool)1, NULL);
				*((RuntimeObject**)L_21) = (RuntimeObject*)L_23;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_23);
			}

IL_0063_1:
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Byte[] Nino.Shared.Mgr.CompressMgr::CompressOnNative(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_CompressOnNative_m95E7334476E49F35C41704E7F52229D84DFA3672 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var compressedStream = new MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var zipStream = new System.IO.Compression.DeflateStream(compressedStream, CompressionMode.Compress))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_4 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)il2cpp_codegen_object_new(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829(L_4, L_3, 1, NULL);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002a_1:
					{// begin finally (depth: 2)
						{
							DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0034_1;
							}
						}
						{
							DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0034_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// zipStream.Write(data, 0, length);
					DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = V_1;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___data0;
					int32_t L_9 = ___length1;
					NullCheck(L_7);
					VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
					// zipStream.Close();
					DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_10 = V_1;
					NullCheck(L_10);
					VirtualActionInvoker0::Invoke(19 /* System.Void System.IO.Stream::Close() */, L_10);
					// return compressedStream.ToArray();
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
					NullCheck(L_11);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
					L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_11);
					V_2 = L_12;
					goto IL_0040;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		return L_13;
	}
}
// System.Byte[] Nino.Shared.Mgr.CompressMgr::CompressOnNative(Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CompressMgr_CompressOnNative_m595D53EA7F89B926CADCD92F7FB3A250879BA34C (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var compressedStream = new MemoryStream(length))
		int32_t L_0 = ___length1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_003f;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var zipStream = new System.IO.Compression.DeflateStream(compressedStream, CompressionMode.Compress))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_5 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)il2cpp_codegen_object_new(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829(L_5, L_4, 1, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002a_1:
					{// begin finally (depth: 2)
						{
							DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_6 = V_1;
							if (!L_6)
							{
								goto IL_0034_1;
							}
						}
						{
							DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = V_1;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_0034_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// data.WriteToStream(zipStream, length);
					ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* L_8 = ___data0;
					DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_9 = V_1;
					int32_t L_10 = ___length1;
					ExtensibleBufferExtensions_WriteToStream_mCE22E4084EC273B80A6F7716D27ED704F5353137(L_8, L_9, L_10, NULL);
					// zipStream.Close();
					DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_11 = V_1;
					NullCheck(L_11);
					VirtualActionInvoker0::Invoke(19 /* System.Void System.IO.Stream::Close() */, L_11);
					// return compressedStream.ToArray();
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_0;
					NullCheck(L_12);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
					L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_12);
					V_2 = L_13;
					goto IL_0040;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		return L_14;
	}
}
// System.IntPtr Nino.Shared.Mgr.CompressMgr::DecompressOnNative(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CompressMgr_DecompressOnNative_mBA1F5DC8DC0D748E0A45A34AE78F0138B0816C5D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t* ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Peak_mC59B25790CAD531AD4CB00962DBB9BB8FFEAED8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Request_m51E42690C6EC44A227143B78D004A3E5BCB60535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Return_mDB88DE7126A54B1772B44DD6E741F5024A423369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t857EFF3F6E2498403A602D550FC04119E0F33BD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_0 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* V_1 = NULL;
	bool V_2 = false;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// FlexibleStream result = ObjectPool<FlexibleStream>.Request();
		il2cpp_codegen_runtime_class_init_inline(ObjectPool_1_t857EFF3F6E2498403A602D550FC04119E0F33BD8_il2cpp_TypeInfo_var);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_0;
		L_0 = ObjectPool_1_Request_m51E42690C6EC44A227143B78D004A3E5BCB60535(ObjectPool_1_Request_m51E42690C6EC44A227143B78D004A3E5BCB60535_RuntimeMethod_var);
		V_0 = L_0;
		// result.Reset();
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_1 = V_0;
		NullCheck(L_1);
		FlexibleStream_Reset_mA516175639BFDD579DE86080C89EF27577D3B689(L_1, NULL);
		// if (ObjectPool<FlexibleStream>.Peak() != null)
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_2;
		L_2 = ObjectPool_1_Peak_mC59B25790CAD531AD4CB00962DBB9BB8FFEAED8E(ObjectPool_1_Peak_mC59B25790CAD531AD4CB00962DBB9BB8FFEAED8E_RuntimeMethod_var);
		V_2 = (bool)((!(((RuntimeObject*)(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// compressedStream = ObjectPool<FlexibleStream>.Request();
		il2cpp_codegen_runtime_class_init_inline(ObjectPool_1_t857EFF3F6E2498403A602D550FC04119E0F33BD8_il2cpp_TypeInfo_var);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_4;
		L_4 = ObjectPool_1_Request_m51E42690C6EC44A227143B78D004A3E5BCB60535(ObjectPool_1_Request_m51E42690C6EC44A227143B78D004A3E5BCB60535_RuntimeMethod_var);
		V_1 = L_4;
		// compressedStream.ChangeBuffer(data);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
		NullCheck(L_5);
		FlexibleStream_ChangeBuffer_m09BEADE2182C02EA0CC0BE06A71B07D38E048308(L_5, L_6, NULL);
		goto IL_0035;
	}

IL_002c:
	{
		// compressedStream = new FlexibleStream(data);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___data0;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_8 = (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)il2cpp_codegen_object_new(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1(L_8, L_7, NULL);
		V_1 = L_8;
	}

IL_0035:
	{
		// using (var zipStream =
		//     new System.IO.Compression.DeflateStream(compressedStream, CompressionMode.Decompress))
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_9 = V_1;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_10 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)il2cpp_codegen_object_new(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829(L_10, L_9, 0, NULL);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_11 = V_3;
					if (!L_11)
					{
						goto IL_0087;
					}
				}
				{
					DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_12 = V_3;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0087:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// zipStream.CopyTo(result);
			DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_13 = V_3;
			FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_14 = V_0;
			NullCheck(L_13);
			Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999(L_13, L_14, NULL);
			// ObjectPool<FlexibleStream>.Return(compressedStream);
			FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_15 = V_1;
			il2cpp_codegen_runtime_class_init_inline(ObjectPool_1_t857EFF3F6E2498403A602D550FC04119E0F33BD8_il2cpp_TypeInfo_var);
			ObjectPool_1_Return_mDB88DE7126A54B1772B44DD6E741F5024A423369(L_15, ObjectPool_1_Return_mDB88DE7126A54B1772B44DD6E741F5024A423369_RuntimeMethod_var);
			// len = (int)result.Length;
			int32_t* L_16 = ___len1;
			FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_17 = V_0;
			NullCheck(L_17);
			int64_t L_18;
			L_18 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_17);
			*((int32_t*)L_16) = (int32_t)((int32_t)L_18);
			// IntPtr ptr = Marshal.AllocHGlobal(len);
			int32_t* L_19 = ___len1;
			int32_t L_20 = *((int32_t*)L_19);
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			intptr_t L_21;
			L_21 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_20, NULL);
			V_4 = L_21;
			// Marshal.Copy(result.GetBuffer(), 0, ptr, len);
			FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_22 = V_0;
			NullCheck(L_22);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
			L_23 = FlexibleStream_GetBuffer_m80AD9FFA7FBB95BC43083AF893DF0F9735960F2B(L_22, NULL);
			intptr_t L_24 = V_4;
			int32_t* L_25 = ___len1;
			int32_t L_26 = *((int32_t*)L_25);
			Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8(L_23, 0, L_24, L_26, NULL);
			// ObjectPool<FlexibleStream>.Return(result);
			FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_27 = V_0;
			ObjectPool_1_Return_mDB88DE7126A54B1772B44DD6E741F5024A423369(L_27, ObjectPool_1_Return_mDB88DE7126A54B1772B44DD6E741F5024A423369_RuntimeMethod_var);
			// return ptr;
			intptr_t L_28 = V_4;
			V_5 = L_28;
			goto IL_0088;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// }
		intptr_t L_29 = V_5;
		return L_29;
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
// System.String Nino.Shared.Mgr.ConstMgr::get_AssetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConstMgr_get_AssetPath_mE50E76FF4DF0AFF3D5814A4989A3FD338575DB65 (const RuntimeMethod* method) 
{
	{
		// public static string AssetPath => UnityEngine.Application.dataPath;
		String_t* L_0;
		L_0 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		return L_0;
	}
}
// System.Boolean Nino.Shared.Mgr.ConstMgr::get_EnableNativeDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstMgr_get_EnableNativeDeflate_m856D5EF7637113C1179D69BEBF654C74BB90A6F3 (const RuntimeMethod* method) 
{
	{
		// get => true;
		return (bool)1;
	}
}
// System.Void Nino.Shared.Mgr.ConstMgr::set_EnableNativeDeflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstMgr_set_EnableNativeDeflate_m85A8E59EA2777B9B248083C1E51008334F79D623 (bool ___value0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.Mgr.ConstMgr::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstMgr__cctor_mA915E003E8F41A457A5E405541B3A4737C9DDEAA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr__cctor_mA915E003E8F41A457A5E405541B3A4737C9DDEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly bool IsMono = Type.GetType("Mono.Runtime") != null;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = il2cpp_codegen_get_type(_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, ConstMgr__cctor_mA915E003E8F41A457A5E405541B3A4737C9DDEAA_RuntimeMethod_var);
		bool L_1;
		L_1 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, (Type_t*)NULL, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___IsMono_0 = L_1;
		// public static readonly byte[] Null = Array.Empty<byte>();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___Null_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___Null_1), (void*)L_2);
		// public static readonly object[] EmptyParam = Array.Empty<object>();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___EmptyParam_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___EmptyParam_2), (void*)L_3);
		// public static readonly Type ObjectType = typeof(object);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ObjectType_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ObjectType_3), (void*)L_5);
		// public static readonly Type ByteType = typeof(byte);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ByteType_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ByteType_4), (void*)L_7);
		// public static readonly Type SByteType = typeof(sbyte);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___SByteType_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___SByteType_5), (void*)L_9);
		// public static readonly Type ShortType = typeof(short);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ShortType_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ShortType_6), (void*)L_11);
		// public static readonly Type UShortType = typeof(ushort);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___UShortType_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___UShortType_7), (void*)L_13);
		// public static readonly Type IntType = typeof(int);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___IntType_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___IntType_8), (void*)L_15);
		// public static readonly Type UIntType = typeof(uint);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___UIntType_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___UIntType_9), (void*)L_17);
		// public static readonly Type LongType = typeof(long);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___LongType_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___LongType_10), (void*)L_19);
		// public static readonly Type ULongType = typeof(ulong);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ULongType_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ULongType_11), (void*)L_21);
		// public static readonly Type StringType = typeof(string);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___StringType_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___StringType_12), (void*)L_23);
		// public static readonly Type BoolType = typeof(bool);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_24, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___BoolType_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___BoolType_13), (void*)L_25);
		// public static readonly Type DecimalType = typeof(decimal);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_26, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DecimalType_14 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DecimalType_14), (void*)L_27);
		// public static readonly Type DoubleType = typeof(double);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_28, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DoubleType_15 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DoubleType_15), (void*)L_29);
		// public static readonly Type FloatType = typeof(float);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___FloatType_16 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___FloatType_16), (void*)L_31);
		// public static readonly Type CharType = typeof(char);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___CharType_17 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___CharType_17), (void*)L_33);
		// public static readonly Type DateTimeType = typeof(DateTime);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DateTimeType_18 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DateTimeType_18), (void*)L_35);
		// public static readonly Type ByteArrType = typeof(byte[]);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_36, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ByteArrType_19 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ByteArrType_19), (void*)L_37);
		// public static readonly Type ByteListType = typeof(List<byte>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_38, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ByteListType_20 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ByteListType_20), (void*)L_39);
		// public static readonly Type ListDefType = typeof(List<>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ListDefType_21 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___ListDefType_21), (void*)L_41);
		// public static readonly Type DictDefType = typeof(Dictionary<,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_42, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DictDefType_22 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___DictDefType_22), (void*)L_43);
		// public static readonly Type NullableDefType = typeof(Nullable<>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_44, NULL);
		((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___NullableDefType_23 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___NullableDefType_23), (void*)L_45);
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
// System.Void Nino.Shared.IO.MonoPInvokeCallbackAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m680CA19D4ACC59DBC7DFBC4A713B2A58F11F5655 (MonoPInvokeCallbackAttribute_t68103BAE5A2686167BF5624C92AAD7D5487639C7* __this, const RuntimeMethod* method) 
{
	{
		// public MonoPInvokeCallbackAttribute()
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
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
// System.Void Nino.Shared.IO.ExtensibleBufferExtensions::WriteToStream(Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>,System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibleBufferExtensions_WriteToStream_mCE22E4084EC273B80A6F7716D27ED704F5353137 (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* ___buffer0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		// byte[] bytes = BufferPool.RequestBuffer(4096);
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = BufferPool_RequestBuffer_m32364A82169CC00CBDD5DAAB06027B0E0FDC65A7(((int32_t)4096), NULL);
		V_0 = L_0;
		// if (length <= 4096)
		int32_t L_1 = ___length2;
		V_2 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// buffer.CopyTo(ref bytes, 0, length);
		ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* L_3 = ___buffer0;
		int32_t L_4 = ___length2;
		NullCheck(L_3);
		ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC(L_3, (&V_0), 0, L_4, ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC_RuntimeMethod_var);
		// stream.Write(bytes, 0, length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___stream1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = ___length2;
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		// BufferPool.ReturnBuffer(bytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		BufferPool_ReturnBuffer_m414138CD4C30BEBB4D0F4DE52FCD0CEC274B6849(L_8, NULL);
		// return;
		goto IL_0080;
	}

IL_003a:
	{
		// int wrote = 0;
		V_1 = 0;
		goto IL_006f;
	}

IL_003e:
	{
		// int sizeToWrite = length <= 4096 ? length : 4096;
		int32_t L_9 = ___length2;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)4096))))
		{
			goto IL_004e;
		}
	}
	{
		G_B6_0 = ((int32_t)4096);
		goto IL_004f;
	}

IL_004e:
	{
		int32_t L_10 = ___length2;
		G_B6_0 = L_10;
	}

IL_004f:
	{
		V_3 = G_B6_0;
		// buffer.CopyTo(ref bytes, wrote, sizeToWrite);
		ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* L_11 = ___buffer0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC(L_11, (&V_0), L_12, L_13, ExtensibleBuffer_1_CopyTo_m0BD289200255DF22E767FFD357274CB6611DAFCC_RuntimeMethod_var);
		// stream.Write(bytes, 0, sizeToWrite);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = ___stream1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, L_16);
		// length -= sizeToWrite;
		int32_t L_17 = ___length2;
		int32_t L_18 = V_3;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		// wrote += sizeToWrite;
		int32_t L_19 = V_1;
		int32_t L_20 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
	}

IL_006f:
	{
		// while(length > 0)
		int32_t L_21 = ___length2;
		V_4 = (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_003e;
		}
	}
	{
		// BufferPool.ReturnBuffer(bytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		BufferPool_ReturnBuffer_m414138CD4C30BEBB4D0F4DE52FCD0CEC274B6849(L_23, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.ExtensibleBufferExtensions::WriteToStream(Nino.Shared.IO.ExtensibleBuffer`1<System.Byte>,Nino.Shared.IO.DeflateStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibleBufferExtensions_WriteToStream_m28D57259635A62275C4517FA8D0FC4BED09C2451 (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* ___buffer0, DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* ___stream1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stream.Write(buffer.Data, 0, length);
		DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* L_0 = ___stream1;
		ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* L_1 = ___buffer0;
		NullCheck(L_1);
		uint8_t* L_2;
		L_2 = ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_inline(L_1, ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_RuntimeMethod_var);
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		DeflateStream_Write_m0798DBA813BECB49EAD753A2475776C5FA6B0F34(L_0, L_2, 0, L_3, NULL);
		// }
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
// System.Byte[] Nino.Shared.IO.BufferPool::RequestBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferPool_RequestBuffer_m32364A82169CC00CBDD5DAAB06027B0E0FDC65A7 (int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Pop_m70767D86B3C97D2386C4BE200394DF24475B81D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (Buffers.Count > 0)
				il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
				UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* L_4 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Buffers_0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_inline(L_4, UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_0055_1;
				}
			}
			{
				// ret = Buffers.Pop();
				il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
				UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* L_7 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Buffers_0;
				NullCheck(L_7);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = UncheckedStack_1_Pop_m70767D86B3C97D2386C4BE200394DF24475B81D8(L_7, UncheckedStack_1_Pop_m70767D86B3C97D2386C4BE200394DF24475B81D8_RuntimeMethod_var);
				V_2 = L_8;
				// if (ret.Length < size)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = ___size0;
				V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)L_10))? 1 : 0);
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_0052_1;
				}
			}
			{
				// byte[] buffer = new byte[size];
				int32_t L_12 = ___size0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
				V_5 = L_13;
				// ReturnBuffer(ret);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
				il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
				BufferPool_ReturnBuffer_m414138CD4C30BEBB4D0F4DE52FCD0CEC274B6849(L_14, NULL);
				// return buffer;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_5;
				V_6 = L_15;
				goto IL_006e;
			}

IL_0052_1:
			{
				goto IL_005e_1;
			}

IL_0055_1:
			{
				// ret = new byte[size];
				int32_t L_16 = ___size0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_16);
				V_2 = L_17;
			}

IL_005e_1:
			{
				// return ret;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
				V_6 = L_18;
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_6;
		return L_19;
	}
}
// System.Int32 Nino.Shared.IO.BufferPool::PreviewNextCacheBufferLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferPool_PreviewNextCacheBufferLength_mA0C8D0C942E4D545C95478366C7CF00E555DCF87 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Peek_m3CF46E9C8FDB90DE8F38FF91B73E867F8D07725A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (Buffers.Count == 0) return 0;
				il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
				UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* L_4 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Buffers_0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_inline(L_4, UncheckedStack_1_get_Count_mEBD60E1C8CC04DE6AB4EAA7FA606253AE86F5546_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0028_1;
				}
			}
			{
				// if (Buffers.Count == 0) return 0;
				V_3 = 0;
				goto IL_0042;
			}

IL_0028_1:
			{
				// return Buffers.Peek().Length;
				il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
				UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* L_7 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Buffers_0;
				NullCheck(L_7);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = UncheckedStack_1_Peek_m3CF46E9C8FDB90DE8F38FF91B73E867F8D07725A(L_7, UncheckedStack_1_Peek_m3CF46E9C8FDB90DE8F38FF91B73E867F8D07725A_RuntimeMethod_var);
				NullCheck(L_8);
				V_3 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// }
		int32_t L_9 = V_3;
		return L_9;
	}
}
// System.Byte[] Nino.Shared.IO.BufferPool::RequestBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferPool_RequestBuffer_mE864BD0440B9FDDD57E4A81B84D928F40B221CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___original0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// byte[] ret = RequestBuffer(original.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___original0;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BufferPool_RequestBuffer_m32364A82169CC00CBDD5DAAB06027B0E0FDC65A7(((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		// Buffer.BlockCopy(original,0,ret,0,original.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___original0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___original0;
		NullCheck(L_4);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// return ret;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		return L_6;
	}
}
// System.Byte[] Nino.Shared.IO.BufferPool::RequestBuffer(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferPool_RequestBuffer_m2E450A8C45A63E028648F32B719211806347DF0E (int32_t ___len0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___original1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// byte[] ret = RequestBuffer(len);
		int32_t L_0 = ___len0;
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BufferPool_RequestBuffer_m32364A82169CC00CBDD5DAAB06027B0E0FDC65A7(L_0, NULL);
		V_0 = L_1;
		// Buffer.BlockCopy(original,0,ret,0,original.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___original1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___original1;
		NullCheck(L_4);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// return ret;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		V_1 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		return L_6;
	}
}
// System.Void Nino.Shared.IO.BufferPool::ReturnBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferPool_ReturnBuffer_m414138CD4C30BEBB4D0F4DE52FCD0CEC274B6849 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_Push_m97B4F2C5A073787DD3F0A81688A64F9143D043D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Lock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// Buffers.Push(buffer);
			il2cpp_codegen_runtime_class_init_inline(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
			UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* L_4 = ((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Buffers_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
			NullCheck(L_4);
			UncheckedStack_1_Push_m97B4F2C5A073787DD3F0A81688A64F9143D043D1(L_4, L_5, UncheckedStack_1_Push_m97B4F2C5A073787DD3F0A81688A64F9143D043D1_RuntimeMethod_var);
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.BufferPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferPool__cctor_m2E76C3A2C0D7CEA0EC74415203A593128ACF4557 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1__ctor_mC610218C686ABB72B85B56272635FE35EECE82FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly UncheckedStack<byte[]> Buffers = new UncheckedStack<byte[]>(3);
		UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549* L_0 = (UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549*)il2cpp_codegen_object_new(UncheckedStack_1_t4D05B81F3134C7960DCAFD43AF4551BDD58AA549_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UncheckedStack_1__ctor_mC610218C686ABB72B85B56272635FE35EECE82FF(L_0, 3, UncheckedStack_1__ctor_mC610218C686ABB72B85B56272635FE35EECE82FF_RuntimeMethod_var);
		((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Buffers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Buffers_0), (void*)L_0);
		// private static readonly object Lock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Lock_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_StaticFields*)il2cpp_codegen_static_fields_for(BufferPool_t4AEE7F6552E8470F94F0DAB9BBA55C9846CBFEE6_il2cpp_TypeInfo_var))->___Lock_1), (void*)L_1);
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
// Nino.Shared.IO.FlexibleStream Nino.Shared.IO.DeflateStream::get_BaseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* DeflateStream_get_BaseStream_m0B695A753C090EE76973473BFA02C9A96EF91CD3 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
		// public FlexibleStream BaseStream => baseStream;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_0 = __this->___baseStream_4;
		return L_0;
	}
}
// System.Boolean Nino.Shared.IO.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_m9BAD517CBE5ECF522FA86B4506E415AC25DE14F0 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!disposed && mode == CompressionMode.Decompress)
		bool L_0 = __this->___disposed_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___mode_5;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return baseStream.CanRead;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_3 = __this->___baseStream_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		V_1 = L_4;
		goto IL_002c;
	}

IL_0028:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Nino.Shared.IO.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m12BF6C2B7BD790F86136FFB57D8B2D74A8B96613 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanSeek => false;
		return (bool)0;
	}
}
// System.Boolean Nino.Shared.IO.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m2DB0F89D9C6256FE53AD21A8D69977F777A98061 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!disposed && mode == CompressionMode.Compress)
		bool L_0 = __this->___disposed_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___mode_5;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return baseStream.CanWrite;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_3 = __this->___baseStream_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		V_1 = L_4;
		goto IL_002c;
	}

IL_0028:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Int64 Nino.Shared.IO.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_mAF3385768A3540318B18B3245CB0A391DE6997C5 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
		// public override long Length => throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_mAF3385768A3540318B18B3245CB0A391DE6997C5_RuntimeMethod_var)));
	}
}
// System.Int64 Nino.Shared.IO.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mDC0AD1D47C36AF192BDF4FC2BAA5EF5268385F9D (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
		// get => throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mDC0AD1D47C36AF192BDF4FC2BAA5EF5268385F9D_RuntimeMethod_var)));
	}
}
// System.Void Nino.Shared.IO.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m6EFA060015060A4B9A2D37DBB9D783822C5DFBF6 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_m6EFA060015060A4B9A2D37DBB9D783822C5DFBF6_RuntimeMethod_var)));
	}
}
// System.Void Nino.Shared.IO.DeflateStream::.ctor(Nino.Shared.IO.FlexibleStream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mC299976C28A4EA965FA5126874B466AFFA24079C (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, false, false)
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838(__this, L_0, L_1, (bool)0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::.ctor(Nino.Shared.IO.FlexibleStream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m1D0533F530B44CF76994D899515E59E3E7A77600 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, leaveOpen, false)
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838(__this, L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::.ctor(Nino.Shared.IO.FlexibleStream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* G_B7_0 = NULL;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* G_B7_1 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* G_B6_0 = NULL;
	DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* G_B6_1 = NULL;
	{
		// private DeflateStream(FlexibleStream compressedStream, CompressionMode mode, bool leaveOpen, bool gzip)
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		// if (mode != CompressionMode.Compress && mode != 0)
		int32_t L_0 = ___mode1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___mode1;
		G_B3_0 = ((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// throw new ArgumentException("mode");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838_RuntimeMethod_var)));
	}

IL_0023:
	{
		// baseStream = compressedStream ?? throw new ArgumentNullException(nameof(compressedStream));
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_4 = ___compressedStream0;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_5 = L_4;
		G_B6_0 = L_5;
		G_B6_1 = __this;
		if (L_5)
		{
			G_B7_0 = L_5;
			G_B7_1 = __this;
			goto IL_0034;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59BD369CF985844B111CA4447943A285D359441C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838_RuntimeMethod_var)));
	}

IL_0034:
	{
		NullCheck(G_B7_1);
		G_B7_1->___baseStream_4 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___baseStream_4), (void*)G_B7_0);
		// native = DeflateStreamNative.Create(compressedStream, mode, gzip);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_7 = ___compressedStream0;
		int32_t L_8 = ___mode1;
		bool L_9 = ___gzip3;
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_10;
		L_10 = DeflateStreamNative_Create_m95F5BBF514FE8C33109736871ADAA084D7F51F51(L_7, L_8, L_9, NULL);
		__this->___native_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___native_8), (void*)L_10);
		// if (native == null)
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_11 = __this->___native_8;
		V_1 = (bool)((((RuntimeObject*)(DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		// throw new NotImplementedException("Failed to initialize zlib. You probably have an old zlib installed. Version 1.2.0.4 or later is required.");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_13 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m5F9985550E12807AEAFEAD07DFF67FEE2E31D838_RuntimeMethod_var)));
	}

IL_0061:
	{
		// this.mode = mode;
		int32_t L_14 = ___mode1;
		__this->___mode_5 = L_14;
		// this.leaveOpen = leaveOpen;
		bool L_15 = ___leaveOpen2;
		__this->___leaveOpen_6 = L_15;
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finalize_mFC514D5BA802F54EF602C84729FAE85D342600C6 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose(false);
			VirtualActionInvoker1< bool >::Invoke(20 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finish_m591064E2EF51E5122B1F67E1CC94B88D5AF41D8B (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
		// native.DisposeZStream();
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_0 = __this->___native_8;
		NullCheck(L_0);
		DeflateStreamNative_DisposeZStream_mB2B714B3E5EED1C0BCEB087A3F11D33E5E5D075E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Reset_m355B815A6B0641618F4FB78EED44CD49F94D0265 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
		// baseStream.Position = 0;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_0 = __this->___baseStream_4;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, ((int64_t)0));
		// baseStream.SetLength(0);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_1 = __this->___baseStream_4;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_1, ((int64_t)0));
		// native.ResetZStream(mode, false);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_2 = __this->___native_8;
		int32_t L_3 = __this->___mode_5;
		NullCheck(L_2);
		DeflateStreamNative_ResetZStream_m3C8AB611BA9651CC4C686B53FB4EA5BF3732A39D(L_2, L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.IntPtr Nino.Shared.IO.DeflateStream::GetDecompressedBytes(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DeflateStream_GetDecompressedBytes_m27D01F87798827EEB26C58FDFCDD244049866065 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, int32_t* ___length0, int32_t ___minLen1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// length = 0;
		int32_t* L_0 = ___length0;
		*((int32_t*)L_0) = (int32_t)0;
		// var expandSize = minLen * 10;
		int32_t L_1 = ___minLen1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)10)));
		// IntPtr buffer = Marshal.AllocHGlobal(expandSize);
		int32_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_2, NULL);
		V_2 = L_3;
		// int maxLen = minLen * 5;
		int32_t L_4 = ___minLen1;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_4, 5));
		goto IL_0041;
	}

IL_0016:
	{
		// length += read;
		int32_t* L_5 = ___length0;
		int32_t* L_6 = ___length0;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8 = V_0;
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8));
		// if (length >= maxLen)
		int32_t* L_9 = ___length0;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		// maxLen += expandSize;
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		// buffer = Marshal.ReAllocHGlobal(buffer, new IntPtr(maxLen + expandSize));
		intptr_t L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = V_1;
		intptr_t L_18;
		memset((&L_18), 0, sizeof(L_18));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_18), ((int32_t)il2cpp_codegen_add(L_16, L_17)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_19;
		L_19 = Marshal_ReAllocHGlobal_m903B07B988C5FED03A8F1887C5F7E9538B24BF77(L_15, L_18, NULL);
		V_2 = L_19;
	}

IL_0040:
	{
	}

IL_0041:
	{
		// while ((read = Read((byte*)buffer, length, expandSize)) != 0)
		intptr_t L_20 = V_2;
		void* L_21;
		L_21 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_20, NULL);
		int32_t* L_22 = ___length0;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38(__this, (uint8_t*)L_21, L_23, L_24, NULL);
		int32_t L_26 = L_25;
		V_0 = L_26;
		V_5 = (bool)((!(((uint32_t)L_26) <= ((uint32_t)0)))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0016;
		}
	}
	{
		// return buffer;
		intptr_t L_28 = V_2;
		V_6 = L_28;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		intptr_t L_29 = V_6;
		return L_29;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m65718284C7196F386EC0D6EFDCAB54278F4647B3 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* G_B4_0 = NULL;
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* G_B3_0 = NULL;
	int32_t G_B8_0 = 0;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* G_B12_0 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* G_B11_0 = NULL;
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
	}

IL_000f:
	{
		// native?.Dispose(disposing);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_2 = __this->___native_8;
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_001b:
	{
		bool L_4 = ___disposing0;
		NullCheck(G_B4_0);
		DeflateStreamNative_Dispose_m08DDE9450FA2087D51BA875141496063A8489F4C(G_B4_0, L_4, NULL);
	}

IL_0022:
	{
		// if (disposing && !disposed)
		bool L_5 = ___disposing0;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool L_6 = __this->___disposed_7;
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B8_0 = 0;
	}

IL_0031:
	{
		V_1 = (bool)G_B8_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		// disposed = true;
		__this->___disposed_7 = (bool)1;
		// if (!leaveOpen)
		bool L_8 = __this->___leaveOpen_6;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// baseStream?.Close();
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_10 = __this->___baseStream_4;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_11 = L_10;
		G_B11_0 = L_11;
		if (L_11)
		{
			G_B12_0 = L_11;
			goto IL_0057;
		}
	}
	{
		goto IL_005d;
	}

IL_0057:
	{
		NullCheck(G_B12_0);
		VirtualActionInvoker0::Invoke(19 /* System.Void System.IO.Stream::Close() */, G_B12_0);
	}

IL_005d:
	{
		// baseStream = null;
		__this->___baseStream_4 = (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseStream_4), (void*)(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)NULL);
	}

IL_0065:
	{
	}

IL_0066:
	{
		// base.Dispose(disposing);
		bool L_12 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m0A536FECF9E2713195000EDFB2FF9434E052C094 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (count == 0)
		int32_t L_0 = ___count2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return 0;
		V_1 = 0;
		goto IL_0042;
	}

IL_000e:
	{
		// fixed (byte* ptr = array)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_001d;
		}
	}

IL_0018:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0026;
	}

IL_001d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0026:
	{
		// IntPtr buffer = new IntPtr(ptr + offset);
		uint8_t* L_6 = V_2;
		int32_t L_7 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_4), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7)), NULL);
		// return native.ReadZStream(buffer, count);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_8 = __this->___native_8;
		intptr_t L_9 = V_4;
		int32_t L_10 = ___count2;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = DeflateStreamNative_ReadZStream_m0EFACBDEEF1D1A8E1E94918660B9C158D015B700(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStream::ReadInternal(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m83B3FD9D2497FE790AC33C9742C232A07AE9D19A (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, uint8_t* ___ptr0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (count == 0)
		int32_t L_0 = ___count2;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		// IntPtr buffer = new IntPtr(ptr + offset);
		uint8_t* L_2 = ___ptr0;
		int32_t L_3 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_0), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)), NULL);
		// return native.ReadZStream(buffer, count);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_4 = __this->___native_8;
		intptr_t L_5 = V_0;
		int32_t L_6 = ___count2;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_ReadZStream_m0EFACBDEEF1D1A8E1E94918660B9C158D015B700(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStream::Read(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, uint8_t* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (disposed)
		bool L_0 = __this->___disposed_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ObjectDisposedException(GetType().FullName);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (array == null)
		uint8_t* L_5 = ___array0;
		V_1 = (bool)((((intptr_t)L_5) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// throw new ArgumentNullException(nameof(array));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38_RuntimeMethod_var)));
	}

IL_0032:
	{
		// if (!CanRead)
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// throw new InvalidOperationException("Stream does not support reading.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38_RuntimeMethod_var)));
	}

IL_004b:
	{
		// if (offset < 0 || count < 0)
		int32_t L_11 = ___offset1;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_12 = ___count2;
		G_B9_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0056;
	}

IL_0055:
	{
		G_B9_0 = 1;
	}

IL_0056:
	{
		V_3 = (bool)G_B9_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// throw new ArgumentException("Dest or count is negative.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m7348584B3D82C491A77232DE530A7573E008BA38_RuntimeMethod_var)));
	}

IL_0066:
	{
		// return ReadInternal(array, offset, count);
		uint8_t* L_15 = ___array0;
		int32_t L_16 = ___offset1;
		int32_t L_17 = ___count2;
		int32_t L_18;
		L_18 = DeflateStream_ReadInternal_m83B3FD9D2497FE790AC33C9742C232A07AE9D19A(__this, L_15, L_16, L_17, NULL);
		V_4 = L_18;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		int32_t L_19 = V_4;
		return L_19;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (disposed)
		bool L_0 = __this->___disposed_7;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ObjectDisposedException(GetType().FullName);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (array == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		V_2 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// throw new ArgumentNullException(nameof(array));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139_RuntimeMethod_var)));
	}

IL_0031:
	{
		// if (!CanRead)
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException("Stream does not support reading.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139_RuntimeMethod_var)));
	}

IL_004a:
	{
		// int num = array.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___array0;
		NullCheck(L_11);
		V_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		// if (offset < 0 || count < 0)
		int32_t L_12 = ___offset1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_13 = ___count2;
		G_B9_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B9_0 = 1;
	}

IL_0059:
	{
		V_4 = (bool)G_B9_0;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		// throw new ArgumentException("Dest or count is negative.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139_RuntimeMethod_var)));
	}

IL_006b:
	{
		// if (offset > num)
		int32_t L_16 = ___offset1;
		int32_t L_17 = V_0;
		V_5 = (bool)((((int32_t)L_16) > ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		// throw new ArgumentException("destination offset is beyond array size");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139_RuntimeMethod_var)));
	}

IL_0081:
	{
		// if (offset + count > num)
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___count2;
		int32_t L_22 = V_0;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))) > ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0099;
		}
	}
	{
		// throw new ArgumentException("Reading would overrun buffer");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53549F14C4C0C01E846937308C01413567514ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_mBFCD717F57405B8A8B3FF693987267F9C8320139_RuntimeMethod_var)));
	}

IL_0099:
	{
		// return ReadInternal(array, offset, count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___array0;
		int32_t L_26 = ___offset1;
		int32_t L_27 = ___count2;
		int32_t L_28;
		L_28 = DeflateStream_ReadInternal_m0A536FECF9E2713195000EDFB2FF9434E052C094(__this, L_25, L_26, L_27, NULL);
		V_7 = L_28;
		goto IL_00a6;
	}

IL_00a6:
	{
		// }
		int32_t L_29 = V_7;
		return L_29;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_mAC7ABAF2CDFBCD979AA2AB3E7231AAC22CDF69B0 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (count != 0)
		int32_t L_0 = ___count2;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// fixed (byte* ptr = array)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_0022;
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		NullCheck(L_5);
		V_1 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0022:
	{
		// IntPtr buffer = new IntPtr(ptr + offset);
		uint8_t* L_6 = V_1;
		int32_t L_7 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_3), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7)), NULL);
		// native.WriteZStream(buffer, count);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_8 = __this->___native_8;
		intptr_t L_9 = V_3;
		int32_t L_10 = ___count2;
		NullCheck(L_8);
		DeflateStreamNative_WriteZStream_m6ACDB9406DA3AA75D9B685037872F8B20347DC11(L_8, L_9, L_10, NULL);
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::Write(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_m0798DBA813BECB49EAD753A2475776C5FA6B0F34 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, uint8_t* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (count != 0)
		int32_t L_0 = ___count2;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// IntPtr buffer = new IntPtr(array + offset);
		uint8_t* L_2 = ___array0;
		int32_t L_3 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_1), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)), NULL);
		// native.WriteZStream(buffer, count);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_4 = __this->___native_8;
		intptr_t L_5 = V_1;
		int32_t L_6 = ___count2;
		NullCheck(L_4);
		DeflateStreamNative_WriteZStream_m6ACDB9406DA3AA75D9B685037872F8B20347DC11(L_4, L_5, L_6, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (disposed)
		bool L_0 = __this->___disposed_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ObjectDisposedException(GetType().FullName);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (array == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// throw new ArgumentNullException(nameof(array));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA_RuntimeMethod_var)));
	}

IL_0031:
	{
		// if (offset < 0)
		int32_t L_8 = ___offset1;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA_RuntimeMethod_var)));
	}

IL_0045:
	{
		// if (count < 0)
		int32_t L_11 = ___count2;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(count));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA_RuntimeMethod_var)));
	}

IL_0059:
	{
		// if (!CanWrite)
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		// throw new NotSupportedException("Stream does not support writing");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_16 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA_RuntimeMethod_var)));
	}

IL_0074:
	{
		// if (offset > array.Length - count)
		int32_t L_17 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___array0;
		NullCheck(L_18);
		int32_t L_19 = ___count2;
		V_5 = (bool)((((int32_t)L_17) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), L_19))))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_008e;
		}
	}
	{
		// throw new ArgumentException("Buffer too small. count/offset wrong.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m40796176C71B37AFCA027B62F09917C27C84CEBA_RuntimeMethod_var)));
	}

IL_008e:
	{
		// WriteInternal(array, offset, count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___array0;
		int32_t L_23 = ___offset1;
		int32_t L_24 = ___count2;
		DeflateStream_WriteInternal_mAC7ABAF2CDFBCD979AA2AB3E7231AAC22CDF69B0(__this, L_22, L_23, L_24, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mB13146C4B51BF65A82A4B20DCB907DC88CB74419 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (disposed)
		bool L_0 = __this->___disposed_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ObjectDisposedException(GetType().FullName);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_mB13146C4B51BF65A82A4B20DCB907DC88CB74419_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (CanWrite)
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// native.Flush();
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_7 = __this->___native_8;
		NullCheck(L_7);
		DeflateStreamNative_Flush_mC8B5F7AE305255FB66EE9037F098D89EBA436579(L_7, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.IAsyncResult Nino.Shared.IO.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadInternal_m0A536FECF9E2713195000EDFB2FF9434E052C094_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// if (disposed)
		bool L_0 = __this->___disposed_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ObjectDisposedException(GetType().FullName);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (!CanRead)
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// throw new NotSupportedException("This stream does not support reading");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_7 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741_RuntimeMethod_var)));
	}

IL_0036:
	{
		// if (array == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		V_2 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		// throw new ArgumentNullException(nameof(array));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_10 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741_RuntimeMethod_var)));
	}

IL_004a:
	{
		// if (count < 0)
		int32_t L_11 = ___count2;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(count), "Must be >= 0");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741_RuntimeMethod_var)));
	}

IL_0063:
	{
		// if (offset < 0)
		int32_t L_14 = ___offset1;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset), "Must be >= 0");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741_RuntimeMethod_var)));
	}

IL_007e:
	{
		// if (count + offset > array.Length)
		int32_t L_17 = ___count2;
		int32_t L_18 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___array0;
		NullCheck(L_19);
		V_5 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) > ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0098;
		}
	}
	{
		// throw new ArgumentException("Buffer too small. count/offset wrong.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mB3E221F72DF4721DEFDBEA13F163ABD2509B5741_RuntimeMethod_var)));
	}

IL_0098:
	{
		// return new ReadMethod(ReadInternal).BeginInvoke(array, offset, count, asyncCallback, asyncState);
		ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* L_22 = (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE*)il2cpp_codegen_object_new(ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ReadMethod__ctor_m19744ACE29153A74D5D2CCC509BC0B3665434DAE(L_22, __this, (intptr_t)((void*)DeflateStream_ReadInternal_m0A536FECF9E2713195000EDFB2FF9434E052C094_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___array0;
		int32_t L_24 = ___offset1;
		int32_t L_25 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_26 = ___asyncCallback3;
		RuntimeObject* L_27 = ___asyncState4;
		NullCheck(L_22);
		RuntimeObject* L_28;
		L_28 = ReadMethod_BeginInvoke_m34B4329618F4FB060817479CC249F67D109DA972(L_22, L_23, L_24, L_25, L_26, L_27, NULL);
		V_6 = L_28;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		RuntimeObject* L_29 = V_6;
		return L_29;
	}
}
// System.IAsyncResult Nino.Shared.IO.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608 (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteInternal_mAC7ABAF2CDFBCD979AA2AB3E7231AAC22CDF69B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// if (disposed)
		bool L_0 = __this->___disposed_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ObjectDisposedException(GetType().FullName);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (!CanWrite)
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// throw new InvalidOperationException("This stream does not support writing");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608_RuntimeMethod_var)));
	}

IL_0036:
	{
		// if (array == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		V_2 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		// throw new ArgumentNullException(nameof(array));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_10 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608_RuntimeMethod_var)));
	}

IL_004a:
	{
		// if (count < 0)
		int32_t L_11 = ___count2;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(count), "Must be >= 0");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608_RuntimeMethod_var)));
	}

IL_0063:
	{
		// if (offset < 0)
		int32_t L_14 = ___offset1;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset), "Must be >= 0");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608_RuntimeMethod_var)));
	}

IL_007e:
	{
		// if (count + offset > array.Length)
		int32_t L_17 = ___count2;
		int32_t L_18 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___array0;
		NullCheck(L_19);
		V_5 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) > ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0098;
		}
	}
	{
		// throw new ArgumentException("Buffer too small. count/offset wrong.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m314585D0FD9F9E6D0BD6BDD593621AEE5FF42608_RuntimeMethod_var)));
	}

IL_0098:
	{
		// return new WriteMethod(WriteInternal).BeginInvoke(array, offset, count, asyncCallback, asyncState);
		WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* L_22 = (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B*)il2cpp_codegen_object_new(WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WriteMethod__ctor_m3BCB04BD39276E4CD913DCC34D9A0A04B6219799(L_22, __this, (intptr_t)((void*)DeflateStream_WriteInternal_mAC7ABAF2CDFBCD979AA2AB3E7231AAC22CDF69B0_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___array0;
		int32_t L_24 = ___offset1;
		int32_t L_25 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_26 = ___asyncCallback3;
		RuntimeObject* L_27 = ___asyncState4;
		NullCheck(L_22);
		RuntimeObject* L_28;
		L_28 = WriteMethod_BeginInvoke_mC2D33C9166D113252311D97362388B078FE9086B(L_22, L_23, L_24, L_25, L_26, L_27, NULL);
		V_6 = L_28;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		RuntimeObject* L_29 = V_6;
		return L_29;
	}
}
// System.Int64 Nino.Shared.IO.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_m88E6788456F7002BBE9EF3A45FDB629D6DE7DA0E (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_m88E6788456F7002BBE9EF3A45FDB629D6DE7DA0E_RuntimeMethod_var)));
	}
}
// System.Void Nino.Shared.IO.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_mB2971C5DB496E3E89EEC0DE73482BB6B29B14BDF (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_mB2971C5DB496E3E89EEC0DE73482BB6B29B14BDF_RuntimeMethod_var)));
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
int32_t ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_Multicast(ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* currentDelegate = reinterpret_cast<ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_OpenInst(ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_OpenStatic(ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_OpenStaticInvoker(ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
int32_t ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_ClosedStaticInvoker(ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

	return returnValue;
}
// System.Void Nino.Shared.IO.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_m19744ACE29153A74D5D2CCC509BC0B3665434DAE (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893_Multicast;
}
// System.Int32 Nino.Shared.IO.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_Invoke_m46EC621E60CA15E617BBA413EE322607DDF77893 (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Nino.Shared.IO.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_m34B4329618F4FB060817479CC249F67D109DA972 (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Nino.Shared.IO.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBB957A464EC79ACB42799121D10F8E4A8C91C8AA (ReadMethod_tD3512FE5E5D2604DE162CE78CBF1C0ED7B0067AE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_Multicast(WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* currentDelegate = reinterpret_cast<WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_OpenInst(WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_OpenStatic(WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_OpenStaticInvoker(WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
void WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_ClosedStaticInvoker(WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

}
// System.Void Nino.Shared.IO.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_m3BCB04BD39276E4CD913DCC34D9A0A04B6219799 (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3_Multicast;
}
// System.Void Nino.Shared.IO.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_Invoke_m2DA3058B948C9CEC2842D472A5BE7ED5B83455A3 (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Nino.Shared.IO.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_mC2D33C9166D113252311D97362388B078FE9086B (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Nino.Shared.IO.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_m19E7C6C5D96B38330A4530BB517BA14B0EEE7F02 (WriteMethod_tAEFCAF3DBF62E1759A7B35332E9EB38C123A552B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* DEFAULT_CALL ReversePInvokeWrapper_DeflateStreamNative_Create_m95F5BBF514FE8C33109736871ADAA084D7F51F51(FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___compressedStream0, int32_t ___mode1, int32_t ___gzip2)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'Nino.Shared.IO.FlexibleStream'."), NULL);
}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_mEC47FA8621529D848F62FB3C4808EB964B199384(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedRead_mEC47FA8621529D848F62FB3C4808EB964B199384(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m4DCEDDED79DFBD1247A2FDEDC4F1E1690B1EC6A3(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedWrite_m4DCEDDED79DFBD1247A2FDEDC4F1E1690B1EC6A3(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
// System.Void Nino.Shared.IO.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_m13E20AEA96F2B5693FD697DCE7A0F42D76F8FE52 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, const RuntimeMethod* method) 
{
	{
		// private DeflateStreamNative()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// Nino.Shared.IO.DeflateStreamNative Nino.Shared.IO.DeflateStreamNative::Create(Nino.Shared.IO.FlexibleStream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* DeflateStreamNative_Create_m95F5BBF514FE8C33109736871ADAA084D7F51F51 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedRead_mEC47FA8621529D848F62FB3C4808EB964B199384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedWrite_m4DCEDDED79DFBD1247A2FDEDC4F1E1690B1EC6A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* V_0 = NULL;
	bool V_1 = false;
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* V_2 = NULL;
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* G_B2_0 = NULL;
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* G_B1_0 = NULL;
	UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* G_B3_0 = NULL;
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* G_B3_1 = NULL;
	{
		// DeflateStreamNative deflateStreamNative = new DeflateStreamNative();
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_0 = (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05*)il2cpp_codegen_object_new(DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeflateStreamNative__ctor_m13E20AEA96F2B5693FD697DCE7A0F42D76F8FE52(L_0, NULL);
		V_0 = L_0;
		// deflateStreamNative.data = GCHandle.Alloc(deflateStreamNative);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_1 = V_0;
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_2 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6(L_2, NULL);
		NullCheck(L_1);
		L_1->___data_5 = L_3;
		// deflateStreamNative.feeder = ((mode == CompressionMode.Compress) ? UnmanagedWrite : new UnmanagedReadOrWrite(UnmanagedRead));
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_4 = V_0;
		int32_t L_5 = ___mode1;
		G_B1_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B2_0 = L_4;
			goto IL_0026;
		}
	}
	{
		UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* L_6 = (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnmanagedReadOrWrite__ctor_mD2D8A5AC847B3048A4DEE09258F52DBE19F1524A(L_6, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedRead_mEC47FA8621529D848F62FB3C4808EB964B199384_RuntimeMethod_var), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0032;
	}

IL_0026:
	{
		UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* L_7 = (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnmanagedReadOrWrite__ctor_mD2D8A5AC847B3048A4DEE09258F52DBE19F1524A(L_7, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedWrite_m4DCEDDED79DFBD1247A2FDEDC4F1E1690B1EC6A3_RuntimeMethod_var), NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0032:
	{
		NullCheck(G_B3_1);
		G_B3_1->___feeder_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___feeder_2), (void*)G_B3_0);
		// deflateStreamNative.zStream = CreateZStream(mode, gzip, deflateStreamNative.feeder, GCHandle.ToIntPtr(deflateStreamNative.data));
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_8 = V_0;
		int32_t L_9 = ___mode1;
		bool L_10 = ___gzip2;
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_11 = V_0;
		NullCheck(L_11);
		UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* L_12 = L_11->___feeder_2;
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_13 = V_0;
		NullCheck(L_13);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = L_13->___data_5;
		intptr_t L_15;
		L_15 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_14, NULL);
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_16;
		L_16 = DeflateStreamNative_CreateZStream_m401B8C247011E86EA3ED9741D82F649F6F82EC4C(L_9, L_10, L_12, L_15, NULL);
		NullCheck(L_8);
		L_8->___zStream_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___zStream_4), (void*)L_16);
		// if (deflateStreamNative.zStream.IsInvalid)
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_17 = V_0;
		NullCheck(L_17);
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_18 = L_17->___zStream_4;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_18);
		V_1 = L_19;
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_0071;
		}
	}
	{
		// deflateStreamNative.Dispose(true);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_21 = V_0;
		NullCheck(L_21);
		DeflateStreamNative_Dispose_m08DDE9450FA2087D51BA875141496063A8489F4C(L_21, (bool)1, NULL);
		// return null;
		V_2 = (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05*)NULL;
		goto IL_007c;
	}

IL_0071:
	{
		// deflateStreamNative.baseStream = compressedStream;
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_22 = V_0;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_23 = ___compressedStream0;
		NullCheck(L_22);
		L_22->___baseStream_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___baseStream_3), (void*)L_23);
		// return deflateStreamNative;
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_24 = V_0;
		V_2 = L_24;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_25 = V_2;
		return L_25;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative::DisposeZStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_DisposeZStream_mB2B714B3E5EED1C0BCEB087A3F11D33E5E5D075E (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (zStream != null && !zStream.IsInvalid)
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_0 = __this->___zStream_4;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_1 = __this->___zStream_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// zStream.Dispose();
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_4 = __this->___zStream_4;
		NullCheck(L_4);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative::ResetZStream(System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_ResetZStream_m3C8AB611BA9651CC4C686B53FB4EA5BF3732A39D (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, int32_t ___mode0, bool ___gzip1, const RuntimeMethod* method) 
{
	{
		// zStream = CreateZStream(mode, gzip, this.feeder, GCHandle.ToIntPtr(this.data));
		int32_t L_0 = ___mode0;
		bool L_1 = ___gzip1;
		UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* L_2 = __this->___feeder_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = __this->___data_5;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_5;
		L_5 = DeflateStreamNative_CreateZStream_m401B8C247011E86EA3ED9741D82F649F6F82EC4C(L_0, L_1, L_2, L_4, NULL);
		__this->___zStream_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___zStream_4), (void*)L_5);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Finalize_m0FB0CE0C5AD93B81FEF540F45B066FCC11FE460A (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose(false);
			DeflateStreamNative_Dispose_m08DDE9450FA2087D51BA875141496063A8489F4C(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m08DDE9450FA2087D51BA875141496063A8489F4C (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (disposing && !disposed)
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->___disposed_6;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// disposed = true;
		__this->___disposed_6 = (bool)1;
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		goto IL_0038;
	}

IL_0026:
	{
		// baseStream = Stream.Null as FlexibleStream;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		__this->___baseStream_3 = ((FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)IsInstSealed((RuntimeObject*)L_3, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseStream_3), (void*)((FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5*)IsInstSealed((RuntimeObject*)L_3, FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5_il2cpp_TypeInfo_var)));
	}

IL_0038:
	{
		// if (zStream != null && !zStream.IsInvalid)
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_4 = __this->___zStream_4;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_5 = __this->___zStream_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_5);
		G_B9_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B9_0 = 0;
	}

IL_0051:
	{
		V_1 = (bool)G_B9_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// zStream.Dispose();
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_8 = __this->___zStream_4;
		NullCheck(L_8);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_8, NULL);
	}

IL_0063:
	{
		// _ = data;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_9 = __this->___data_5;
		// if (data.IsAllocated)
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (&__this->___data_5);
		bool L_11;
		L_11 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0087;
		}
	}
	{
		// data.Free();
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_13 = (&__this->___data_5);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_13, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_mC8B5F7AE305255FB66EE9037F098D89EBA436579 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int result = Flush(zStream);
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_0 = __this->___zStream_4;
		int32_t L_1;
		L_1 = DeflateStreamNative_Flush_m6C92162F7AFD3ECD2B3B4BEB4362D2D1F4AC9E40(L_0, NULL);
		V_0 = L_1;
		// CheckResult(result, "Flush");
		int32_t L_2 = V_0;
		DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2(__this, L_2, _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6, NULL);
		// }
		return;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m0EFACBDEEF1D1A8E1E94918660B9C158D015B700 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int result = ReadZStream(zStream, buffer, length);
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_0 = __this->___zStream_4;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_ReadZStream_m8AC9F625DBB6FFD30A06EF3C70824C7DBD98271C(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// CheckResult(result, "ReadInternal");
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2(__this, L_4, _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F, NULL);
		// return result;
		int32_t L_5 = V_0;
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m6ACDB9406DA3AA75D9B685037872F8B20347DC11 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int result = WriteZStream(zStream, buffer, length);
		SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* L_0 = __this->___zStream_4;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_WriteZStream_mABC30B008A9739A8020632F0B4E506E4BE88667C(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// CheckResult(result, "WriteInternal");
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2(__this, L_4, _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F, NULL);
		// }
		return;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mEC47FA8621529D848F62FB3C4808EB964B199384 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* V_0 = NULL;
	bool V_1 = false;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (!(GCHandle.FromIntPtr(data).Target is DeflateStreamNative deflateStreamNative))
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF(L_0, NULL);
		V_2 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_2), NULL);
		V_0 = ((DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05_il2cpp_TypeInfo_var));
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_3 = V_0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// return -1;
		V_3 = (-1);
		goto IL_0030;
	}

IL_0025:
	{
		// return deflateStreamNative.UnmanagedRead(buffer, length);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_5 = V_0;
		intptr_t L_6 = ___buffer0;
		int32_t L_7 = ___length1;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = DeflateStreamNative_UnmanagedRead_m86EAA501632A47745D9A77A4B9D2519484510788(L_5, L_6, L_7, NULL);
		V_3 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_9 = V_3;
		return L_9;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m86EAA501632A47745D9A77A4B9D2519484510788 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int count = Math.Min(length, BufferSize);
		int32_t L_0 = ___length1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_0, ((int32_t)4096), NULL);
		V_0 = L_1;
	}
	try
	{// begin try (depth: 1)
		// num = baseStream.Read((byte*)buffer, 0, count);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_2 = __this->___baseStream_3;
		intptr_t L_3 = ___buffer0;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_3, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = FlexibleStream_Read_mAB9961E8FE04624FA0BC172FE9858B62DC3AFF96(L_2, (uint8_t*)L_4, 0, L_5, NULL);
		V_1 = L_6;
		goto IL_002c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Object)
		// catch
		// return -12;
		V_2 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0030;
	}// end catch (depth: 1)

IL_002c:
	{
		// return num;
		int32_t L_7 = V_1;
		V_2 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m4DCEDDED79DFBD1247A2FDEDC4F1E1690B1EC6A3 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* V_0 = NULL;
	bool V_1 = false;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (!(GCHandle.FromIntPtr(data).Target is DeflateStreamNative deflateStreamNative))
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF(L_0, NULL);
		V_2 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_2), NULL);
		V_0 = ((DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05_il2cpp_TypeInfo_var));
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_3 = V_0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// return -1;
		V_3 = (-1);
		goto IL_0030;
	}

IL_0025:
	{
		// return deflateStreamNative.UnmanagedWrite(buffer, length);
		DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* L_5 = V_0;
		intptr_t L_6 = ___buffer0;
		int32_t L_7 = ___length1;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = DeflateStreamNative_UnmanagedWrite_m6158CEF57BB86B6CE5E6F86C52C5782A24B21BDD(L_5, L_6, L_7, NULL);
		V_3 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_9 = V_3;
		return L_9;
	}
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m6158CEF57BB86B6CE5E6F86C52C5782A24B21BDD (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// baseStream.Write((byte*)buffer, 0, length);
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_0 = __this->___baseStream_3;
		intptr_t L_1 = ___buffer0;
		void* L_2;
		L_2 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_1, NULL);
		int32_t L_3 = ___length1;
		NullCheck(L_0);
		FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9(L_0, (uint8_t*)L_2, 0, L_3, NULL);
		// return length;
		int32_t L_4 = ___length1;
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2 (DeflateStreamNative_t0BBBCA039638F996D3805BBE9E55DCCD2595BB05* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass23_0_t894F3A6D4A485ECCBE48DEF7EF5C1BB2D8109469 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = ___result0;
		(&V_0)->___result_0 = L_0;
		// if (result >= 0)
		U3CU3Ec__DisplayClass23_0_t894F3A6D4A485ECCBE48DEF7EF5C1BB2D8109469 L_1 = V_0;
		int32_t L_2 = L_1.___result_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_004d;
	}

IL_001c:
	{
		// Exception ex = Interlocked.Exchange(ref lastError, null);
		Exception_t** L_4 = (&__this->___lastError_7);
		Exception_t* L_5;
		L_5 = InterlockedExchangeImpl<Exception_t*>(L_4, (Exception_t*)NULL);
		V_1 = L_5;
		// if (ex != null)
		Exception_t* L_6 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Exception_t*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// throw ex;
		Exception_t* L_8 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2_RuntimeMethod_var)));
	}

IL_0034:
	{
		// throw new IOException( R() + " " + where);
		String_t* L_9;
		L_9 = DeflateStreamNative_U3CCheckResultU3Eg__RU7C23_0_m1974AF9C34F75E5B885A642EDE9118A567DFB35D((&V_0), NULL);
		String_t* L_10 = ___where1;
		String_t* L_11;
		L_11 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_10, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_12 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9B9E617A672B3BE542DFB1D5AE7C271DCE4580C2_RuntimeMethod_var)));
	}

IL_004d:
	{
		// }
		return;
	}
}
// Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle Nino.Shared.IO.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* DeflateStreamNative_CreateZStream_m401B8C247011E86EA3ED9741D82F649F6F82EC4C (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (CDECL *PInvokeFunc) (int32_t, int32_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___feeder2' to native representation
	Il2CppMethodPointer ____feeder2_marshaled = NULL;
	____feeder2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___feeder2));

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(CreateZStream)(___compress0, static_cast<int32_t>(___gzip1), ____feeder2_marshaled, ___data3);

	// Marshaling of return value back from native representation
	SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* _returnValue_unmarshaled = (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803*)il2cpp_codegen_object_new(SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803_il2cpp_TypeInfo_var);
	SafeDeflateStreamHandle__ctor_mFBCCAC8FF1DF5C05FF9A95FB825E8BC1E8CE3429(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m8D822E40A9898B5DCC3F25F8CEBA765B0632A7D9 (intptr_t ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CloseZStream)(___stream0);

	return returnValue;
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::Flush(Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m6C92162F7AFD3ECD2B3B4BEB4362D2D1F4AC9E40 (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Flush)(____stream0_marshaled);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::ReadZStream(Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m8AC9F625DBB6FFD30A06EF3C70824C7DBD98271C (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ReadZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative::WriteZStream(Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_mABC30B008A9739A8020632F0B4E506E4BE88667C (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WriteZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.String Nino.Shared.IO.DeflateStreamNative::<CheckResult>g__R|23_0(Nino.Shared.IO.DeflateStreamNative/<>c__DisplayClass23_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeflateStreamNative_U3CCheckResultU3Eg__RU7C23_0_m1974AF9C34F75E5B885A642EDE9118A567DFB35D (U3CU3Ec__DisplayClass23_0_t894F3A6D4A485ECCBE48DEF7EF5C1BB2D8109469* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// switch(result)
		U3CU3Ec__DisplayClass23_0_t894F3A6D4A485ECCBE48DEF7EF5C1BB2D8109469* L_0 = p0;
		int32_t L_1 = L_0->___result_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)-11))))
		{
			case 0:
			{
				goto IL_0079;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0069;
			}
			case 6:
			{
				goto IL_0061;
			}
			case 7:
			{
				goto IL_0059;
			}
			case 8:
			{
				goto IL_0051;
			}
			case 9:
			{
				goto IL_0049;
			}
			case 10:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0081;
	}

IL_0041:
	{
		// return "Unknown error";
		V_2 = _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
		goto IL_0089;
	}

IL_0049:
	{
		// return "Internal error";
		V_2 = _stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163;
		goto IL_0089;
	}

IL_0051:
	{
		// return "Corrupted data";
		V_2 = _stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB;
		goto IL_0089;
	}

IL_0059:
	{
		// return "Not enough memory";
		V_2 = _stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41;
		goto IL_0089;
	}

IL_0061:
	{
		// return "Internal error (no progress possible)";
		V_2 = _stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D;
		goto IL_0089;
	}

IL_0069:
	{
		// return "Invalid version";
		V_2 = _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
		goto IL_0089;
	}

IL_0071:
	{
		// return "Invalid argument(s)";
		V_2 = _stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408;
		goto IL_0089;
	}

IL_0079:
	{
		// return "IO error";
		V_2 = _stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548;
		goto IL_0089;
	}

IL_0081:
	{
		// return "Unknown error";
		V_2 = _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
		goto IL_0089;
	}

IL_0089:
	{
		// }
		String_t* L_4 = V_2;
		return L_4;
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
int32_t UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_Multicast(UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* currentDelegate = reinterpret_cast<UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_OpenInst(UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_OpenStatic(UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_OpenStaticInvoker(UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buffer0, ___length1, ___data2);
}
int32_t UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_ClosedStaticInvoker(UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buffer0, ___length1, ___data2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131 (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buffer0, ___length1, ___data2);

	return returnValue;
}
// System.Void Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mD2D8A5AC847B3048A4DEE09258F52DBE19F1524A (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5_Multicast;
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedReadOrWrite_Invoke_mB176EF558F35943BD4981C5D95F01B84517EDEF5 (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnmanagedReadOrWrite_BeginInvoke_m78304BB2F60A650D0E504ADCC54AB83748307B9C (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___buffer0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___length1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___data2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Nino.Shared.IO.DeflateStreamNative/UnmanagedReadOrWrite::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedReadOrWrite_EndInvoke_m675D6F002E5DCB3DDF9DC4DF893CA0ECA94DAE3F (UnmanagedReadOrWrite_t51285E0F68D50657EA16801BD2D5DC08EAB9F131* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_get_IsInvalid_m78A5EDAEAFEE125A134FE5BD453241D8FA18CC84 (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsInvalid => handle == IntPtr.Zero;
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		return L_1;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mFBCCAC8FF1DF5C05FF9A95FB825E8BC1E8CE3429 (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(IntPtr.Zero, true)
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_m58124F8656FBB21332B36EC3DB4579F67BE9EAB9 (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		// : base(handle, true)
		intptr_t L_0 = ___handle0;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Nino.Shared.IO.DeflateStreamNative/SafeDeflateStreamHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_ReleaseHandle_m1206D32BBD34166FAB2031A66F972192484B00B4 (SafeDeflateStreamHandle_tCA2F700C663C09CCD865C6EECA7352BB481D3803* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// CloseZStream(handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		int32_t L_1;
		L_1 = DeflateStreamNative_CloseZStream_m8D822E40A9898B5DCC3F25F8CEBA765B0632A7D9(L_0, NULL);
		goto IL_0016;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(System.Object)
		// catch
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0016;
	}// end catch (depth: 1)

IL_0016:
	{
		// return true;
		V_0 = (bool)1;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
// System.Void Nino.Shared.IO.FlexibleStream::ChangeBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_ChangeBuffer_m09BEADE2182C02EA0CC0BE06A71B07D38E048308 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		// Reset();
		FlexibleStream_Reset_mA516175639BFDD579DE86080C89EF27577D3B689(__this, NULL);
		// internalBuffer = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		__this->___internalBuffer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalBuffer_4), (void*)L_0);
		// length = data.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		__this->___length_7 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// capacity = length;
		int32_t L_2 = __this->___length_7;
		__this->___capacity_8 = L_2;
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_Reset_mA516175639BFDD579DE86080C89EF27577D3B689 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	{
		// position = 0;
		__this->___position_6 = 0;
		// origin = 0;
		__this->___origin_5 = 0;
		// length = 0;
		__this->___length_7 = 0;
		// isOpen = true;
		__this->___isOpen_11 = (bool)1;
		// expandable = true;
		__this->___expandable_9 = (bool)1;
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream__ctor_m8DF3517939E7A373BE9F1478931497D159ABE11F (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FlexibleStream(): this(ConstMgr.Null)
		il2cpp_codegen_runtime_class_init_inline(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_StaticFields*)il2cpp_codegen_static_fields_for(ConstMgr_tF1A7F5E8DF3DDC29F1BDC8A4066F2E5C8A35FD55_il2cpp_TypeInfo_var))->___Null_1;
		FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___internalBuffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* G_B1_1 = NULL;
	{
		// private readonly uint maxLength = 2147483648;
		__this->___maxLength_12 = ((int32_t)-2147483648LL);
		// public FlexibleStream(byte[] internalBuffer)
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		// this.internalBuffer = internalBuffer ?? throw new ArgumentNullException(nameof(internalBuffer), "buffer == null");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___internalBuffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83E7A7D8CF7E1B966366C4730A2B294B57921217)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral657077AAA5067FE1724B8C2C594BA0E8549AEF0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream__ctor_m0955008987A878B35A8E4B1A15DBA2113EBF2EC1_RuntimeMethod_var)));
	}

IL_0029:
	{
		NullCheck(G_B2_1);
		G_B2_1->___internalBuffer_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___internalBuffer_4), (void*)G_B2_0);
		// length = capacity = internalBuffer.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___internalBuffer0;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		V_0 = L_4;
		__this->___capacity_8 = L_4;
		int32_t L_5 = V_0;
		__this->___length_7 = L_5;
		// exposable = true;
		__this->___exposable_10 = (bool)1;
		// expandable = true;
		__this->___expandable_9 = (bool)1;
		// isOpen = true;
		__this->___isOpen_11 = (bool)1;
		// origin = 0;
		__this->___origin_5 = 0;
		// }
		return;
	}
}
// System.Boolean Nino.Shared.IO.FlexibleStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleStream_get_CanRead_m9977C80249EC6DADCE32F0A774BA1246762A5DF2 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanRead => isOpen;
		bool L_0 = __this->___isOpen_11;
		return L_0;
	}
}
// System.Boolean Nino.Shared.IO.FlexibleStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleStream_get_CanSeek_mEC7661F3F3092729CB99060CE022D9BC621B2884 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanSeek => isOpen;
		bool L_0 = __this->___isOpen_11;
		return L_0;
	}
}
// System.Boolean Nino.Shared.IO.FlexibleStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleStream_get_CanWrite_m189D90C923538320AB32CE5E0E4AA86D8069F0C7 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanWrite => isOpen;
		bool L_0 = __this->___isOpen_11;
		return L_0;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_Dispose_m0DCEC9631543785F1E17D99DF8180C63D2A20E0D (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				// base.Dispose(disposing);
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (disposing)
				bool L_1 = ___disposing0;
				V_0 = L_1;
				bool L_2 = V_0;
				if (!L_2)
				{
					goto IL_0017_1;
				}
			}
			{
				// isOpen = false;
				__this->___isOpen_11 = (bool)0;
				// expandable = false;
				__this->___expandable_9 = (bool)0;
			}

IL_0017_1:
			{
				goto IL_0025;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Boolean Nino.Shared.IO.FlexibleStream::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B11_0 = 0;
	{
		// if (value < 0)
		int32_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new IOException("Stream too long, value < capacity of stream is invalid");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8482980BCAC9FE731DE3516F3F8FD93971225945)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (value > capacity)
		int32_t L_3 = ___value0;
		int32_t L_4 = __this->___capacity_8;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// int newCapacity = value;
		int32_t L_6 = ___value0;
		V_2 = L_6;
		// if (newCapacity < 256)
		int32_t L_7 = V_2;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// newCapacity = 256;
		V_2 = ((int32_t)256);
	}

IL_0036:
	{
		// if (newCapacity < capacity * 2)
		int32_t L_9 = V_2;
		int32_t L_10 = __this->___capacity_8;
		V_4 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_10, 2))))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		// newCapacity = capacity * 2;
		int32_t L_12 = __this->___capacity_8;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_12, 2));
	}

IL_0050:
	{
		// if ((uint)(capacity * 2) > maxLength)
		int32_t L_13 = __this->___capacity_8;
		uint32_t L_14 = __this->___maxLength_12;
		V_5 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_multiply(L_13, 2))) <= ((uint32_t)L_14)))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// newCapacity = value < maxLength ? value : (int)(maxLength / 2);
		int32_t L_16 = ___value0;
		uint32_t L_17 = __this->___maxLength_12;
		if ((((int64_t)((int64_t)L_16)) < ((int64_t)((int64_t)(uint64_t)L_17))))
		{
			goto IL_007b;
		}
	}
	{
		uint32_t L_18 = __this->___maxLength_12;
		G_B11_0 = ((int32_t)((uint32_t)(int32_t)L_18/(uint32_t)(int32_t)2));
		goto IL_007c;
	}

IL_007b:
	{
		int32_t L_19 = ___value0;
		G_B11_0 = L_19;
	}

IL_007c:
	{
		V_2 = G_B11_0;
	}

IL_007d:
	{
		// Capacity = newCapacity;
		int32_t L_20 = V_2;
		FlexibleStream_set_Capacity_mD697A656FB3B4E742D81F55FEEAE1E3ED8E6C4F0(__this, L_20, NULL);
		// return true;
		V_6 = (bool)1;
		goto IL_008f;
	}

IL_008a:
	{
		// return false;
		V_6 = (bool)0;
		goto IL_008f;
	}

IL_008f:
	{
		// }
		bool L_21 = V_6;
		return L_21;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_Flush_mDA58164241415FBEE6B2292530DE3A4A167A3B04 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Byte[] Nino.Shared.IO.FlexibleStream::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FlexibleStream_GetBuffer_m80AD9FFA7FBB95BC43083AF893DF0F9735960F2B (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (!exposable)
		bool L_0 = __this->___exposable_10;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new UnauthorizedAccessException("UnauthorizedAccess to get member buffer");
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_2 = (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral750AF247E170327CFECDB02B23AF71333977CE80)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_GetBuffer_m80AD9FFA7FBB95BC43083AF893DF0F9735960F2B_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return internalBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___internalBuffer_4;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Nino.Shared.IO.FlexibleStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleStream_TryGetBuffer_m644FA51591703966CF37381AA95B94A495EC14BA (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!exposable)
		bool L_0 = __this->___exposable_10;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// buffer = default(ArraySegment<byte>);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_2 = ___buffer0;
		il2cpp_codegen_initobj(L_2, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		// return false;
		V_1 = (bool)0;
		goto IL_0042;
	}

IL_001a:
	{
		// buffer = new ArraySegment<byte>(this.internalBuffer, offset: origin, count: (length - origin));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_3 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___internalBuffer_4;
		int32_t L_5 = __this->___origin_5;
		int32_t L_6 = __this->___length_7;
		int32_t L_7 = __this->___origin_5;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_8), L_4, L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_3)->____array_1), (void*)NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 Nino.Shared.IO.FlexibleStream::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleStream_get_Capacity_mD33C52F25FF9365FF59772B415C1DA4E69020076 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_0 = __this->___isOpen_11;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0019:
	{
		// return capacity - origin;
		int32_t L_2 = __this->___capacity_8;
		int32_t L_3 = __this->___origin_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		goto IL_0029;
	}

IL_0029:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_set_Capacity_mD697A656FB3B4E742D81F55FEEAE1E3ED8E6C4F0 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9368F3E20C1F0D81CFC05A20CCDB13D4C5D49511);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if (value < Length)
		int32_t L_0 = ___value0;
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, __this);
		V_0 = (bool)((((int64_t)((int64_t)L_0)) < ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(value), "value < capcacity is invalid");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE46175CB698B559BFB05A69EA06D5567E8EA40CC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_set_Capacity_mD697A656FB3B4E742D81F55FEEAE1E3ED8E6C4F0_RuntimeMethod_var)));
	}

IL_001f:
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_4 = __this->___isOpen_11;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0037:
	{
		// if (!expandable && (value != Capacity)) Logger.E("FlexibleStream is not expandable");
		bool L_6 = __this->___expandable_9;
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_7 = ___value0;
		int32_t L_8;
		L_8 = FlexibleStream_get_Capacity_mD33C52F25FF9365FF59772B415C1DA4E69020076(__this, NULL);
		G_B7_0 = ((((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B7_0 = 0;
	}

IL_004e:
	{
		V_2 = (bool)G_B7_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// if (!expandable && (value != Capacity)) Logger.E("FlexibleStream is not expandable");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral9368F3E20C1F0D81CFC05A20CCDB13D4C5D49511, NULL);
	}

IL_005d:
	{
		// if (expandable && value != capacity)
		bool L_10 = __this->___expandable_9;
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_11 = ___value0;
		int32_t L_12 = __this->___capacity_8;
		G_B12_0 = ((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B12_0 = 0;
	}

IL_0074:
	{
		V_3 = (bool)G_B12_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00cd;
		}
	}
	{
		// if (value > 0)
		int32_t L_14 = ___value0;
		V_4 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00bc;
		}
	}
	{
		// byte[] newBuffer = new byte[value];
		int32_t L_16 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_5 = L_17;
		// if (length > 0) Buffer.BlockCopy(internalBuffer, 0, newBuffer, 0, length);
		int32_t L_18 = __this->___length_7;
		V_6 = (bool)((((int32_t)L_18) > ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00b1;
		}
	}
	{
		// if (length > 0) Buffer.BlockCopy(internalBuffer, 0, newBuffer, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___internalBuffer_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_5;
		int32_t L_22 = __this->___length_7;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, 0, L_22, NULL);
	}

IL_00b1:
	{
		// internalBuffer = newBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_5;
		__this->___internalBuffer_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalBuffer_4), (void*)L_23);
		goto IL_00c5;
	}

IL_00bc:
	{
		// internalBuffer = null;
		__this->___internalBuffer_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalBuffer_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_00c5:
	{
		// capacity = value;
		int32_t L_24 = ___value0;
		__this->___capacity_8 = L_24;
	}

IL_00cd:
	{
		// }
		return;
	}
}
// System.Int64 Nino.Shared.IO.FlexibleStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlexibleStream_get_Length_m5BFC03869FC7D0D2E4DD7870DCBC704CEDF6B8C6 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_0 = __this->___isOpen_11;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0019:
	{
		// return length - origin;
		int32_t L_2 = __this->___length_7;
		int32_t L_3 = __this->___origin_5;
		V_1 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		goto IL_002a;
	}

IL_002a:
	{
		// }
		int64_t L_4 = V_1;
		return L_4;
	}
}
// System.Int64 Nino.Shared.IO.FlexibleStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlexibleStream_get_Position_m40ECADAE5CA975D8D4D44E1B15A9035D671A31F8 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_0 = __this->___isOpen_11;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0019:
	{
		// return position - origin;
		int32_t L_2 = __this->___position_6;
		int32_t L_3 = __this->___origin_5;
		V_1 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		goto IL_002a;
	}

IL_002a:
	{
		// }
		int64_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_set_Position_m5A52CBCA555020455DD06FC89DDADEF0C16D881E (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (value < 0)
		int64_t L_0 = ___value0;
		V_0 = (bool)((((int64_t)L_0) < ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(value), "value < 0 is invalid");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB7D84BC3C90F349117D6F4100F358B896400FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_set_Position_m5A52CBCA555020455DD06FC89DDADEF0C16D881E_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_3 = __this->___isOpen_11;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0032:
	{
		// if (value > MemStreamMaxLength)
		int64_t L_5 = ___value0;
		V_2 = (bool)((((int64_t)L_5) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(value), "value > stream length is invalid");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9942CCD703E935161FA1380844C0F159BF64D1D9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_set_Position_m5A52CBCA555020455DD06FC89DDADEF0C16D881E_RuntimeMethod_var)));
	}

IL_004f:
	{
		// position = origin + (int)value;
		int32_t L_8 = __this->___origin_5;
		int64_t L_9 = ___value0;
		__this->___position_6 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)L_9)));
		// }
		return;
	}
}
// System.Int32 Nino.Shared.IO.FlexibleStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleStream_ReadByte_mFC0A4C98540CD852C69D22B13AEC9E3A1A44C8DB (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_0 = __this->___isOpen_11;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0019:
	{
		// if (position >= length) return -1;
		int32_t L_2 = __this->___position_6;
		int32_t L_3 = __this->___length_7;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (position >= length) return -1;
		V_2 = (-1);
		goto IL_004d;
	}

IL_0032:
	{
		// return internalBuffer[position++];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___internalBuffer_4;
		int32_t L_6 = __this->___position_6;
		V_3 = L_6;
		int32_t L_7 = V_3;
		__this->___position_6 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_3;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		int32_t L_11 = V_2;
		return L_11;
	}
}
// System.Int32 Nino.Shared.IO.FlexibleStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleStream_Read_m343FA5C6E18CD7F3545970B5CDE3DFB2524CA415 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(buffer), "buffer == null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral657077AAA5067FE1724B8C2C594BA0E8549AEF0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Read_m343FA5C6E18CD7F3545970B5CDE3DFB2524CA415_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (offset < 0)
		int32_t L_3 = ___offset1;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset), "offset < 0");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6A7127E5787A7B54E2108BF8B31ABC7480250A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Read_m343FA5C6E18CD7F3545970B5CDE3DFB2524CA415_RuntimeMethod_var)));
	}

IL_0031:
	{
		// if (count < 0)
		int32_t L_6 = ___count2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(count), "count < 0");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBEB17699EF324D4A48BB4C3E5AAD55C872328BA8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Read_m343FA5C6E18CD7F3545970B5CDE3DFB2524CA415_RuntimeMethod_var)));
	}

IL_0049:
	{
		// if (buffer.Length - offset < count)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer0;
		NullCheck(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		// throw new ArgumentException("invalid buffer length");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE346190681BC32736373A919BC84C5142A8E8D00)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Read_m343FA5C6E18CD7F3545970B5CDE3DFB2524CA415_RuntimeMethod_var)));
	}

IL_0062:
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_14 = __this->___isOpen_11;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_007c:
	{
		// int n = length - position;
		int32_t L_16 = __this->___length_7;
		int32_t L_17 = __this->___position_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		// if (n > count) n = count;
		int32_t L_18 = V_0;
		int32_t L_19 = ___count2;
		V_6 = (bool)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0096;
		}
	}
	{
		// if (n > count) n = count;
		int32_t L_21 = ___count2;
		V_0 = L_21;
	}

IL_0096:
	{
		// if (n <= 0)
		int32_t L_22 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		// return 0;
		V_8 = 0;
		goto IL_010f;
	}

IL_00a8:
	{
		// if (n <= 8)
		int32_t L_24 = V_0;
		V_9 = (bool)((((int32_t)((((int32_t)L_24) > ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00e7;
		}
	}
	{
		// int byteCount = n;
		int32_t L_26 = V_0;
		V_10 = L_26;
		goto IL_00d1;
	}

IL_00bb:
	{
		// buffer[offset + byteCount] = this.internalBuffer[position + byteCount];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___buffer0;
		int32_t L_28 = ___offset1;
		int32_t L_29 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___internalBuffer_4;
		int32_t L_31 = __this->___position_6;
		int32_t L_32 = V_10;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, L_29))), (uint8_t)L_34);
	}

IL_00d1:
	{
		// while (--byteCount >= 0)
		int32_t L_35 = V_10;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		V_10 = L_36;
		V_11 = (bool)((((int32_t)((((int32_t)L_36) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_11;
		if (L_37)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00fc;
	}

IL_00e7:
	{
		// Buffer.BlockCopy(this.internalBuffer, position, buffer, offset, n);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___internalBuffer_4;
		int32_t L_39 = __this->___position_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___buffer0;
		int32_t L_41 = ___offset1;
		int32_t L_42 = V_0;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_38, L_39, (RuntimeArray*)L_40, L_41, L_42, NULL);
	}

IL_00fc:
	{
		// position += n;
		int32_t L_43 = __this->___position_6;
		int32_t L_44 = V_0;
		__this->___position_6 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		// return n;
		int32_t L_45 = V_0;
		V_8 = L_45;
		goto IL_010f;
	}

IL_010f:
	{
		// }
		int32_t L_46 = V_8;
		return L_46;
	}
}
// System.Int32 Nino.Shared.IO.FlexibleStream::Read(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleStream_Read_mAB9961E8FE04624FA0BC172FE9858B62DC3AFF96 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, uint8_t* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint8_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_0 = __this->___isOpen_11;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0019:
	{
		// int n = length - position;
		int32_t L_2 = __this->___length_7;
		int32_t L_3 = __this->___position_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// if (n > count) n = count;
		int32_t L_4 = V_0;
		int32_t L_5 = ___count2;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// if (n > count) n = count;
		int32_t L_7 = ___count2;
		V_0 = L_7;
	}

IL_0031:
	{
		// if (n <= 0)
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		// return 0;
		V_4 = 0;
		goto IL_0091;
	}

IL_0041:
	{
		// fixed (byte* internalPtr = internalBuffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___internalBuffer_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		V_6 = L_11;
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_6;
		NullCheck(L_12);
		if (((int32_t)(((RuntimeArray*)L_12)->max_length)))
		{
			goto IL_0058;
		}
	}

IL_0052:
	{
		V_5 = (uint8_t*)((uintptr_t)0);
		goto IL_0063;
	}

IL_0058:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_6;
		NullCheck(L_13);
		V_5 = (uint8_t*)((uintptr_t)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0063:
	{
		// Buffer.MemoryCopy(internalPtr + position, buffer + offset, count,n);
		uint8_t* L_14 = V_5;
		int32_t L_15 = __this->___position_6;
		uint8_t* L_16 = ___buffer0;
		int32_t L_17 = ___offset1;
		int32_t L_18 = ___count2;
		int32_t L_19 = V_0;
		Buffer_MemoryCopy_mF94BFB19AA8A06BD47F4EA68F95B5A9EBE8E6277((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, L_15)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, L_17)), ((int64_t)L_18), ((int64_t)L_19), NULL);
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// position += n;
		int32_t L_20 = __this->___position_6;
		int32_t L_21 = V_0;
		__this->___position_6 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		// return n;
		int32_t L_22 = V_0;
		V_4 = L_22;
		goto IL_0091;
	}

IL_0091:
	{
		// }
		int32_t L_23 = V_4;
		return L_23;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_WriteByte_m5278A101FB3D1456502E525FE2E2AAA7AD42A885 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		// if (!isOpen)
		bool L_0 = __this->___isOpen_11;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("this stream is closed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31C53F202B67119D22AC507AAE892587165F9D66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_WriteByte_m5278A101FB3D1456502E525FE2E2AAA7AD42A885_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (position >= length) {
		int32_t L_3 = __this->___position_6;
		int32_t L_4 = __this->___length_7;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_009c;
		}
	}
	{
		// int newLength = position + 1;
		int32_t L_6 = __this->___position_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// bool mustZero = position > length;
		int32_t L_7 = __this->___position_6;
		int32_t L_8 = __this->___length_7;
		V_3 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		// if (newLength >= capacity) {
		int32_t L_9 = V_2;
		int32_t L_10 = __this->___capacity_8;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		// bool allocatedNewArray = EnsureCapacity(newLength);
		int32_t L_12 = V_2;
		bool L_13;
		L_13 = FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED(__this, L_12, NULL);
		V_5 = L_13;
		// if (allocatedNewArray)
		bool L_14 = V_5;
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		// mustZero = false;
		V_3 = (bool)0;
	}

IL_006d:
	{
	}

IL_006e:
	{
		// if (mustZero)
		bool L_16 = V_3;
		V_7 = L_16;
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		// Array.Clear(internalBuffer, length, position - length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___internalBuffer_4;
		int32_t L_19 = __this->___length_7;
		int32_t L_20 = __this->___position_6;
		int32_t L_21 = __this->___length_7;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0094:
	{
		// length = newLength;
		int32_t L_22 = V_2;
		__this->___length_7 = L_22;
	}

IL_009c:
	{
		// internalBuffer[position++] = value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___internalBuffer_4;
		int32_t L_24 = __this->___position_6;
		V_8 = L_24;
		int32_t L_25 = V_8;
		__this->___position_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_8;
		uint8_t L_27 = ___value0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (uint8_t)L_27);
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t G_B23_0 = 0;
	{
		// if (buffer==null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(buffer),"null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (offset < 0)
		int32_t L_3 = ___offset1;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset), "cannot be negative");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA_RuntimeMethod_var)));
	}

IL_0031:
	{
		// if (count < 0)
		int32_t L_6 = ___count2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(count),"cannot be negative");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA_RuntimeMethod_var)));
	}

IL_0049:
	{
		// if (buffer.Length - offset < count)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer0;
		NullCheck(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		// throw new ArgumentException("invalid length");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07702D5F5969B544D214EA9E9468070CF19EA4BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA_RuntimeMethod_var)));
	}

IL_0062:
	{
		// if (!isOpen)
		bool L_14 = __this->___isOpen_11;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// throw new InvalidOperationException("this stream is closed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31C53F202B67119D22AC507AAE892587165F9D66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA_RuntimeMethod_var)));
	}

IL_007c:
	{
		// int i = position + count;
		int32_t L_17 = __this->___position_6;
		int32_t L_18 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		// if (i < 0)
		int32_t L_19 = V_0;
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		// throw new IOException("Stream Too Long");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_21 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44D061897625DA0245637E66BA8370C7473BE825)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m6702486B1B6C4A17DF6884D40E19CC1E086C59AA_RuntimeMethod_var)));
	}

IL_009a:
	{
		// if (i > length) {
		int32_t L_22 = V_0;
		int32_t L_23 = __this->___length_7;
		V_7 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_0109;
		}
	}
	{
		// bool mustZero = position > length;
		int32_t L_25 = __this->___position_6;
		int32_t L_26 = __this->___length_7;
		V_8 = (bool)((((int32_t)L_25) > ((int32_t)L_26))? 1 : 0);
		// if (i > capacity) {
		int32_t L_27 = V_0;
		int32_t L_28 = __this->___capacity_8;
		V_9 = (bool)((((int32_t)L_27) > ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00df;
		}
	}
	{
		// bool allocatedNewArray = EnsureCapacity(i);
		int32_t L_30 = V_0;
		bool L_31;
		L_31 = FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED(__this, L_30, NULL);
		V_10 = L_31;
		// if (allocatedNewArray)
		bool L_32 = V_10;
		V_11 = L_32;
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00de;
		}
	}
	{
		// mustZero = false;
		V_8 = (bool)0;
	}

IL_00de:
	{
	}

IL_00df:
	{
		// if (mustZero)
		bool L_34 = V_8;
		V_12 = L_34;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0101;
		}
	}
	{
		// Array.Clear(internalBuffer, length, i - length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___internalBuffer_4;
		int32_t L_37 = __this->___length_7;
		int32_t L_38 = V_0;
		int32_t L_39 = __this->___length_7;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_36, L_37, ((int32_t)il2cpp_codegen_subtract(L_38, L_39)), NULL);
	}

IL_0101:
	{
		// length = i;
		int32_t L_40 = V_0;
		__this->___length_7 = L_40;
	}

IL_0109:
	{
		// if ((count <= 8) && (buffer != internalBuffer))
		int32_t L_41 = ___count2;
		if ((((int32_t)L_41) > ((int32_t)8)))
		{
			goto IL_011b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___internalBuffer_4;
		G_B23_0 = ((((int32_t)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_42) == ((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011c;
	}

IL_011b:
	{
		G_B23_0 = 0;
	}

IL_011c:
	{
		V_13 = (bool)G_B23_0;
		bool L_44 = V_13;
		if (!L_44)
		{
			goto IL_0154;
		}
	}
	{
		// int byteCount = count;
		int32_t L_45 = ___count2;
		V_14 = L_45;
		goto IL_013e;
	}

IL_0128:
	{
		// internalBuffer[position + byteCount] = buffer[offset + byteCount];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___internalBuffer_4;
		int32_t L_47 = __this->___position_6;
		int32_t L_48 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___buffer0;
		int32_t L_50 = ___offset1;
		int32_t L_51 = V_14;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_50, L_51));
		uint8_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, L_48))), (uint8_t)L_53);
	}

IL_013e:
	{
		// while (--byteCount >= 0)
		int32_t L_54 = V_14;
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		V_14 = L_55;
		V_15 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_15;
		if (L_56)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0169;
	}

IL_0154:
	{
		// Buffer.BlockCopy(buffer, offset, internalBuffer, position, count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___buffer0;
		int32_t L_58 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->___internalBuffer_4;
		int32_t L_60 = __this->___position_6;
		int32_t L_61 = ___count2;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_57, L_58, (RuntimeArray*)L_59, L_60, L_61, NULL);
	}

IL_0169:
	{
		// position = i;
		int32_t L_62 = V_0;
		__this->___position_6 = L_62;
		// }
		return;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::Write(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, uint8_t* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	uint8_t* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	{
		// if (buffer==null)
		uint8_t* L_0 = ___buffer0;
		V_1 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new ArgumentNullException(nameof(buffer),"null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (offset < 0)
		int32_t L_3 = ___offset1;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset), "cannot be negative");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9_RuntimeMethod_var)));
	}

IL_0032:
	{
		// if (count < 0)
		int32_t L_6 = ___count2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(count),"cannot be negative");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9_RuntimeMethod_var)));
	}

IL_004a:
	{
		// if (!isOpen)
		bool L_9 = __this->___isOpen_11;
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// throw new InvalidOperationException("this stream is closed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31C53F202B67119D22AC507AAE892587165F9D66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9_RuntimeMethod_var)));
	}

IL_0064:
	{
		// int i = position + count;
		int32_t L_12 = __this->___position_6;
		int32_t L_13 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		// if (i < 0)
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		// throw new IOException("Stream Too Long");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_16 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44D061897625DA0245637E66BA8370C7473BE825)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Write_m7AF052C23CEE3FBE2E7A25A35E7D41C78B60A1E9_RuntimeMethod_var)));
	}

IL_0082:
	{
		// if (i > length) {
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___length_7;
		V_6 = (bool)((((int32_t)L_17) > ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00f1;
		}
	}
	{
		// bool mustZero = position > length;
		int32_t L_20 = __this->___position_6;
		int32_t L_21 = __this->___length_7;
		V_7 = (bool)((((int32_t)L_20) > ((int32_t)L_21))? 1 : 0);
		// if (i > capacity) {
		int32_t L_22 = V_0;
		int32_t L_23 = __this->___capacity_8;
		V_8 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00c7;
		}
	}
	{
		// bool allocatedNewArray = EnsureCapacity(i);
		int32_t L_25 = V_0;
		bool L_26;
		L_26 = FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED(__this, L_25, NULL);
		V_9 = L_26;
		// if (allocatedNewArray)
		bool L_27 = V_9;
		V_10 = L_27;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_00c6;
		}
	}
	{
		// mustZero = false;
		V_7 = (bool)0;
	}

IL_00c6:
	{
	}

IL_00c7:
	{
		// if (mustZero)
		bool L_29 = V_7;
		V_11 = L_29;
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_00e9;
		}
	}
	{
		// Array.Clear(internalBuffer, length, i - length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___internalBuffer_4;
		int32_t L_32 = __this->___length_7;
		int32_t L_33 = V_0;
		int32_t L_34 = __this->___length_7;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_31, L_32, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}

IL_00e9:
	{
		// length = i;
		int32_t L_35 = V_0;
		__this->___length_7 = L_35;
	}

IL_00f1:
	{
		// fixed (byte* internalPtr = internalBuffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___internalBuffer_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36;
		V_13 = L_37;
		if (!L_37)
		{
			goto IL_0102;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_13;
		NullCheck(L_38);
		if (((int32_t)(((RuntimeArray*)L_38)->max_length)))
		{
			goto IL_0108;
		}
	}

IL_0102:
	{
		V_12 = (uint8_t*)((uintptr_t)0);
		goto IL_0113;
	}

IL_0108:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_13;
		NullCheck(L_39);
		V_12 = (uint8_t*)((uintptr_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0113:
	{
		// Buffer.MemoryCopy(buffer + offset, internalPtr + position, count, count);
		uint8_t* L_40 = ___buffer0;
		int32_t L_41 = ___offset1;
		uint8_t* L_42 = V_12;
		int32_t L_43 = __this->___position_6;
		int32_t L_44 = ___count2;
		int32_t L_45 = ___count2;
		Buffer_MemoryCopy_mF94BFB19AA8A06BD47F4EA68F95B5A9EBE8E6277((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, L_41)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, L_43)), ((int64_t)L_44), ((int64_t)L_45), NULL);
		V_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// position = i;
		int32_t L_46 = V_0;
		__this->___position_6 = L_46;
		// }
		return;
	}
}
// System.Int64 Nino.Shared.IO.FlexibleStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlexibleStream_Seek_m8F3499DE0A7FF3F170C8070EF59D07B5F2DF086E (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, int64_t ___offset0, int32_t ___loc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int64_t V_10 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// if (!isOpen) Logger.E("stream is closed");
		bool L_0 = __this->___isOpen_11;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!isOpen) Logger.E("stream is closed");
		Logger_E_m6915887B5D39E8174DE867CB9D74E12CA05EFC94(_stringLiteral2BBA9043EADD639987568FEFCD9DAF933B954F27, NULL);
	}

IL_0019:
	{
		// if (offset > MemStreamMaxLength)
		int64_t L_2 = ___offset0;
		V_1 = (bool)((((int64_t)L_2) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset), "offset > stream length is invalid");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE88896FEC103CD29973D839C81ADBFC150CFA41)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Seek_m8F3499DE0A7FF3F170C8070EF59D07B5F2DF086E_RuntimeMethod_var)));
	}

IL_0036:
	{
		// switch (loc)
		int32_t L_5 = ___loc1;
		V_3 = L_5;
		int32_t L_6 = V_3;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_0119;
	}

IL_0051:
	{
		// int tempPosition = unchecked(origin + (int)offset);
		int32_t L_8 = __this->___origin_5;
		int64_t L_9 = ___offset0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)L_9)));
		// if (offset < 0 || tempPosition < origin)
		int64_t L_10 = ___offset0;
		if ((((int64_t)L_10) < ((int64_t)((int64_t)0))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_11 = V_4;
		int32_t L_12 = __this->___origin_5;
		G_B9_0 = ((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B9_0 = 1;
	}

IL_006f:
	{
		V_5 = (bool)G_B9_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// throw new IOException("offset < 0 from the beginning of stream is invalid");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_14 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40B3106E8D65A9AFED8EFCECC655597DF4514316)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Seek_m8F3499DE0A7FF3F170C8070EF59D07B5F2DF086E_RuntimeMethod_var)));
	}

IL_0080:
	{
		// position = tempPosition;
		int32_t L_15 = V_4;
		__this->___position_6 = L_15;
		// break;
		goto IL_0124;
	}

IL_008d:
	{
		// int tempPosition = unchecked(position + (int)offset);
		int32_t L_16 = __this->___position_6;
		int64_t L_17 = ___offset0;
		V_6 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)L_17)));
		// if (unchecked(position + offset) < origin || tempPosition < origin)
		int32_t L_18 = __this->___position_6;
		int64_t L_19 = ___offset0;
		int32_t L_20 = __this->___origin_5;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)L_18), L_19))) < ((int64_t)((int64_t)L_20))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_21 = V_6;
		int32_t L_22 = __this->___origin_5;
		G_B15_0 = ((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B15_0 = 1;
	}

IL_00b8:
	{
		V_7 = (bool)G_B15_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00c9;
		}
	}
	{
		// throw new IOException("offset is before the stream which is invalid");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_24 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE04815E8A9DB8CC5111396684998019EC9A834C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Seek_m8F3499DE0A7FF3F170C8070EF59D07B5F2DF086E_RuntimeMethod_var)));
	}

IL_00c9:
	{
		// position = tempPosition;
		int32_t L_25 = V_6;
		__this->___position_6 = L_25;
		// break;
		goto IL_0124;
	}

IL_00d3:
	{
		// int tempPosition = unchecked(length + (int)offset);
		int32_t L_26 = __this->___length_7;
		int64_t L_27 = ___offset0;
		V_8 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)L_27)));
		// if (unchecked(length + offset) < origin || tempPosition < origin)
		int32_t L_28 = __this->___length_7;
		int64_t L_29 = ___offset0;
		int32_t L_30 = __this->___origin_5;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)L_28), L_29))) < ((int64_t)((int64_t)L_30))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_31 = V_8;
		int32_t L_32 = __this->___origin_5;
		G_B21_0 = ((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B21_0 = 1;
	}

IL_00fe:
	{
		V_9 = (bool)G_B21_0;
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_010f;
		}
	}
	{
		// throw new IOException("offset is before the stream which is invalid");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_34 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE04815E8A9DB8CC5111396684998019EC9A834C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Seek_m8F3499DE0A7FF3F170C8070EF59D07B5F2DF086E_RuntimeMethod_var)));
	}

IL_010f:
	{
		// position = tempPosition;
		int32_t L_35 = V_8;
		__this->___position_6 = L_35;
		// break;
		goto IL_0124;
	}

IL_0119:
	{
		// throw new ArgumentException("invalid seek origin");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13CC24095DC438E015CCDE6A713B03FF64343A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_Seek_m8F3499DE0A7FF3F170C8070EF59D07B5F2DF086E_RuntimeMethod_var)));
	}

IL_0124:
	{
		// return position;
		int32_t L_37 = __this->___position_6;
		V_10 = ((int64_t)L_37);
		goto IL_012f;
	}

IL_012f:
	{
		// }
		int64_t L_38 = V_10;
		return L_38;
	}
}
// System.Void Nino.Shared.IO.FlexibleStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleStream_SetLength_m75F1216867BBF4FB19B533114B87F70A2CE8D745 (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (value < 0 || value > Int32.MaxValue)
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_1 = ___value0;
		G_B3_0 = ((((int64_t)L_1) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(value), "value does not fit the length (out of range)");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C85FFE5902E6E4DE2B24B994E3F2BE85344A417)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_SetLength_m75F1216867BBF4FB19B533114B87F70A2CE8D745_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (value > (Int32.MaxValue - origin))
		int64_t L_4 = ___value0;
		int32_t L_5 = __this->___origin_5;
		V_3 = (bool)((((int64_t)L_4) > ((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2147483647LL), L_5)))))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(value), "value is too big");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF44D04766D2C00AF1E5362E916202DC9ADCDDBF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleStream_SetLength_m75F1216867BBF4FB19B533114B87F70A2CE8D745_RuntimeMethod_var)));
	}

IL_004c:
	{
		// int newLength = origin + (int)value;
		int32_t L_8 = __this->___origin_5;
		int64_t L_9 = ___value0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)L_9)));
		// bool allocatedNewArray = EnsureCapacity(newLength);
		int32_t L_10 = V_0;
		bool L_11;
		L_11 = FlexibleStream_EnsureCapacity_mEB3264F48BC089082FF0D5607A1D080637B46CED(__this, L_10, NULL);
		V_1 = L_11;
		// if (!allocatedNewArray && newLength > length)
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___length_7;
		G_B10_0 = ((((int32_t)L_13) > ((int32_t)L_14))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B10_0 = 0;
	}

IL_006d:
	{
		V_4 = (bool)G_B10_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		// Array.Clear(internalBuffer, length, newLength - length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___internalBuffer_4;
		int32_t L_17 = __this->___length_7;
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___length_7;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_16, L_17, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), NULL);
	}

IL_008d:
	{
		// length = newLength;
		int32_t L_20 = V_0;
		__this->___length_7 = L_20;
		// if (position > newLength) position = newLength;
		int32_t L_21 = __this->___position_6;
		int32_t L_22 = V_0;
		V_5 = (bool)((((int32_t)L_21) > ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00aa;
		}
	}
	{
		// if (position > newLength) position = newLength;
		int32_t L_24 = V_0;
		__this->___position_6 = L_24;
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Byte[] Nino.Shared.IO.FlexibleStream::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FlexibleStream_ToArray_m75D6448904FD5A1E3830E7998AEEFE162B209B1C (FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// byte[] copy = new byte[length - origin];
		int32_t L_0 = __this->___length_7;
		int32_t L_1 = __this->___origin_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1)));
		V_0 = L_2;
		// Buffer.BlockCopy(internalBuffer, origin, copy, 0, length - origin);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___internalBuffer_4;
		int32_t L_4 = __this->___origin_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = __this->___length_7;
		int32_t L_7 = __this->___origin_5;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		// return copy;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* DeflateStream_get_BaseStream_m0B695A753C090EE76973473BFA02C9A96EF91CD3_inline (DeflateStream_tC5E7D012B4A5079041988F62B557FDB7A5AF5C52* __this, const RuntimeMethod* method) 
{
	{
		// public FlexibleStream BaseStream => baseStream;
		FlexibleStream_t816E1696A4C3C9B556A498990A4D18330A7D1DC5* L_0 = __this->___baseStream_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UncheckedStack_1_get_Count_m37B4195279FE17B0C87283745DDA7167B06157D3_gshared_inline (UncheckedStack_1_t33B019863D837D04023FDDA004735FAB9462BBD0* __this, const RuntimeMethod* method) 
{
	{
		// public int Count => _size;
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ExtensibleBuffer_1_get_Data_mE6EFD4655F191D989130C266B95C5E2A53E9847B_gshared_inline (ExtensibleBuffer_1_tFCC9BD248720975A51FDEB6E956C3D7E109B0D73* __this, const RuntimeMethod* method) 
{
	{
		// public T* Data { get; private set; }
		uint8_t* L_0 = (uint8_t*)__this->___U3CDataU3Ek__BackingField_1;
		return L_0;
	}
}
