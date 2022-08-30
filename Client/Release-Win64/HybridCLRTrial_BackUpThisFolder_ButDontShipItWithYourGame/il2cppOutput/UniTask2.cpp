#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Reflection.ParameterInfo,System.String>
struct Func_2_tDE706B5F87BEAD2AAD875E35CECC6843A16ED557;
// System.Func`2<System.Type,System.String>
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds>
struct IEqualityComparer_1_t06C346ACFCD6FA7B6357E6392FA8842A209C66E7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt>
struct IEqualityComparer_1_t2EDEDBAF19E8BF7F3EA065CC1D0D3578B4A90052;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color>
struct IEqualityComparer_1_t77537F328C44F595A172667E303D57CCA306F54D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32>
struct IEqualityComparer_1_tE5166E96F3B07686A8D0875FE3BF15DC56FED779;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion>
struct IEqualityComparer_1_tC69064DA61A5BCF7B3EA5F0B53979229260D3DCB;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt>
struct IEqualityComparer_1_t7E98D8AD41D5E0E35D1CFF51C260ABD2A500B2F3;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect>
struct IEqualityComparer_1_tFC2ABE854EE94E6C4917178A3A4652222F165E32;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt>
struct IEqualityComparer_1_tDC8906B8491813B2FB353E856B89603200C3255B;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>
struct IEqualityComparer_1_t1FADF29047F4FD7955E0951D880F1D3D8CBDD4B1;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int>
struct IEqualityComparer_1_t4275A3D7B86C2D3C66842AB0700881FB24837F2D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>
struct IEqualityComparer_1_t9E98CD5E012FAD3C745699045489B5B858B1B8B5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int>
struct IEqualityComparer_1_tC53A6B5E00FD0034DDB9D7A2B505C1E784820A60;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4>
struct IEqualityComparer_1_t5442E8A434F2EE43566F33724D3E6C43B4737A72;
// Cysharp.Threading.Tasks.Internal.MinimumQueue`1<Cysharp.Threading.Tasks.IPlayerLoopItem>
struct MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA;
// Cysharp.Threading.Tasks.Internal.MinimumQueue`1<System.Object>
struct MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Cysharp.Threading.Tasks.IPlayerLoopItem[]
struct IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// Cysharp.Threading.Tasks.Internal.EmptyDisposable
struct EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// Cysharp.Threading.Tasks.IPlayerLoopItem
struct IPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// Cysharp.Threading.Tasks.Internal.PlayerLoopRunner
struct PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable
struct SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c
struct U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D;
// Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c
struct U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273;
// Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c
struct U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer
struct BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer
struct BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer
struct Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer
struct ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer
struct QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer
struct RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer
struct RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer
struct RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer
struct Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer
struct Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer
struct Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer
struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer
struct Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsExtensions_t2E8E9DE173C53F2794D8E37806A23C31AB26A4BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral55CAB524459EBE11B81C4E5F0FDDD1A36A98C71B;
IL2CPP_EXTERN_C String_t* _stringLiteral92337B5613A918335D00B3CDAFAC0C5BA45E46DC;
IL2CPP_EXTERN_C String_t* _stringLiteralC282D0727A5AEF94368AE281960FC490CF059B30;
IL2CPP_EXTERN_C String_t* _stringLiteralCA580C0B89C7CCB3DC3A2EF1DAAA8D4C2DF539CF;
IL2CPP_EXTERN_C String_t* _stringLiteralE451574BD6072D966A96174174834C5304D10BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisFieldInfo_t_mF075F088C2A79FB7726777E3E97563B7701C3481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Error_ThrowArgumentNullExceptionCore_mE97A48AD5866158A616CF27AC9BD544EE3B32943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Error_ThrowInvalidOperationExceptionCore_mD392C1C9DD0B0E27B0B7D4B5EDA796EE06B1C4AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Error_ThrowNotYetCompleted_m477CF8A65FC9B0A07ED78CBFD24FE5F70E4F51AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Error_ThrowOperationCanceledException_mD5623CCB5A80B073EEC514A377CE2DA93B8522BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumQueue_1_Dequeue_mD4B53FBA2B6B15FBF3FBC9769AF16D7385429BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumQueue_1_Enqueue_mDD00C61C305E174BBC4C85B9B1E75ADCCBE1DCE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumQueue_1__ctor_m02020B42F235388C76C31BA1B23B81BB3CE5E2B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumQueue_1_get_Count_m73E2FA8D3ED67682665ECD18BA620E926D9BFBD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerLoopRunner_AddAction_mC0968BDEF4B70D3CBF59AF574D87DDB51982236D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleAssignmentDisposable_set_Disposable_m47E3E5D9584661A7C67BE8DD02B784D30680909B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetStateU3Eb__0_0_m11816848E5A6598D044739D671ECF2189BD8E994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__9_0_m7FD5E476CB2AB74C2AA83C5A0A68796DF976B7A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Guid_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cysharp.Threading.Tasks.Internal.MinimumQueue`1<Cysharp.Threading.Tasks.IPlayerLoopItem>
struct MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA  : public RuntimeObject
{
	// T[] Cysharp.Threading.Tasks.Internal.MinimumQueue`1::array
	IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* ___array_2;
	// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1::head
	int32_t ___head_3;
	// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1::tail
	int32_t ___tail_4;
	// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1::size
	int32_t ___size_5;
};

// Cysharp.Threading.Tasks.Internal.MinimumQueue`1<System.Object>
struct MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433  : public RuntimeObject
{
	// T[] Cysharp.Threading.Tasks.Internal.MinimumQueue`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_2;
	// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1::head
	int32_t ___head_3;
	// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1::tail
	int32_t ___tail_4;
	// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1::size
	int32_t ___size_5;
};
struct Il2CppArrayBounds;

// Cysharp.Threading.Tasks.Internal.EmptyDisposable
struct EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25  : public RuntimeObject
{
};

struct EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_StaticFields
{
	// Cysharp.Threading.Tasks.Internal.EmptyDisposable Cysharp.Threading.Tasks.Internal.EmptyDisposable::Instance
	EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25* ___Instance_0;
};

// Cysharp.Threading.Tasks.Internal.Error
struct Error_t9B79E1358AF150DB34BA79B7F4B3F28723C513FD  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Cysharp.Threading.Tasks.Internal.PlayerLoopRunner
struct PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::timing
	int32_t ___timing_1;
	// System.Object Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::runningAndQueueLock
	RuntimeObject* ___runningAndQueueLock_2;
	// System.Object Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::arrayLock
	RuntimeObject* ___arrayLock_3;
	// System.Action`1<System.Exception> Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::unhandledExceptionCallback
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___unhandledExceptionCallback_4;
	// System.Int32 Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::tail
	int32_t ___tail_5;
	// System.Boolean Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::running
	bool ___running_6;
	// Cysharp.Threading.Tasks.IPlayerLoopItem[] Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::loopItems
	IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* ___loopItems_7;
	// Cysharp.Threading.Tasks.Internal.MinimumQueue`1<Cysharp.Threading.Tasks.IPlayerLoopItem> Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::waitQueue
	MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* ___waitQueue_8;
};

// Cysharp.Threading.Tasks.Internal.RuntimeHelpersAbstraction
struct RuntimeHelpersAbstraction_t3117D571DAE347273219E4BCBA11FA7E77784AC2  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable
struct SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A  : public RuntimeObject
{
	// System.Object Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::gate
	RuntimeObject* ___gate_0;
	// System.IDisposable Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::disposed
	bool ___disposed_2;
};

// Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility
struct StateMachineUtility_tC2C50815F68C5326CC17F938968F86E7BA830319  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.StateTuple
struct StateTuple_t27A8C28D7DAA053BA3AA779D90305BC35E575256  : public RuntimeObject
{
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
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

// Cysharp.Threading.Tasks.Internal.UnityWebRequestResultExtensions
struct UnityWebRequestResultExtensions_t5CF1079A1E8CC5A64539393AD4B271D5CE7C7C5F  : public RuntimeObject
{
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

// Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c
struct U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D  : public RuntimeObject
{
};

struct U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_StaticFields
{
	// Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::<>9
	U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ParameterInfo,System.String> Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::<>9__3_0
	Func_2_tDE706B5F87BEAD2AAD875E35CECC6843A16ED557* ___U3CU3E9__3_0_1;
	// System.Func`2<System.Type,System.String> Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::<>9__6_0
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___U3CU3E9__6_0_2;
	// System.Func`2<System.Type,System.String> Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::<>9__6_1
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___U3CU3E9__6_1_3;
};

// Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c
struct U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273  : public RuntimeObject
{
};

struct U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_StaticFields
{
	// Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c::<>9
	U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273* ___U3CU3E9_0;
	// System.Action`1<System.Exception> Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c::<>9__9_0
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___U3CU3E9__9_0_1;
};

// Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c
struct U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8  : public RuntimeObject
{
};

struct U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_StaticFields
{
	// Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c::<>9
	U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c::<>9__0_0
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___U3CU3E9__0_0_1;
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer
struct BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer
struct BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer
struct Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer
struct ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer
struct QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer
struct RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer
struct RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer
struct RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer
struct Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer
struct Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer
struct Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer
struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B  : public RuntimeObject
{
};

struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields
{
	// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::Default
	Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* ___Default_0;
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer
struct Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::debuggingId
	RuntimeObject* ___debuggingId_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::debuggingId
	RuntimeObject* ___debuggingId_1;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.RangeInt
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
};

// Cysharp.Threading.Tasks.Internal.ValueStopwatch
struct ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E 
{
	// System.Int64 Cysharp.Threading.Tasks.Internal.ValueStopwatch::startTimestamp
	int64_t ___startTimestamp_1;
};

struct ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields
{
	// System.Double Cysharp.Threading.Tasks.Internal.ValueStopwatch::TimestampToTicks
	double ___TimestampToTicks_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.BoundsInt
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Position
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Size
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer
struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B  : public RuntimeObject
{
};

struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector2
	RuntimeObject* ___Vector2_0;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector3
	RuntimeObject* ___Vector3_1;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector4
	RuntimeObject* ___Vector4_2;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Color
	RuntimeObject* ___Color_3;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Color32
	RuntimeObject* ___Color32_4;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Rect
	RuntimeObject* ___Rect_5;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Bounds
	RuntimeObject* ___Bounds_6;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Quaternion
	RuntimeObject* ___Quaternion_7;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector2Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2Type_8;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector3Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3Type_9;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector4Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector4Type_10;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::colorType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___colorType_11;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::color32Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___color32Type_12;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rectType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectType_13;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::boundsType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsType_14;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::quaternionType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___quaternionType_15;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector2Int
	RuntimeObject* ___Vector2Int_16;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector3Int
	RuntimeObject* ___Vector3Int_17;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::RangeInt
	RuntimeObject* ___RangeInt_18;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::RectInt
	RuntimeObject* ___RectInt_19;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::BoundsInt
	RuntimeObject* ___BoundsInt_20;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector2IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2IntType_21;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector3IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3IntType_22;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rangeIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rangeIntType_23;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rectIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectIntType_24;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::boundsIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsIntType_25;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Cysharp.Threading.Tasks.IPlayerLoopItem[]
struct IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439  : public RuntimeArray
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void Cysharp.Threading.Tasks.Internal.MinimumQueue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimumQueue_1__ctor_m3FE56061AC45D113CDE903116C427CECBB629DDC_gshared (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.MinimumQueue`1<System.Object>::Enqueue(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MinimumQueue_1_Enqueue_m6856CBE1A72F2CA43A9FB9EEEC5701AFC26E07FB_gshared_inline (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.Internal.MinimumQueue`1<System.Object>::Dequeue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MinimumQueue_1_Dequeue_mF30823D3F40ADB73F256F2FAF08CEDF1186CD8EA_gshared_inline (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433* __this, const RuntimeMethod* method) ;
// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MinimumQueue_1_get_Count_m0FE156817F95E94C1D1397B467D9D4172C338CC2_gshared_inline (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mDCD9412FC75B9AD866A2F08D50E259B920BFA6CC_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;

// System.Void Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC92C852032D4C1D3994F4B9EC6863C2060B15439 (U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions::BeautifyType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticsExtensions_BeautifyType_m808232BAF7EF82316A4FA6160A3561C94C6775FF (Type_t* ___t0, bool ___shortName1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.OperationCanceledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4 (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.MinimumQueue`1<Cysharp.Threading.Tasks.IPlayerLoopItem>::.ctor(System.Int32)
inline void MinimumQueue_1__ctor_m02020B42F235388C76C31BA1B23B81BB3CE5E2B9 (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA*, int32_t, const RuntimeMethod*))MinimumQueue_1__ctor_m3FE56061AC45D113CDE903116C427CECBB629DDC_gshared)(__this, ___capacity0, method);
}
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.MinimumQueue`1<Cysharp.Threading.Tasks.IPlayerLoopItem>::Enqueue(T)
inline void MinimumQueue_1_Enqueue_mDD00C61C305E174BBC4C85B9B1E75ADCCBE1DCE1_inline (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA*, RuntimeObject*, const RuntimeMethod*))MinimumQueue_1_Enqueue_m6856CBE1A72F2CA43A9FB9EEEC5701AFC26E07FB_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Array::Resize<Cysharp.Threading.Tasks.IPlayerLoopItem>(T[]&,System.Int32)
inline void Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742 (IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared)(___array0, ___newSize1, method);
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::Initialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_Initialization_m261886B5EE4FE447AC0D9970A2611CB15F30A3C0 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastInitialization_mD60239EE16381604AF1F898F321BD9B5DBFF5BF7 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::EarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_EarlyUpdate_mA17D05AE2D41AC0AC8FBA6A6F887022B5919E181 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastEarlyUpdate_mF015AACB9D25CF340986B968F77384A0A2975DFD (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_FixedUpdate_m46665E9C1FDA461847D4EED290F11C8704631F67 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastFixedUpdate_mB77A68F437A2A4CA9152CB80F638A12195DEB08E (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::PreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_PreUpdate_m346C48450A6B63EE2147DF3A902008BF932FD649 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastPreUpdate_mE6D4A4211F5D699CA52F229DEF02D14C435CBB49 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_Update_mE9FAAF206931C3575A7D84FEFC50CE119EEC9E9E (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastUpdate_mA6E740086E42031FAEDF12D6D29F5ECFCA8E36B8 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::PreLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_PreLateUpdate_m9A5A64617B89F735E29217E1DFA546E5F058BF14 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastPreLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastPreLateUpdate_m46D83DE50CE91101E177611F90491B2C97FB94F1 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::PostLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_PostLateUpdate_mC2235D8AA5C890A2DED85B058A8226284CD0F03C (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastPostLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastPostLateUpdate_mB141860C1D02EE72D1BA5FAD550A9EEBB3A2A583 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::TimeUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_TimeUpdate_m78113C468F4D9542AF991E290672ABF89DA0B8FD (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastTimeUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastTimeUpdate_m34D7531369689AE25CBC54466A711086336EE94F (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::RunCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// T Cysharp.Threading.Tasks.Internal.MinimumQueue`1<Cysharp.Threading.Tasks.IPlayerLoopItem>::Dequeue()
inline RuntimeObject* MinimumQueue_1_Dequeue_mD4B53FBA2B6B15FBF3FBC9769AF16D7385429BAC_inline (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA*, const RuntimeMethod*))MinimumQueue_1_Dequeue_mF30823D3F40ADB73F256F2FAF08CEDF1186CD8EA_gshared_inline)(__this, method);
}
// System.Int32 Cysharp.Threading.Tasks.Internal.MinimumQueue`1<Cysharp.Threading.Tasks.IPlayerLoopItem>::get_Count()
inline int32_t MinimumQueue_1_get_Count_m73E2FA8D3ED67682665ECD18BA620E926D9BFBD9_inline (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA*, const RuntimeMethod*))MinimumQueue_1_get_Count_m0FE156817F95E94C1D1397B467D9D4172C338CC2_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC8E674F3A7E554B6C09782BE4023E8DDA0F7E9E (U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.Internal.RuntimeHelpersAbstraction::WellKnownNoReferenceContainsTypeInitialize(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpersAbstraction_WellKnownNoReferenceContainsTypeInitialize_m5C60F6E500AB3294EC4AA60DF2CBFBFBC0216B30 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Boolean System.RuntimeTypeHandle::Equals(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7 (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Byte::Equals(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::Equals(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___self0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::GetHashCode(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mD6D582A3E30369F05C829A5650BE2AE511EC807F (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.ValueStopwatch::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, int64_t ___startTimestamp0, const RuntimeMethod* method) ;
// System.Int64 Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_mFA529928E79B4BF5EC0265418844B196D8979A73 (int64_t ___value0, const RuntimeMethod* method) ;
// System.TimeSpan Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ValueStopwatch_get_Elapsed_m3D0250DBD5A7CCD764D56F4A4230DF2953406963 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.EmptyDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyDisposable__ctor_m179249B1C5FA1A3EF54591D7DB459A0F2715BA11 (EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB (Exception_t* ___ex0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_ObjectIdForDebugger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5 (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddContinuation(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD (int32_t ___timing0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskScheduler::PublishUnobservedTaskException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m78FB8EB74959FB133CEA8EF57AE3A9A34643DA69 (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_ObjectIdForDebugger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncUniTaskVoidMethodBuilder_get_ObjectIdForDebugger_mB99BDD66E3BF6BDA965253EEC0CED86291AA1450 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3 (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::First<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline FieldInfo_t* Enumerable_First_TisFieldInfo_t_mF075F088C2A79FB7726777E3E97563B7701C3481 (RuntimeObject* ___source0, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___predicate1, const RuntimeMethod* method)
{
	return ((  FieldInfo_t* (*) (RuntimeObject*, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mDCD9412FC75B9AD866A2F08D50E259B920BFA6CC_gshared)(___source0, ___predicate1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDFC27D5AF59E9AD444D8C391B87AF320AD73A004 (U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFC2904D78CF64A34CA5196A82C1290D246D57198 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D* L_0 = (U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D*)il2cpp_codegen_object_new(U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC92C852032D4C1D3994F4B9EC6863C2060B15439(L_0, NULL);
		((U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC92C852032D4C1D3994F4B9EC6863C2060B15439 (U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::<CleanupAsyncStackTrace>b__3_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCleanupAsyncStackTraceU3Eb__3_0_m940739004B6C223040896DBF530CBD027B7CC838 (U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsExtensions_t2E8E9DE173C53F2794D8E37806A23C31AB26A4BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sb.Append(string.Join(", ", mb.GetParameters().Select(p => BeautifyType(p.ParameterType, true) + " " + p.Name)));
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___p0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(DiagnosticsExtensions_t2E8E9DE173C53F2794D8E37806A23C31AB26A4BE_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = DiagnosticsExtensions_BeautifyType_m808232BAF7EF82316A4FA6160A3561C94C6775FF(L_1, (bool)1, NULL);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_3 = ___p0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_4, NULL);
		return L_5;
	}
}
// System.String Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::<BeautifyType>b__6_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CBeautifyTypeU3Eb__6_0_m815E669F8C1A9E5CDBECCA95C693FA2DED92279E (U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D* __this, Type_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsExtensions_t2E8E9DE173C53F2794D8E37806A23C31AB26A4BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "(" + string.Join(", ", t.GetGenericArguments().Select(x => BeautifyType(x, true))) + ")";
		Type_t* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(DiagnosticsExtensions_t2E8E9DE173C53F2794D8E37806A23C31AB26A4BE_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DiagnosticsExtensions_BeautifyType_m808232BAF7EF82316A4FA6160A3561C94C6775FF(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.String Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c::<BeautifyType>b__6_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CBeautifyTypeU3Eb__6_1_m0019F9BAD73E19CFA2615DD94A359D05433A6DCC (U3CU3Ec_tC51F8685DA7641151AF3680CE76802FE758E1D2D* __this, Type_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsExtensions_t2E8E9DE173C53F2794D8E37806A23C31AB26A4BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var innerFormat = string.Join(", ", t.GetGenericArguments().Select(x => BeautifyType(x, true)));
		Type_t* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(DiagnosticsExtensions_t2E8E9DE173C53F2794D8E37806A23C31AB26A4BE_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DiagnosticsExtensions_BeautifyType_m808232BAF7EF82316A4FA6160A3561C94C6775FF(L_0, (bool)1, NULL);
		return L_1;
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
// System.Void Cysharp.Threading.Tasks.Internal.Error::ThrowArgumentNullExceptionCore(System.String)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Error_ThrowArgumentNullExceptionCore_mE97A48AD5866158A616CF27AC9BD544EE3B32943 (String_t* ___paramName0, const RuntimeMethod* method) 
{
	{
		// throw new ArgumentNullException(paramName);
		String_t* L_0 = ___paramName0;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Error_ThrowArgumentNullExceptionCore_mE97A48AD5866158A616CF27AC9BD544EE3B32943_RuntimeMethod_var)));
	}
}
// System.Exception Cysharp.Threading.Tasks.Internal.Error::ArgumentOutOfRange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentOutOfRange_m9658C94BE2FEDCE2A7DEE2E111BF3DECE5CDC0AE (String_t* ___paramName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		// return new ArgumentOutOfRangeException(paramName);
		String_t* L_0 = ___paramName0;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Exception_t* L_2 = V_0;
		return L_2;
	}
}
// System.Exception Cysharp.Threading.Tasks.Internal.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m265095A456C25441C193696275749F287FD34833 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		// return new InvalidOperationException("Source sequence doesn't contain any elements.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		Exception_t* L_1 = V_0;
		return L_1;
	}
}
// System.Exception Cysharp.Threading.Tasks.Internal.Error::MoreThanOneElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_MoreThanOneElement_m5773AA0A11DB9DABDA57CDD70C150C8D8350EBA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE451574BD6072D966A96174174834C5304D10BDC);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		// return new InvalidOperationException("Source sequence contains more than one element.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteralE451574BD6072D966A96174174834C5304D10BDC, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		Exception_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.Error::ThrowNotYetCompleted()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Error_ThrowNotYetCompleted_m477CF8A65FC9B0A07ED78CBFD24FE5F70E4F51AD (const RuntimeMethod* method) 
{
	{
		// throw new InvalidOperationException("Not yet completed.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92337B5613A918335D00B3CDAFAC0C5BA45E46DC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Error_ThrowNotYetCompleted_m477CF8A65FC9B0A07ED78CBFD24FE5F70E4F51AD_RuntimeMethod_var)));
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.Error::ThrowInvalidOperationExceptionCore(System.String)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Error_ThrowInvalidOperationExceptionCore_mD392C1C9DD0B0E27B0B7D4B5EDA796EE06B1C4AF (String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// throw new InvalidOperationException(message);
		String_t* L_0 = ___message0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Error_ThrowInvalidOperationExceptionCore_mD392C1C9DD0B0E27B0B7D4B5EDA796EE06B1C4AF_RuntimeMethod_var)));
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.Error::ThrowOperationCanceledException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Error_ThrowOperationCanceledException_mD5623CCB5A80B073EEC514A377CE2DA93B8522BB (const RuntimeMethod* method) 
{
	{
		// throw new OperationCanceledException();
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Error_ThrowOperationCanceledException_mD5623CCB5A80B073EEC514A377CE2DA93B8522BB_RuntimeMethod_var)));
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
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::.ctor(Cysharp.Threading.Tasks.PlayerLoopTiming)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner__ctor_m2D6695A577F21178AB92E93FDF465CE37ECA28E1 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, int32_t ___timing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumQueue_1__ctor_m02020B42F235388C76C31BA1B23B81BB3CE5E2B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__9_0_m7FD5E476CB2AB74C2AA83C5A0A68796DF976B7A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B2_0 = NULL;
	PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* G_B2_1 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B1_0 = NULL;
	PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* G_B1_1 = NULL;
	{
		// readonly object runningAndQueueLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___runningAndQueueLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runningAndQueueLock_2), (void*)L_0);
		// readonly object arrayLock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___arrayLock_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrayLock_3), (void*)L_1);
		// int tail = 0;
		__this->___tail_5 = 0;
		// bool running = false;
		__this->___running_6 = (bool)0;
		// IPlayerLoopItem[] loopItems = new IPlayerLoopItem[InitialSize];
		IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_2 = (IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439*)(IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439*)SZArrayNew(IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___loopItems_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loopItems_7), (void*)L_2);
		// MinimumQueue<IPlayerLoopItem> waitQueue = new MinimumQueue<IPlayerLoopItem>(InitialSize);
		MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* L_3 = (MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA*)il2cpp_codegen_object_new(MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MinimumQueue_1__ctor_m02020B42F235388C76C31BA1B23B81BB3CE5E2B9(L_3, ((int32_t)16), MinimumQueue_1__ctor_m02020B42F235388C76C31BA1B23B81BB3CE5E2B9_RuntimeMethod_var);
		__this->___waitQueue_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitQueue_8), (void*)L_3);
		// public PlayerLoopRunner(PlayerLoopTiming timing)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.unhandledExceptionCallback = ex => Debug.LogException(ex);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_4 = ((U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = __this;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = __this;
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var);
		U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273* L_6 = ((U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_7 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)il2cpp_codegen_object_new(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__9_0_m7FD5E476CB2AB74C2AA83C5A0A68796DF976B7A9_RuntimeMethod_var), NULL);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_8 = L_7;
		((U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0066:
	{
		NullCheck(G_B2_1);
		G_B2_1->___unhandledExceptionCallback_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___unhandledExceptionCallback_4), (void*)G_B2_0);
		// this.timing = timing;
		int32_t L_9 = ___timing0;
		__this->___timing_1 = L_9;
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::AddAction(Cysharp.Threading.Tasks.IPlayerLoopItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_AddAction_mC0968BDEF4B70D3CBF59AF574D87DDB51982236D (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumQueue_1_Enqueue_mDD00C61C305E174BBC4C85B9B1E75ADCCBE1DCE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopRunner_AddAction_mC0968BDEF4B70D3CBF59AF574D87DDB51982236D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		// lock (runningAndQueueLock)
		RuntimeObject* L_0 = __this->___runningAndQueueLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_003b:
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
				// if (running)
				bool L_4 = __this->___running_6;
				V_2 = L_4;
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_002e_1;
				}
			}
			{
				// waitQueue.Enqueue(item);
				MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* L_6 = __this->___waitQueue_8;
				RuntimeObject* L_7 = ___item0;
				NullCheck(L_6);
				MinimumQueue_1_Enqueue_mDD00C61C305E174BBC4C85B9B1E75ADCCBE1DCE1_inline(L_6, L_7, MinimumQueue_1_Enqueue_mDD00C61C305E174BBC4C85B9B1E75ADCCBE1DCE1_RuntimeMethod_var);
				// return;
				goto IL_00a7;
			}

IL_002e_1:
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// lock (arrayLock)
		RuntimeObject* L_8 = __this->___arrayLock_3;
		V_3 = L_8;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_4;
					if (!L_9)
					{
						goto IL_00a6;
					}
				}
				{
					RuntimeObject* L_10 = V_3;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_10, NULL);
				}

IL_00a6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_11 = V_3;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_11, (&V_4), NULL);
				// if (loopItems.Length == tail)
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_12 = __this->___loopItems_7;
				NullCheck(L_12);
				int32_t L_13 = __this->___tail_5;
				V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((int32_t)L_13))? 1 : 0);
				bool L_14 = V_5;
				if (!L_14)
				{
					goto IL_007c_1;
				}
			}
			{
				// Array.Resize(ref loopItems, checked(tail * 2));
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439** L_15 = (&__this->___loopItems_7);
				int32_t L_16 = __this->___tail_5;
				if (((int64_t)L_16 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), PlayerLoopRunner_AddAction_mC0968BDEF4B70D3CBF59AF574D87DDB51982236D_RuntimeMethod_var);
				Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, 2)), Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742_RuntimeMethod_var);
			}

IL_007c_1:
			{
				// loopItems[tail++] = item;
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_17 = __this->___loopItems_7;
				int32_t L_18 = __this->___tail_5;
				V_6 = L_18;
				int32_t L_19 = V_6;
				__this->___tail_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				int32_t L_20 = V_6;
				RuntimeObject* L_21 = ___item0;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_21);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_21);
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerLoopRunner_Clear_mD138CAAC3638EB1F0949F8CC9BC876AAA02B5333 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		// lock (arrayLock)
		RuntimeObject* L_0 = __this->___arrayLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0067;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0067:
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
				// var rest = 0;
				V_2 = 0;
				// for (var index = 0; index < loopItems.Length; index++)
				V_3 = 0;
				goto IL_0040_1;
			}

IL_001a_1:
			{
				// if (loopItems[index] != null)
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_4 = __this->___loopItems_7;
				int32_t L_5 = V_3;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0032_1;
				}
			}
			{
				// rest++;
				int32_t L_9 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
			}

IL_0032_1:
			{
				// loopItems[index] = null;
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_10 = __this->___loopItems_7;
				int32_t L_11 = V_3;
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, NULL);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject*)NULL);
				// for (var index = 0; index < loopItems.Length; index++)
				int32_t L_12 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0040_1:
			{
				// for (var index = 0; index < loopItems.Length; index++)
				int32_t L_13 = V_3;
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_14 = __this->___loopItems_7;
				NullCheck(L_14);
				V_5 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
				bool L_15 = V_5;
				if (L_15)
				{
					goto IL_001a_1;
				}
			}
			{
				// tail = 0;
				__this->___tail_5 = 0;
				// return rest;
				int32_t L_16 = V_2;
				V_6 = L_16;
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// }
		int32_t L_17 = V_6;
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_Run_m33748216201A3D6575D14D23450C03068FD1729B (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (timing)
		int32_t L_0 = __this->___timing_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_006d;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_007f;
			}
			case 5:
			{
				goto IL_0088;
			}
			case 6:
			{
				goto IL_0091;
			}
			case 7:
			{
				goto IL_009a;
			}
			case 8:
			{
				goto IL_00a3;
			}
			case 9:
			{
				goto IL_00ac;
			}
			case 10:
			{
				goto IL_00b5;
			}
			case 11:
			{
				goto IL_00be;
			}
			case 12:
			{
				goto IL_00c7;
			}
			case 13:
			{
				goto IL_00d0;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00e2;
			}
		}
	}
	{
		goto IL_00eb;
	}

IL_0055:
	{
		// Initialization();
		PlayerLoopRunner_Initialization_m261886B5EE4FE447AC0D9970A2611CB15F30A3C0(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_0061:
	{
		// LastInitialization();
		PlayerLoopRunner_LastInitialization_mD60239EE16381604AF1F898F321BD9B5DBFF5BF7(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_006d:
	{
		// EarlyUpdate();
		PlayerLoopRunner_EarlyUpdate_mA17D05AE2D41AC0AC8FBA6A6F887022B5919E181(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_0076:
	{
		// LastEarlyUpdate();
		PlayerLoopRunner_LastEarlyUpdate_mF015AACB9D25CF340986B968F77384A0A2975DFD(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_007f:
	{
		// FixedUpdate();
		PlayerLoopRunner_FixedUpdate_m46665E9C1FDA461847D4EED290F11C8704631F67(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_0088:
	{
		// LastFixedUpdate();
		PlayerLoopRunner_LastFixedUpdate_mB77A68F437A2A4CA9152CB80F638A12195DEB08E(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_0091:
	{
		// PreUpdate();
		PlayerLoopRunner_PreUpdate_m346C48450A6B63EE2147DF3A902008BF932FD649(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_009a:
	{
		// LastPreUpdate();
		PlayerLoopRunner_LastPreUpdate_mE6D4A4211F5D699CA52F229DEF02D14C435CBB49(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00a3:
	{
		// Update();
		PlayerLoopRunner_Update_mE9FAAF206931C3575A7D84FEFC50CE119EEC9E9E(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00ac:
	{
		// LastUpdate();
		PlayerLoopRunner_LastUpdate_mA6E740086E42031FAEDF12D6D29F5ECFCA8E36B8(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00b5:
	{
		// PreLateUpdate();
		PlayerLoopRunner_PreLateUpdate_m9A5A64617B89F735E29217E1DFA546E5F058BF14(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00be:
	{
		// LastPreLateUpdate();
		PlayerLoopRunner_LastPreLateUpdate_m46D83DE50CE91101E177611F90491B2C97FB94F1(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00c7:
	{
		// PostLateUpdate();
		PlayerLoopRunner_PostLateUpdate_mC2235D8AA5C890A2DED85B058A8226284CD0F03C(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00d0:
	{
		// LastPostLateUpdate();
		PlayerLoopRunner_LastPostLateUpdate_mB141860C1D02EE72D1BA5FAD550A9EEBB3A2A583(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00d9:
	{
		// TimeUpdate();
		PlayerLoopRunner_TimeUpdate_m78113C468F4D9542AF991E290672ABF89DA0B8FD(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00e2:
	{
		// LastTimeUpdate();
		PlayerLoopRunner_LastTimeUpdate_m34D7531369689AE25CBC54466A711086336EE94F(__this, NULL);
		// break;
		goto IL_00ed;
	}

IL_00eb:
	{
		// break;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::Initialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_Initialization_m261886B5EE4FE447AC0D9970A2611CB15F30A3C0 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void Initialization() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastInitialization_mD60239EE16381604AF1F898F321BD9B5DBFF5BF7 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastInitialization() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::EarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_EarlyUpdate_mA17D05AE2D41AC0AC8FBA6A6F887022B5919E181 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void EarlyUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastEarlyUpdate_mF015AACB9D25CF340986B968F77384A0A2975DFD (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastEarlyUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_FixedUpdate_m46665E9C1FDA461847D4EED290F11C8704631F67 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void FixedUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastFixedUpdate_mB77A68F437A2A4CA9152CB80F638A12195DEB08E (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastFixedUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::PreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_PreUpdate_m346C48450A6B63EE2147DF3A902008BF932FD649 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void PreUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastPreUpdate_mE6D4A4211F5D699CA52F229DEF02D14C435CBB49 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastPreUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_Update_mE9FAAF206931C3575A7D84FEFC50CE119EEC9E9E (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void Update() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastUpdate_mA6E740086E42031FAEDF12D6D29F5ECFCA8E36B8 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::PreLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_PreLateUpdate_m9A5A64617B89F735E29217E1DFA546E5F058BF14 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void PreLateUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastPreLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastPreLateUpdate_m46D83DE50CE91101E177611F90491B2C97FB94F1 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastPreLateUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::PostLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_PostLateUpdate_mC2235D8AA5C890A2DED85B058A8226284CD0F03C (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void PostLateUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastPostLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastPostLateUpdate_mB141860C1D02EE72D1BA5FAD550A9EEBB3A2A583 (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastPostLateUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::TimeUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_TimeUpdate_m78113C468F4D9542AF991E290672ABF89DA0B8FD (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void TimeUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::LastTimeUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_LastTimeUpdate_m34D7531369689AE25CBC54466A711086336EE94F (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	{
		// void LastTimeUpdate() => RunCore();
		PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner::RunCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A (PlayerLoopRunner_tF4B3BE255CBA154FF72771BB9D2B7B28520A6192* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumQueue_1_Dequeue_mD4B53FBA2B6B15FBF3FBC9769AF16D7385429BAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumQueue_1_get_Count_m73E2FA8D3ED67682665ECD18BA620E926D9BFBD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	Exception_t* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		// lock (runningAndQueueLock)
		RuntimeObject* L_0 = __this->___runningAndQueueLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// running = true;
			__this->___running_6 = (bool)1;
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// lock (arrayLock)
		RuntimeObject* L_4 = __this->___arrayLock_3;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_021b:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_0225;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_0225:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_3), NULL);
				// var j = tail - 1;
				int32_t L_8 = __this->___tail_5;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
				// for (int i = 0; i < loopItems.Length; i++)
				V_5 = 0;
				goto IL_016c_1;
			}

IL_004e_1:
			{
				// var action = loopItems[i];
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_9 = __this->___loopItems_7;
				int32_t L_10 = V_5;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				V_6 = L_12;
				// if (action != null)
				RuntimeObject* L_13 = V_6;
				V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_14 = V_7;
				if (!L_14)
				{
					goto IL_00b6_1;
				}
			}
			{
			}
			try
			{// begin try (depth: 2)
				{
					// if (!action.MoveNext())
					RuntimeObject* L_15 = V_6;
					NullCheck(L_15);
					bool L_16;
					L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Cysharp.Threading.Tasks.IPlayerLoopItem::MoveNext() */, IPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_il2cpp_TypeInfo_var, L_15);
					V_8 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
					bool L_17 = V_8;
					if (!L_17)
					{
						goto IL_0085_2;
					}
				}
				{
					// loopItems[i] = null;
					IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_18 = __this->___loopItems_7;
					int32_t L_19 = V_5;
					NullCheck(L_18);
					ArrayElementTypeCheck (L_18, NULL);
					(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject*)NULL);
					goto IL_008b_2;
				}

IL_0085_2:
				{
					// continue; // next i
					goto IL_0166_1;
				}

IL_008b_2:
				{
					goto IL_00b5_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_008e_1;
				}
				throw e;
			}

CATCH_008e_1:
			{// begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					// loopItems[i] = null;
					IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_20 = __this->___loopItems_7;
					int32_t L_21 = V_5;
					NullCheck(L_20);
					ArrayElementTypeCheck (L_20, NULL);
					(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (RuntimeObject*)NULL);
				}
				try
				{// begin try (depth: 3)
					// unhandledExceptionCallback(ex);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_22 = __this->___unhandledExceptionCallback_4;
					Exception_t* L_23 = V_9;
					NullCheck(L_22);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_22, L_23, NULL);
					goto IL_00b2_1;
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00ad_1;
					}
					throw e;
				}

CATCH_00ad_1:
				{// begin catch(System.Object)
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00b2_1;
				}// end catch (depth: 3)

IL_00b2_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00b5_1;
				}
			}// end catch (depth: 2)

IL_00b5_1:
			{
			}

IL_00b6_1:
			{
				goto IL_014a_1;
			}

IL_00bb_1:
			{
				// var fromTail = loopItems[j];
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_24 = __this->___loopItems_7;
				int32_t L_25 = V_4;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				RuntimeObject* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				V_10 = L_27;
				// if (fromTail != null)
				RuntimeObject* L_28 = V_10;
				V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_29 = V_11;
				if (!L_29)
				{
					goto IL_0141_1;
				}
			}
			{
			}
			try
			{// begin try (depth: 2)
				{
					// if (!fromTail.MoveNext())
					RuntimeObject* L_30 = V_10;
					NullCheck(L_30);
					bool L_31;
					L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Cysharp.Threading.Tasks.IPlayerLoopItem::MoveNext() */, IPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_il2cpp_TypeInfo_var, L_30);
					V_12 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
					bool L_32 = V_12;
					if (!L_32)
					{
						goto IL_00f7_2;
					}
				}
				{
					// loopItems[j] = null;
					IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_33 = __this->___loopItems_7;
					int32_t L_34 = V_4;
					NullCheck(L_33);
					ArrayElementTypeCheck (L_33, NULL);
					(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (RuntimeObject*)NULL);
					// j--;
					int32_t L_35 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
					// continue; // next j
					goto IL_014a_1;
				}

IL_00f7_2:
				{
					// loopItems[i] = fromTail;
					IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_36 = __this->___loopItems_7;
					int32_t L_37 = V_5;
					RuntimeObject* L_38 = V_10;
					NullCheck(L_36);
					ArrayElementTypeCheck (L_36, L_38);
					(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (RuntimeObject*)L_38);
					// loopItems[j] = null;
					IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_39 = __this->___loopItems_7;
					int32_t L_40 = V_4;
					NullCheck(L_39);
					ArrayElementTypeCheck (L_39, NULL);
					(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (RuntimeObject*)NULL);
					// j--;
					int32_t L_41 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
					// goto NEXT_LOOP; // next i
					goto IL_0163_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0115_1;
				}
				throw e;
			}

CATCH_0115_1:
			{// begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					// loopItems[j] = null;
					IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_42 = __this->___loopItems_7;
					int32_t L_43 = V_4;
					NullCheck(L_42);
					ArrayElementTypeCheck (L_42, NULL);
					(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (RuntimeObject*)NULL);
					// j--;
					int32_t L_44 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
				}
				try
				{// begin try (depth: 3)
					// unhandledExceptionCallback(ex);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_45 = __this->___unhandledExceptionCallback_4;
					Exception_t* L_46 = V_13;
					NullCheck(L_45);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_45, L_46, NULL);
					goto IL_013f_1;
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_013a_1;
					}
					throw e;
				}

CATCH_013a_1:
				{// begin catch(System.Object)
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_013f_1;
				}// end catch (depth: 3)

IL_013f_1:
				{
					// continue; // next j
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_014a_1;
				}
			}// end catch (depth: 2)

IL_0141_1:
			{
				// j--;
				int32_t L_47 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
			}

IL_014a_1:
			{
				// while (i < j)
				int32_t L_48 = V_5;
				int32_t L_49 = V_4;
				V_14 = (bool)((((int32_t)L_48) < ((int32_t)L_49))? 1 : 0);
				bool L_50 = V_14;
				if (L_50)
				{
					goto IL_00bb_1;
				}
			}
			{
				// tail = i; // loop end
				int32_t L_51 = V_5;
				__this->___tail_5 = L_51;
				// break; // LOOP END
				goto IL_0181_1;
			}

IL_0163_1:
			{
				// continue;
				goto IL_0166_1;
			}

IL_0166_1:
			{
				// for (int i = 0; i < loopItems.Length; i++)
				int32_t L_52 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
			}

IL_016c_1:
			{
				// for (int i = 0; i < loopItems.Length; i++)
				int32_t L_53 = V_5;
				IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_54 = __this->___loopItems_7;
				NullCheck(L_54);
				V_15 = (bool)((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))? 1 : 0);
				bool L_55 = V_15;
				if (L_55)
				{
					goto IL_004e_1;
				}
			}

IL_0181_1:
			{
				// lock (runningAndQueueLock)
				RuntimeObject* L_56 = __this->___runningAndQueueLock_2;
				V_16 = L_56;
				V_17 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_020b_1:
					{// begin finally (depth: 2)
						{
							bool L_57 = V_17;
							if (!L_57)
							{
								goto IL_0217_1;
							}
						}
						{
							RuntimeObject* L_58 = V_16;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_58, NULL);
						}

IL_0217_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_59 = V_16;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_59, (&V_17), NULL);
						// running = false;
						__this->___running_6 = (bool)0;
						goto IL_01f4_2;
					}

IL_01a0_2:
					{
						// if (loopItems.Length == tail)
						IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_60 = __this->___loopItems_7;
						NullCheck(L_60);
						int32_t L_61 = __this->___tail_5;
						V_18 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))) == ((int32_t)L_61))? 1 : 0);
						bool L_62 = V_18;
						if (!L_62)
						{
							goto IL_01cd_2;
						}
					}
					{
						// Array.Resize(ref loopItems, checked(tail * 2));
						IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439** L_63 = (&__this->___loopItems_7);
						int32_t L_64 = __this->___tail_5;
						if (((int64_t)L_64 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
							IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), PlayerLoopRunner_RunCore_m053B5E8652893AA94B9CD56C64484CA49D01153A_RuntimeMethod_var);
						Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742(L_63, ((int32_t)il2cpp_codegen_multiply(L_64, 2)), Array_Resize_TisIPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F_mC63248B2A6EA410DF51D14ECAE492BABFA717742_RuntimeMethod_var);
					}

IL_01cd_2:
					{
						// loopItems[tail++] = waitQueue.Dequeue();
						IPlayerLoopItemU5BU5D_t2F09237C670184864F93BD2F284F8434FC44D439* L_65 = __this->___loopItems_7;
						int32_t L_66 = __this->___tail_5;
						V_19 = L_66;
						int32_t L_67 = V_19;
						__this->___tail_5 = ((int32_t)il2cpp_codegen_add(L_67, 1));
						int32_t L_68 = V_19;
						MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* L_69 = __this->___waitQueue_8;
						NullCheck(L_69);
						RuntimeObject* L_70;
						L_70 = MinimumQueue_1_Dequeue_mD4B53FBA2B6B15FBF3FBC9769AF16D7385429BAC_inline(L_69, MinimumQueue_1_Dequeue_mD4B53FBA2B6B15FBF3FBC9769AF16D7385429BAC_RuntimeMethod_var);
						NullCheck(L_65);
						ArrayElementTypeCheck (L_65, L_70);
						(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (RuntimeObject*)L_70);
					}

IL_01f4_2:
					{
						// while (waitQueue.Count != 0)
						MinimumQueue_1_t0B49405706EDD4F170DACFE12095B760EA3B59BA* L_71 = __this->___waitQueue_8;
						NullCheck(L_71);
						int32_t L_72;
						L_72 = MinimumQueue_1_get_Count_m73E2FA8D3ED67682665ECD18BA620E926D9BFBD9_inline(L_71, MinimumQueue_1_get_Count_m73E2FA8D3ED67682665ECD18BA620E926D9BFBD9_RuntimeMethod_var);
						V_20 = (bool)((!(((uint32_t)L_72) <= ((uint32_t)0)))? 1 : 0);
						bool L_73 = V_20;
						if (L_73)
						{
							goto IL_01a0_2;
						}
					}
					{
						goto IL_0218_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0218_1:
			{
				goto IL_0226;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0226:
	{
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
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5DE9C4244BE2E2EE5AF6112A3E10A145EC8E1BDC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273* L_0 = (U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273*)il2cpp_codegen_object_new(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEC8E674F3A7E554B6C09782BE4023E8DDA0F7E9E(L_0, NULL);
		((U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC8E674F3A7E554B6C09782BE4023E8DDA0F7E9E (U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c::<.ctor>b__9_0(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__9_0_m7FD5E476CB2AB74C2AA83C5A0A68796DF976B7A9 (U3CU3Ec_tA835C4736E47C6A98E724564CE54F45637C36273* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.unhandledExceptionCallback = ex => Debug.LogException(ex);
		Exception_t* L_0 = ___ex0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_0, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.RuntimeHelpersAbstraction::WellKnownNoReferenceContainsTypeInitialize(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpersAbstraction_WellKnownNoReferenceContainsTypeInitialize_m5C60F6E500AB3294EC4AA60DF2CBFBFBC0216B30 (Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
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
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B15_0 = 0;
	{
		// if (t.IsPrimitive) return true;
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (t.IsPrimitive) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0012:
	{
		// if (t.IsEnum) return true;
		Type_t* L_3 = ___t0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_3);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// if (t.IsEnum) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0023:
	{
		// if (t == typeof(DateTime)) return true;
		Type_t* L_6 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		// if (t == typeof(DateTime)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_003e:
	{
		// if (t == typeof(DateTimeOffset)) return true;
		Type_t* L_11 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_11, L_13, NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		// if (t == typeof(DateTimeOffset)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_005b:
	{
		// if (t == typeof(Guid)) return true;
		Type_t* L_16 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_16, L_18, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		// if (t == typeof(Guid)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0078:
	{
		// if (t == typeof(decimal)) return true;
		Type_t* L_21 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_21, L_23, NULL);
		V_6 = L_24;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		// if (t == typeof(decimal)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0095:
	{
		// if (t.IsGenericType && t.GetGenericTypeDefinition() == typeof(Nullable<>))
		Type_t* L_26 = ___t0;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_26);
		if (!L_27)
		{
			goto IL_00b4;
		}
	}
	{
		Type_t* L_28 = ___t0;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_28);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_29, L_31, NULL);
		G_B15_0 = ((int32_t)(L_32));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 0;
	}

IL_00b5:
	{
		V_7 = (bool)G_B15_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00cf;
		}
	}
	{
		// return WellKnownNoReferenceContainsTypeInitialize(t.GetGenericArguments()[0]);
		Type_t* L_34 = ___t0;
		NullCheck(L_34);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_35;
		L_35 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_34);
		NullCheck(L_35);
		int32_t L_36 = 0;
		Type_t* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		bool L_38;
		L_38 = RuntimeHelpersAbstraction_WellKnownNoReferenceContainsTypeInitialize_m5C60F6E500AB3294EC4AA60DF2CBFBFBC0216B30(L_37, NULL);
		V_1 = L_38;
		goto IL_01c9;
	}

IL_00cf:
	{
		// if (t == typeof(Vector2)) return true;
		Type_t* L_39 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_39, L_41, NULL);
		V_8 = L_42;
		bool L_43 = V_8;
		if (!L_43)
		{
			goto IL_00ec;
		}
	}
	{
		// if (t == typeof(Vector2)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_00ec:
	{
		// if (t == typeof(Vector3)) return true;
		Type_t* L_44 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_44, L_46, NULL);
		V_9 = L_47;
		bool L_48 = V_9;
		if (!L_48)
		{
			goto IL_0109;
		}
	}
	{
		// if (t == typeof(Vector3)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0109:
	{
		// if (t == typeof(Vector4)) return true;
		Type_t* L_49 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_49, L_51, NULL);
		V_10 = L_52;
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0126;
		}
	}
	{
		// if (t == typeof(Vector4)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0126:
	{
		// if (t == typeof(Color)) return true;
		Type_t* L_54 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_54, L_56, NULL);
		V_11 = L_57;
		bool L_58 = V_11;
		if (!L_58)
		{
			goto IL_0143;
		}
	}
	{
		// if (t == typeof(Color)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0143:
	{
		// if (t == typeof(Rect)) return true;
		Type_t* L_59 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_59, L_61, NULL);
		V_12 = L_62;
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_015d;
		}
	}
	{
		// if (t == typeof(Rect)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_015d:
	{
		// if (t == typeof(Bounds)) return true;
		Type_t* L_64 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_64, L_66, NULL);
		V_13 = L_67;
		bool L_68 = V_13;
		if (!L_68)
		{
			goto IL_0177;
		}
	}
	{
		// if (t == typeof(Bounds)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0177:
	{
		// if (t == typeof(Quaternion)) return true;
		Type_t* L_69 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_69, L_71, NULL);
		V_14 = L_72;
		bool L_73 = V_14;
		if (!L_73)
		{
			goto IL_0191;
		}
	}
	{
		// if (t == typeof(Quaternion)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_0191:
	{
		// if (t == typeof(Vector2Int)) return true;
		Type_t* L_74 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_76;
		L_76 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_75, NULL);
		bool L_77;
		L_77 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_74, L_76, NULL);
		V_15 = L_77;
		bool L_78 = V_15;
		if (!L_78)
		{
			goto IL_01ab;
		}
	}
	{
		// if (t == typeof(Vector2Int)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_01ab:
	{
		// if (t == typeof(Vector3Int)) return true;
		Type_t* L_79 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_80, NULL);
		bool L_82;
		L_82 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_79, L_81, NULL);
		V_16 = L_82;
		bool L_83 = V_16;
		if (!L_83)
		{
			goto IL_01c5;
		}
	}
	{
		// if (t == typeof(Vector3Int)) return true;
		V_1 = (bool)1;
		goto IL_01c9;
	}

IL_01c5:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_01c9;
	}

IL_01c9:
	{
		// }
		bool L_84 = V_1;
		return L_84;
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
// System.Object Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::GetDefaultHelper(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityEqualityComparer_GetDefaultHelper_m0CC6387B098A9128B1900654F87F2994F90A7B9D (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
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
	bool V_14 = false;
	{
		// var t = type.TypeHandle;
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1;
		L_1 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		V_0 = L_1;
		// if (t.Equals(vector2Type)) return (object)UnityEqualityComparer.Vector2;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2Type_8;
		bool L_3;
		L_3 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// if (t.Equals(vector2Type)) return (object)UnityEqualityComparer.Vector2;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2_0;
		V_2 = L_5;
		goto IL_0172;
	}

IL_0023:
	{
		// if (t.Equals(vector3Type)) return (object)UnityEqualityComparer.Vector3;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3Type_9;
		bool L_7;
		L_7 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// if (t.Equals(vector3Type)) return (object)UnityEqualityComparer.Vector3;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3_1;
		V_2 = L_9;
		goto IL_0172;
	}

IL_003e:
	{
		// if (t.Equals(vector4Type)) return (object)UnityEqualityComparer.Vector4;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector4Type_10;
		bool L_11;
		L_11 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// if (t.Equals(vector4Type)) return (object)UnityEqualityComparer.Vector4;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4_2;
		V_2 = L_13;
		goto IL_0172;
	}

IL_005b:
	{
		// if (t.Equals(colorType)) return (object)UnityEqualityComparer.Color;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___colorType_11;
		bool L_15;
		L_15 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_14, NULL);
		V_5 = L_15;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// if (t.Equals(colorType)) return (object)UnityEqualityComparer.Color;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_17 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color_3;
		V_2 = L_17;
		goto IL_0172;
	}

IL_0078:
	{
		// if (t.Equals(color32Type)) return (object)UnityEqualityComparer.Color32;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___color32Type_12;
		bool L_19;
		L_19 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_18, NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0095;
		}
	}
	{
		// if (t.Equals(color32Type)) return (object)UnityEqualityComparer.Color32;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_21 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32_4;
		V_2 = L_21;
		goto IL_0172;
	}

IL_0095:
	{
		// if (t.Equals(rectType)) return (object)UnityEqualityComparer.Rect;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectType_13;
		bool L_23;
		L_23 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_22, NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00b2;
		}
	}
	{
		// if (t.Equals(rectType)) return (object)UnityEqualityComparer.Rect;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect_5;
		V_2 = L_25;
		goto IL_0172;
	}

IL_00b2:
	{
		// if (t.Equals(boundsType)) return (object)UnityEqualityComparer.Bounds;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsType_14;
		bool L_27;
		L_27 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_26, NULL);
		V_8 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00cf;
		}
	}
	{
		// if (t.Equals(boundsType)) return (object)UnityEqualityComparer.Bounds;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds_6;
		V_2 = L_29;
		goto IL_0172;
	}

IL_00cf:
	{
		// if (t.Equals(quaternionType)) return (object)UnityEqualityComparer.Quaternion;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___quaternionType_15;
		bool L_31;
		L_31 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_30, NULL);
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00ec;
		}
	}
	{
		// if (t.Equals(quaternionType)) return (object)UnityEqualityComparer.Quaternion;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion_7;
		V_2 = L_33;
		goto IL_0172;
	}

IL_00ec:
	{
		// if (t.Equals(vector2IntType)) return (object)UnityEqualityComparer.Vector2Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2IntType_21;
		bool L_35;
		L_35 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_34, NULL);
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_0106;
		}
	}
	{
		// if (t.Equals(vector2IntType)) return (object)UnityEqualityComparer.Vector2Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int_16;
		V_2 = L_37;
		goto IL_0172;
	}

IL_0106:
	{
		// if (t.Equals(vector3IntType)) return (object)UnityEqualityComparer.Vector3Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3IntType_22;
		bool L_39;
		L_39 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_38, NULL);
		V_11 = L_39;
		bool L_40 = V_11;
		if (!L_40)
		{
			goto IL_0120;
		}
	}
	{
		// if (t.Equals(vector3IntType)) return (object)UnityEqualityComparer.Vector3Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_41 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int_17;
		V_2 = L_41;
		goto IL_0172;
	}

IL_0120:
	{
		// if (t.Equals(rangeIntType)) return (object)UnityEqualityComparer.RangeInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rangeIntType_23;
		bool L_43;
		L_43 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_42, NULL);
		V_12 = L_43;
		bool L_44 = V_12;
		if (!L_44)
		{
			goto IL_013a;
		}
	}
	{
		// if (t.Equals(rangeIntType)) return (object)UnityEqualityComparer.RangeInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_45 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt_18;
		V_2 = L_45;
		goto IL_0172;
	}

IL_013a:
	{
		// if (t.Equals(rectIntType)) return (object)UnityEqualityComparer.RectInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectIntType_24;
		bool L_47;
		L_47 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_46, NULL);
		V_13 = L_47;
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0154;
		}
	}
	{
		// if (t.Equals(rectIntType)) return (object)UnityEqualityComparer.RectInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt_19;
		V_2 = L_49;
		goto IL_0172;
	}

IL_0154:
	{
		// if (t.Equals(boundsIntType)) return (object)UnityEqualityComparer.BoundsInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsIntType_25;
		bool L_51;
		L_51 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_50, NULL);
		V_14 = L_51;
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_016e;
		}
	}
	{
		// if (t.Equals(boundsIntType)) return (object)UnityEqualityComparer.BoundsInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_53 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt_20;
		V_2 = L_53;
		goto IL_0172;
	}

IL_016e:
	{
		// return null;
		V_2 = NULL;
		goto IL_0172;
	}

IL_0172:
	{
		// }
		RuntimeObject* L_54 = V_2;
		return L_54;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEqualityComparer__cctor_m39A07A3D3A20D29A0DDF1B3E3020F6430807DAE3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IEqualityComparer<Vector2> Vector2 = new Vector2EqualityComparer();
		Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* L_0 = (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892*)il2cpp_codegen_object_new(Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222(L_0, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2_0), (void*)L_0);
		// public static readonly IEqualityComparer<Vector3> Vector3 = new Vector3EqualityComparer();
		Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* L_1 = (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3*)il2cpp_codegen_object_new(Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49(L_1, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3_1), (void*)L_1);
		// public static readonly IEqualityComparer<Vector4> Vector4 = new Vector4EqualityComparer();
		Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* L_2 = (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152*)il2cpp_codegen_object_new(Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E(L_2, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4_2), (void*)L_2);
		// public static readonly IEqualityComparer<Color> Color = new ColorEqualityComparer();
		ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* L_3 = (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B*)il2cpp_codegen_object_new(ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947(L_3, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color_3), (void*)L_3);
		// public static readonly IEqualityComparer<Color32> Color32 = new Color32EqualityComparer();
		Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* L_4 = (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C*)il2cpp_codegen_object_new(Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7(L_4, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32_4), (void*)L_4);
		// public static readonly IEqualityComparer<Rect> Rect = new RectEqualityComparer();
		RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* L_5 = (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46*)il2cpp_codegen_object_new(RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885(L_5, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect_5), (void*)L_5);
		// public static readonly IEqualityComparer<Bounds> Bounds = new BoundsEqualityComparer();
		BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* L_6 = (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742*)il2cpp_codegen_object_new(BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B(L_6, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds_6), (void*)L_6);
		// public static readonly IEqualityComparer<Quaternion> Quaternion = new QuaternionEqualityComparer();
		QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* L_7 = (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9*)il2cpp_codegen_object_new(QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D(L_7, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion_7), (void*)L_7);
		// static readonly RuntimeTypeHandle vector2Type = typeof(Vector2).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_9);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2Type_8 = L_10;
		// static readonly RuntimeTypeHandle vector3Type = typeof(Vector3).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_12);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3Type_9 = L_13;
		// static readonly RuntimeTypeHandle vector4Type = typeof(Vector4).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		NullCheck(L_15);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16;
		L_16 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_15);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector4Type_10 = L_16;
		// static readonly RuntimeTypeHandle colorType = typeof(Color).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		NullCheck(L_18);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_18);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___colorType_11 = L_19;
		// static readonly RuntimeTypeHandle color32Type = typeof(Color32).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		NullCheck(L_21);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22;
		L_22 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_21);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___color32Type_12 = L_22;
		// static readonly RuntimeTypeHandle rectType = typeof(Rect).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		NullCheck(L_24);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25;
		L_25 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_24);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectType_13 = L_25;
		// static readonly RuntimeTypeHandle boundsType = typeof(Bounds).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_26, NULL);
		NullCheck(L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28;
		L_28 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_27);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsType_14 = L_28;
		// static readonly RuntimeTypeHandle quaternionType = typeof(Quaternion).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		NullCheck(L_30);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31;
		L_31 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_30);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___quaternionType_15 = L_31;
		// public static readonly IEqualityComparer<Vector2Int> Vector2Int = new Vector2IntEqualityComparer();
		Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* L_32 = (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC*)il2cpp_codegen_object_new(Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6(L_32, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int_16), (void*)L_32);
		// public static readonly IEqualityComparer<Vector3Int> Vector3Int = new Vector3IntEqualityComparer();
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_33 = (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2(L_33, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int_17 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int_17), (void*)L_33);
		// public static readonly IEqualityComparer<RangeInt> RangeInt = new RangeIntEqualityComparer();
		RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* L_34 = (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C*)il2cpp_codegen_object_new(RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F(L_34, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt_18 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt_18), (void*)L_34);
		// public static readonly IEqualityComparer<RectInt> RectInt = new RectIntEqualityComparer();
		RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* L_35 = (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1*)il2cpp_codegen_object_new(RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071(L_35, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt_19), (void*)L_35);
		// public static readonly IEqualityComparer<BoundsInt> BoundsInt = new BoundsIntEqualityComparer();
		BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* L_36 = (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A*)il2cpp_codegen_object_new(BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B(L_36, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt_20 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt_20), (void*)L_36);
		// static readonly RuntimeTypeHandle vector2IntType = typeof(Vector2Int).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		NullCheck(L_38);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39;
		L_39 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_38);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2IntType_21 = L_39;
		// static readonly RuntimeTypeHandle vector3IntType = typeof(Vector3Int).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		NullCheck(L_41);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42;
		L_42 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_41);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3IntType_22 = L_42;
		// static readonly RuntimeTypeHandle rangeIntType = typeof(RangeInt).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var) };
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		NullCheck(L_44);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45;
		L_45 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_44);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rangeIntType_23 = L_45;
		// static readonly RuntimeTypeHandle rectIntType = typeof(RectInt).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_46, NULL);
		NullCheck(L_47);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48;
		L_48 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_47);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectIntType_24 = L_48;
		// static readonly RuntimeTypeHandle boundsIntType = typeof(BoundsInt).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		NullCheck(L_50);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51;
		L_51 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_50);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsIntType_25 = L_51;
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::Equals(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2EqualityComparer_Equals_mDCF8794B659CF4F453670F50C038E29AB7A45B5F (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y);
		float* L_0 = (&(&___self0)->___x_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___vector1;
		float L_2 = L_1.___x_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___vector1;
		float L_6 = L_5.___y_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::GetHashCode(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2EqualityComparer_GetHashCode_mE3C5D0219CB404919B2DABFE2EA1A2DB4928BC43 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2;
		float* L_0 = (&(&___obj0)->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::Equals(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3EqualityComparer_Equals_m37AFB52DA45A16EEC47E0EFA7547C7A92F7CE00C (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z);
		float* L_0 = (&(&___self0)->___x_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector1;
		float L_2 = L_1.___x_2;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vector1;
		float L_6 = L_5.___y_3;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___vector1;
		float L_10 = L_9.___z_4;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		G_B4_0 = ((int32_t)(L_11));
		goto IL_003e;
	}

IL_003d:
	{
		G_B4_0 = 0;
	}

IL_003e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::GetHashCode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3EqualityComparer_GetHashCode_m2E0133ED677D6B890BC03F7C7558EDAEEF5B5989 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2;
		float* L_0 = (&(&___obj0)->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002e;
	}

IL_002e:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::Equals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4EqualityComparer_Equals_m2086F254F3E0DBB61870C6AFC2071F0B55D46BEE (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___self0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z) && self.w.Equals(vector.w);
		float* L_0 = (&(&___self0)->___x_1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___vector1;
		float L_2 = L_1.___x_1;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___vector1;
		float L_6 = L_5.___y_2;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___vector1;
		float L_10 = L_9.___z_3;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___w_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = ___vector1;
		float L_14 = L_13.___w_4;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::GetHashCode(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4EqualityComparer_GetHashCode_m9A62BAC63109A30401C65E44DFDDC6DCC8A032DB (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2 ^ obj.w.GetHashCode() >> 1;
		float* L_0 = (&(&___obj0)->___x_1);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_2);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___z_3);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&(&___obj0)->___w_4);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::Equals(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorEqualityComparer_Equals_mB179B1B397F1F1168EC53962ABB3523FF74AFD6B (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___self0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___other1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.r.Equals(other.r) && self.g.Equals(other.g) && self.b.Equals(other.b) && self.a.Equals(other.a);
		float* L_0 = (&(&___self0)->___r_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___other1;
		float L_2 = L_1.___r_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___g_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___other1;
		float L_6 = L_5.___g_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___b_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___other1;
		float L_10 = L_9.___b_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___a_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___other1;
		float L_14 = L_13.___a_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::GetHashCode(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColorEqualityComparer_GetHashCode_mE8448792E611375BF81BEB3F74EF316C9C5089F1 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.r.GetHashCode() ^ obj.g.GetHashCode() << 2 ^ obj.b.GetHashCode() >> 2 ^ obj.a.GetHashCode() >> 1;
		float* L_0 = (&(&___obj0)->___r_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___g_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___b_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&(&___obj0)->___a_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::Equals(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectEqualityComparer_Equals_m7C5D4094F024E1E3303902EC45511360AB84C3A5 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___self0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___other1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(other.x) && self.width.Equals(other.width) && self.y.Equals(other.y) && self.height.Equals(other.height);
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___self0), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___other1), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___self0), NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___other1), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___self0), NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___other1), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___self0), NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___other1), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::GetHashCode(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectEqualityComparer_GetHashCode_m371270E3930F1051BA8A383A7AD4E8185F34BB41 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___obj0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.width.GetHashCode() << 2 ^ obj.y.GetHashCode() >> 2 ^ obj.height.GetHashCode() >> 1;
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___obj0), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___obj0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0049;
	}

IL_0049:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::Equals(UnityEngine.Bounds,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsEqualityComparer_Equals_mEEBF4CEE6EFACEE9C65585CF206560F896E450BC (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___self0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___vector1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.center.Equals(vector.center) && self.extents.Equals(vector.extents);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___self0), NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___vector1), NULL);
		bool L_2;
		L_2 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___self0), NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___vector1), NULL);
		bool L_5;
		L_5 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::GetHashCode(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsEqualityComparer_GetHashCode_m3B5BB89CBE2292F63CE1AF79355488D5FA842332 (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___obj0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return obj.center.GetHashCode() ^ obj.extents.GetHashCode() << 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0031;
	}

IL_0031:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::Equals(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuaternionEqualityComparer_Equals_m31074902EFDF140C640FE4572226107F8051AED6 (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___self0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z) && self.w.Equals(vector.w);
		float* L_0 = (&(&___self0)->___x_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___vector1;
		float L_2 = L_1.___x_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___vector1;
		float L_6 = L_5.___y_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___vector1;
		float L_10 = L_9.___z_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___w_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___vector1;
		float L_14 = L_13.___w_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::GetHashCode(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionEqualityComparer_GetHashCode_m16370B5BA87F585E8EF9F90079BE8639A736B108 (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2 ^ obj.w.GetHashCode() >> 1;
		float* L_0 = (&(&___obj0)->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___z_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&(&___obj0)->___w_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::Equals(UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color32EqualityComparer_Equals_m65994327B8D4AE5F437ECDBB056B51121D4E123C (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___self0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.a.Equals(vector.a) && self.r.Equals(vector.r) && self.g.Equals(vector.g) && self.b.Equals(vector.b);
		uint8_t* L_0 = (&(&___self0)->___a_4);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___vector1;
		uint8_t L_2 = L_1.___a_4;
		bool L_3;
		L_3 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_4 = (&(&___self0)->___r_1);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = ___vector1;
		uint8_t L_6 = L_5.___r_1;
		bool L_7;
		L_7 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_8 = (&(&___self0)->___g_2);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___vector1;
		uint8_t L_10 = L_9.___g_2;
		bool L_11;
		L_11 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_12 = (&(&___self0)->___b_3);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___vector1;
		uint8_t L_14 = L_13.___b_3;
		bool L_15;
		L_15 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::GetHashCode(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color32EqualityComparer_GetHashCode_m6C09A2DCB410B21E5A7B29BF078997D13BD828AC (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.a.GetHashCode() ^ obj.r.GetHashCode() << 2 ^ obj.g.GetHashCode() >> 2 ^ obj.b.GetHashCode() >> 1;
		uint8_t* L_0 = (&(&___obj0)->___a_4);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		uint8_t* L_2 = (&(&___obj0)->___r_1);
		int32_t L_3;
		L_3 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_2, NULL);
		uint8_t* L_4 = (&(&___obj0)->___g_2);
		int32_t L_5;
		L_5 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_4, NULL);
		uint8_t* L_6 = (&(&___obj0)->___b_3);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7 (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::Equals(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2IntEqualityComparer_Equals_m601E35C575B3B80972F7DCD6E0F4FFDB0BBC6FD1 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___self0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___vector1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___self0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___vector1), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___self0), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___vector1), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::GetHashCode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2IntEqualityComparer_GetHashCode_mA47DD005DCD1F908934A7FBDEC0302B7E721CFB6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2;
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0025;
	}

IL_0025:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::Equals(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___self0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___vector1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z);
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___self0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___vector1), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___self0), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___vector1), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_6;
		L_6 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___self0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___vector1), NULL);
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_004a;
	}

IL_0049:
	{
		G_B4_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B4_0;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::GetHashCode(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2;
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___obj0), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_0037;
	}

IL_0037:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__cctor_m0F987816E9608D309354E2B9B4600EDC1AC0AEFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Vector3IntEqualityComparer Default = new Vector3IntEqualityComparer();
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2(L_0, NULL);
		((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::Equals(UnityEngine.RangeInt,UnityEngine.RangeInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RangeIntEqualityComparer_Equals_mFAF08E61133434AAE753541F122850020EE5A5FC (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___self0, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.start.Equals(vector.start) && self.length.Equals(vector.length);
		int32_t* L_0 = (&(&___self0)->___start_0);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_1 = ___vector1;
		int32_t L_2 = L_1.___start_0;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = (&(&___self0)->___length_1);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_5 = ___vector1;
		int32_t L_6 = L_5.___length_1;
		bool L_7;
		L_7 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_4, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::GetHashCode(UnityEngine.RangeInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RangeIntEqualityComparer_GetHashCode_m6E983D944CB99F6213799F3C01D1C4B2B0471A0D (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.start.GetHashCode() ^ obj.length.GetHashCode() << 2;
		int32_t* L_0 = (&(&___obj0)->___start_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		int32_t* L_2 = (&(&___obj0)->___length_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::Equals(UnityEngine.RectInt,UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectIntEqualityComparer_Equals_m2DB1E4DE26E7EBC6F11FBA44CAC624C1929052B7 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___self0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___other1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(other.x) && self.width.Equals(other.width) && self.y.Equals(other.y) && self.height.Equals(other.height);
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___self0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___other1), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_3;
		L_3 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___self0), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___other1), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_6;
		L_6 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___self0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___other1), NULL);
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9;
		L_9 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___self0), NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___other1), NULL);
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::GetHashCode(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectIntEqualityComparer_GetHashCode_mE62B5C63CA51E8456976FC89AD8C28BF7E268693 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.width.GetHashCode() << 2 ^ obj.y.GetHashCode() >> 2 ^ obj.height.GetHashCode() >> 1;
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_4;
		L_4 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___obj0), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_6;
		L_6 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___obj0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0049;
	}

IL_0049:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::Equals(UnityEngine.BoundsInt,UnityEngine.BoundsInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsIntEqualityComparer_Equals_m122729F17B69AEA949D6EE76770F49C256D5FA96 (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___self0, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return Vector3IntEqualityComparer.Default.Equals(self.position, vector.position)
		//     && Vector3IntEqualityComparer.Default.Equals(self.size, vector.size);
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___self0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2;
		L_2 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___vector1), NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958(L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_4 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5;
		L_5 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___self0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		L_6 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___vector1), NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958(L_4, L_5, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 0;
	}

IL_0036:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::GetHashCode(UnityEngine.BoundsInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsIntEqualityComparer_GetHashCode_m0D967C9173D85163A31114670AFD2DBE43580F7C (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return Vector3IntEqualityComparer.Default.GetHashCode(obj.position) ^ Vector3IntEqualityComparer.Default.GetHashCode(obj.size) << 2;
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___obj0), NULL);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755(L_0, L_1, NULL);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_3 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4;
		L_4 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___obj0), NULL);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755(L_3, L_4, NULL);
		V_0 = ((int32_t)(L_2^((int32_t)(L_5<<2))));
		goto IL_0029;
	}

IL_0029:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityWebRequestResultExtensions::IsError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestResultExtensions_IsError_mC46D6FCE71AB149A2493C561648BA38F63C9BB1C (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___unityWebRequest0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// var result = unityWebRequest.result;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___unityWebRequest0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		V_0 = L_1;
		// return (result == UnityWebRequest.Result.ConnectionError)
		//     || (result == UnityWebRequest.Result.DataProcessingError)
		//     || (result == UnityWebRequest.Result.ProtocolError);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B4_0 = 1;
	}

IL_0017:
	{
		V_1 = (bool)G_B4_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_5 = V_1;
		return L_5;
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
// Cysharp.Threading.Tasks.Internal.ValueStopwatch Cysharp.Threading.Tasks.Internal.ValueStopwatch::StartNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E ValueStopwatch_StartNew_mE31119D4699DE1E315762CB563FED984A40910F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ValueStopwatch StartNew() => new ValueStopwatch(Stopwatch.GetTimestamp());
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = Stopwatch_GetTimestamp_mD6D582A3E30369F05C829A5650BE2AE511EC807F(NULL);
		ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.ValueStopwatch::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, int64_t ___startTimestamp0, const RuntimeMethod* method) 
{
	{
		// this.startTimestamp = startTimestamp;
		int64_t L_0 = ___startTimestamp0;
		__this->___startTimestamp_1 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_AdjustorThunk (RuntimeObject* __this, int64_t ___startTimestamp0, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68(_thisAdjusted, ___startTimestamp0, method);
}
// System.TimeSpan Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ValueStopwatch_get_Elapsed_m3D0250DBD5A7CCD764D56F4A4230DF2953406963 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TimeSpan Elapsed => TimeSpan.FromTicks(this.ElapsedTicks);
		int64_t L_0;
		L_0 = ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromTicks_mFA529928E79B4BF5EC0265418844B196D8979A73(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ValueStopwatch_get_Elapsed_m3D0250DBD5A7CCD764D56F4A4230DF2953406963_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A _returnValue;
	_returnValue = ValueStopwatch_get_Elapsed_m3D0250DBD5A7CCD764D56F4A4230DF2953406963(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInvalid => startTimestamp == 0;
		int64_t L_0 = __this->___startTimestamp_1;
		return (bool)((((int64_t)L_0) == ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// if (startTimestamp == 0)
		int64_t L_0 = __this->___startTimestamp_1;
		V_1 = (bool)((((int64_t)L_0) == ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// throw new InvalidOperationException("Detected invalid initialization(use 'default'), only to create from StartNew().");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC282D0727A5AEF94368AE281960FC490CF059B30)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var)));
	}

IL_001b:
	{
		// var delta = Stopwatch.GetTimestamp() - startTimestamp;
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_3;
		L_3 = Stopwatch_GetTimestamp_mD6D582A3E30369F05C829A5650BE2AE511EC807F(NULL);
		int64_t L_4 = __this->___startTimestamp_1;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_3, L_4));
		// return (long)(delta * TimestampToTicks);
		int64_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		double L_6 = ((ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields*)il2cpp_codegen_static_fields_for(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var))->___TimestampToTicks_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply(((double)L_5), L_6)));
		goto IL_0034;
	}

IL_0034:
	{
		// }
		int64_t L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C  int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cysharp.Threading.Tasks.Internal.ValueStopwatch::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__cctor_m2437C2944ECEF4D4BA3813640A0AEF6F1C5B7A48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly double TimestampToTicks = TimeSpan.TicksPerSecond / (double)Stopwatch.Frequency;
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___Frequency_0;
		((ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields*)il2cpp_codegen_static_fields_for(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var))->___TimestampToTicks_0 = ((double)((10000000.0)/((double)L_0)));
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
// System.Void Cysharp.Threading.Tasks.Internal.EmptyDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyDisposable__ctor_m179249B1C5FA1A3EF54591D7DB459A0F2715BA11 (EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25* __this, const RuntimeMethod* method) 
{
	{
		// EmptyDisposable()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.EmptyDisposable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyDisposable_Dispose_mEB82FA6D7E68C4C41DE0827DC453BFEC38DC5718 (EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.EmptyDisposable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyDisposable__cctor_mBA3459CCD3BC63C892B07F8D2640F10D397DF38E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static EmptyDisposable Instance = new EmptyDisposable();
		EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25* L_0 = (EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25*)il2cpp_codegen_object_new(EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EmptyDisposable__ctor_m179249B1C5FA1A3EF54591D7DB459A0F2715BA11(L_0, NULL);
		((EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_StaticFields*)il2cpp_codegen_static_fields_for(EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_StaticFields*)il2cpp_codegen_static_fields_for(EmptyDisposable_t720C8EB913DEC363AF098B0E00643439B54E0E25_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Boolean Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SingleAssignmentDisposable_get_IsDisposed_m06D541A6B56DB09E9CCF17D9CDDD858A806ED7B9 (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// public bool IsDisposed { get { lock (gate) { return disposed; } } }
		RuntimeObject* L_0 = __this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0027;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// public bool IsDisposed { get { lock (gate) { return disposed; } } }
			bool L_4 = __this->___disposed_2;
			V_2 = L_4;
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		// public bool IsDisposed { get { lock (gate) { return disposed; } } }
		bool L_5 = V_2;
		return L_5;
	}
}
// System.IDisposable Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::get_Disposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleAssignmentDisposable_get_Disposable_m0C180530F9F23348245F031D3777F765F15DDC17 (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return current;
		RuntimeObject* L_0 = __this->___current_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::set_Disposable(System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable_set_Disposable_m47E3E5D9584661A7C67BE8DD02B784D30680909B (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B12_0 = 0;
	{
		// var old = default(IDisposable);
		V_0 = (RuntimeObject*)NULL;
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_2 = L_0;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_3;
					if (!L_1)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_2 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_3), NULL);
				// alreadyDisposed = disposed;
				bool L_4 = __this->___disposed_2;
				V_1 = L_4;
				// old = current;
				RuntimeObject* L_5 = __this->___current_1;
				V_0 = L_5;
				// if (!alreadyDisposed)
				bool L_6 = V_1;
				V_4 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
				bool L_7 = V_4;
				if (!L_7)
				{
					goto IL_0043_1;
				}
			}
			{
				// if (value == null) return;
				RuntimeObject* L_8 = ___value0;
				V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_9 = V_5;
				if (!L_9)
				{
					goto IL_003b_1;
				}
			}
			{
				// if (value == null) return;
				goto IL_0080;
			}

IL_003b_1:
			{
				// current = value;
				RuntimeObject* L_10 = ___value0;
				__this->___current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)L_10);
			}

IL_0043_1:
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// if (alreadyDisposed && value != null)
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_12 = ___value0;
		G_B12_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B12_0 = 0;
	}

IL_005b:
	{
		V_6 = (bool)G_B12_0;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		// value.Dispose();
		RuntimeObject* L_14 = ___value0;
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
		// return;
		goto IL_0080;
	}

IL_006b:
	{
		// if (old != null) throw new InvalidOperationException("Disposable is already set");
		RuntimeObject* L_15 = V_0;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0080;
		}
	}
	{
		// if (old != null) throw new InvalidOperationException("Disposable is already set");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_17 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA580C0B89C7CCB3DC3A2EF1DAAA8D4C2DF539CF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleAssignmentDisposable_set_Disposable_m47E3E5D9584661A7C67BE8DD02B784D30680909B_RuntimeMethod_var)));
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable_Dispose_m2B96E78DEE7B62F8C9518752EB9E9F614EA05D45 (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// IDisposable old = null;
		V_0 = (RuntimeObject*)NULL;
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0047;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_2), NULL);
				// if (!disposed)
				bool L_4 = __this->___disposed_2;
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_003a_1;
				}
			}
			{
				// disposed = true;
				__this->___disposed_2 = (bool)1;
				// old = current;
				RuntimeObject* L_6 = __this->___current_1;
				V_0 = L_6;
				// current = null;
				__this->___current_1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)(RuntimeObject*)NULL);
			}

IL_003a_1:
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// if (old != null) old.Dispose();
		RuntimeObject* L_7 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// if (old != null) old.Dispose();
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable__ctor_m0D2759248B3CEBD509F9B848CD0B385E783777D4 (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7 (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_1 = V_1;
		return L_1;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		NullCheck(L_2);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001d:
	{
		// else if (ex != null)
		Exception_t* L_4 = __this->___ex_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_6 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
		L_7 = UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB(L_6, NULL);
		V_1 = L_7;
		goto IL_0042;
	}

IL_0039:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _returnValue;
	_returnValue = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643 (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ex = exception;
		Exception_t* L_2 = ___exception0;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_3 = __this->___runnerPromise_0;
		Exception_t* L_4 = ___exception0;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_AdjustorThunk (RuntimeObject* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(_thisAdjusted, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// runnerPromise.SetResult();
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(_thisAdjusted, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(_thisAdjusted, ___stateMachine0, method);
}
// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_ObjectIdForDebugger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5 (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (debuggingId == null)
		RuntimeObject* L_0 = __this->___debuggingId_2;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// debuggingId = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		__this->___debuggingId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debuggingId_2), (void*)L_2);
	}

IL_001b:
	{
		// return debuggingId;
		RuntimeObject* L_3 = __this->___debuggingId_2;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m26315786B8D1E568884CD2A1B44990ED7848DA06 (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_1 = V_1;
		return L_1;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 _returnValue;
	_returnValue = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_2 = __this->___runner_0;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD(((int32_t)13), L_3, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		Exception_t* L_4 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m78FB8EB74959FB133CEA8EF57AE3A9A34643DA69(L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_AdjustorThunk (RuntimeObject* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(_thisAdjusted, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_2 = __this->___runner_0;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD(((int32_t)13), L_3, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(_thisAdjusted, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C(_thisAdjusted, ___stateMachine0, method);
}
// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_ObjectIdForDebugger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncUniTaskVoidMethodBuilder_get_ObjectIdForDebugger_mB99BDD66E3BF6BDA965253EEC0CED86291AA1450 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (debuggingId == null)
		RuntimeObject* L_0 = __this->___debuggingId_1;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// debuggingId = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		__this->___debuggingId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debuggingId_1), (void*)L_2);
	}

IL_001b:
	{
		// return debuggingId;
		RuntimeObject* L_3 = __this->___debuggingId_1;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncUniTaskVoidMethodBuilder_get_ObjectIdForDebugger_mB99BDD66E3BF6BDA965253EEC0CED86291AA1450_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncUniTaskVoidMethodBuilder_get_ObjectIdForDebugger_mB99BDD66E3BF6BDA965253EEC0CED86291AA1450(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility::GetState(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateMachineUtility_GetState_m90EE1981B686BE29186DD09AB9343C673E583F48 (RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisFieldInfo_t_mF075F088C2A79FB7726777E3E97563B7701C3481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetStateU3Eb__0_0_m11816848E5A6598D044739D671ECF2189BD8E994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	int32_t V_1 = 0;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B2_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B2_1 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B1_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B1_1 = NULL;
	{
		// var info = stateMachine.GetType().GetFields(System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance)
		//     .First(x => x.Name.EndsWith("__state"));
		RuntimeObject* L_0 = ___stateMachine0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_2;
		L_2 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(88 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_1, ((int32_t)52));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var);
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_3 = ((U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var);
		U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8* L_5 = ((U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_6 = (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*)il2cpp_codegen_object_new(Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetStateU3Eb__0_0_m11816848E5A6598D044739D671ECF2189BD8E994_RuntimeMethod_var), NULL);
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_7 = L_6;
		((U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002d:
	{
		FieldInfo_t* L_8;
		L_8 = Enumerable_First_TisFieldInfo_t_mF075F088C2A79FB7726777E3E97563B7701C3481((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_First_TisFieldInfo_t_mF075F088C2A79FB7726777E3E97563B7701C3481_RuntimeMethod_var);
		V_0 = L_8;
		// return (int)info.GetValue(stateMachine);
		FieldInfo_t* L_9 = V_0;
		RuntimeObject* L_10 = ___stateMachine0;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_9, L_10);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_11, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
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
// System.Void Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEBE3B7749ED7BC5CEF1F452595C68AC6A242F2FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8* L_0 = (U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8*)il2cpp_codegen_object_new(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDFC27D5AF59E9AD444D8C391B87AF320AD73A004(L_0, NULL);
		((U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDFC27D5AF59E9AD444D8C391B87AF320AD73A004 (U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c::<GetState>b__0_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetStateU3Eb__0_0_m11816848E5A6598D044739D671ECF2189BD8E994 (U3CU3Ec_tDD9CC396183702571C4C341E88371927D9623BA8* __this, FieldInfo_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55CAB524459EBE11B81C4E5F0FDDD1A36A98C71B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .First(x => x.Name.EndsWith("__state"));
		FieldInfo_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_1, _stringLiteral55CAB524459EBE11B81C4E5F0FDDD1A36A98C71B, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		NullCheck(L_2);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001d:
	{
		// else if (ex != null)
		Exception_t* L_4 = __this->___ex_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_6 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
		L_7 = UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB(L_6, NULL);
		V_1 = L_7;
		goto IL_0042;
	}

IL_0039:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ex = exception;
		Exception_t* L_2 = ___exception0;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_3 = __this->___runnerPromise_0;
		Exception_t* L_4 = ___exception0;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// runnerPromise.SetResult();
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_2 = __this->___runner_0;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD(((int32_t)13), L_3, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		Exception_t* L_4 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m78FB8EB74959FB133CEA8EF57AE3A9A34643DA69(L_4, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_2 = __this->___runner_0;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD(((int32_t)13), L_3, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MinimumQueue_1_Enqueue_m6856CBE1A72F2CA43A9FB9EEEC5701AFC26E07FB_gshared_inline (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (size == array.Length)
		int32_t L_0 = (int32_t)__this->___size_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___array_2;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Grow();
		((  void (*) (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001e:
	{
		// array[tail] = item;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___array_2;
		int32_t L_4 = (int32_t)__this->___tail_4;
		RuntimeObject* L_5 = ___item0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		// MoveNext(ref tail);
		int32_t* L_6 = (int32_t*)(&__this->___tail_4);
		((  void (*) (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// size++;
		int32_t L_7 = (int32_t)__this->___size_5;
		__this->___size_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MinimumQueue_1_Dequeue_mF30823D3F40ADB73F256F2FAF08CEDF1186CD8EA_gshared_inline (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// if (size == 0) ThrowForEmptyQueue();
		int32_t L_0 = (int32_t)__this->___size_5;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (size == 0) ThrowForEmptyQueue();
		((  void (*) (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_0015:
	{
		// int head = this.head;
		int32_t L_2 = (int32_t)__this->___head_3;
		V_0 = L_2;
		// T[] array = this.array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___array_2;
		V_1 = L_3;
		// T removed = array[head];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// array[head] = default(T);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_10 = V_4;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (RuntimeObject*)L_10);
		// MoveNext(ref this.head);
		int32_t* L_11 = (int32_t*)(&__this->___head_3);
		((  void (*) (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// size--;
		int32_t L_12 = (int32_t)__this->___size_5;
		__this->___size_5 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		// return removed;
		RuntimeObject* L_13 = V_2;
		V_5 = L_13;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		RuntimeObject* L_14 = V_5;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MinimumQueue_1_get_Count_m0FE156817F95E94C1D1397B467D9D4172C338CC2_gshared_inline (MinimumQueue_1_t4DF0A80DC7F7469522DA1117D9EAE27792F0D433* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return size; }
		int32_t L_0 = (int32_t)__this->___size_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return size; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
