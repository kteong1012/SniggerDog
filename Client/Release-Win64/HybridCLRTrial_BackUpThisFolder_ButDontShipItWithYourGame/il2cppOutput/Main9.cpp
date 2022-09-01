#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<YooAsset.AsyncOperationBase>
struct Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<YooAsset.SceneOperationHandle>
struct Action_1_tC9A2B8C23FB07361EFAFDD3FC34948FC12C263AB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>
struct Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Byte[]>
struct IStateMachineRunnerPromise_1_t28DB56A59D7B08F313CFD668BAD55049F098EC19;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>
struct IStateMachineRunnerPromise_1_tDE5A582A56CD943C240DEE90935B51C23578A18B;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Byte[]>
struct IUniTaskSource_1_t035AD3D32FDF620415DD15FB63224FA4E49AD786;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
// Cysharp.Threading.Tasks.IUniTaskSource`1<UnityEngine.TextAsset>
struct IUniTaskSource_1_t555866A113EDAD522329F398D88A92D126786C20;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Byte[]>
struct KeyCollection_t2F188D57986FFD72350BDB82D3FC34EC26672DF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Byte[]>
struct ValueCollection_tA7DF40B33CAF1CC12CCC29F4547D85DA818303A7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Byte[]>[]
struct EntryU5BU5D_t2D643CC9045D88A19CABBC3D8D436E9CDB92BE10;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// YooAsset.AddressLocationServices
struct AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619;
// PostMainland.AppConst
struct AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44;
// System.Reflection.Assembly
struct Assembly_t;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// YooAsset.AssetInfo
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// YooAsset.BundleInfo
struct BundleInfo_t9765601F6F4EE4ABC6315E2C38FE429BFB5AB2F2;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// YooAsset.IDecryptionServices
struct IDecryptionServices_t72A8C817CBF8635B47CA0CEFA6700D0ADE92AA8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// YooAsset.ILocationServices
struct ILocationServices_t7928EA65D9C094DEFFD8BE071D2EAA3C6A05FE07;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F;
// PostMainland.LoadDll
struct LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C;
// PostMainland.Main
struct Main_t96A05F9E310A709E4C455D4220374621BA5FAC36;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// YooAsset.ProviderBase
struct ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758;
// YooAsset.RawFileOperation
struct RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// YooAsset.SceneOperationHandle
struct SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Type
struct Type_t;
// PostMainland.UnityLogger
struct UnityLogger_t06458336C88FA603662CBD20B7C41DDFBB9AF8BC;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// PostMainland.YooAssetsManager
struct YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278;
// PostMainland.LoadDll/<DownLoadDlls>d__5
struct U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// YooAsset.YooAssets/HostPlayModeParameters
struct HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B;
// YooAsset.YooAssets/InitializeParameters
struct InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE;
// FairyGUI.Utils.ZipReader/ZipEntry
struct ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08DDA34D2CB08600BE59C7A104864791DB79186F;
IL2CPP_EXTERN_C String_t* _stringLiteral0A32C142D3169BE735E6D22D213725020E0E4FCD;
IL2CPP_EXTERN_C String_t* _stringLiteral17F9087F18DF346F81A42DDF3E29BE4EB3DC674E;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0904794AA225B058D09D9F44679550F3014728;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6;
IL2CPP_EXTERN_C String_t* _stringLiteral543F5C57FC39284750082AD04C4EE9A0295EE386;
IL2CPP_EXTERN_C String_t* _stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8;
IL2CPP_EXTERN_C String_t* _stringLiteral60CA546AC1F5CB89972D586A5795126E5483648F;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8361DA020C3266EA96FF9E3147157259ABB13EEC;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA8F2BE4C8A0EE7F81F5528FE1AE3C85636376B8C;
IL2CPP_EXTERN_C String_t* _stringLiteralAE002B7FD7F0E5A229F68220E59B1BB11488731A;
IL2CPP_EXTERN_C String_t* _stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747;
IL2CPP_EXTERN_C String_t* _stringLiteralB2CF30CDF767E11A78CE0D5C65C604190A189F12;
IL2CPP_EXTERN_C String_t* _stringLiteralC8210CBC752FD7211DE9481E3F59D58263CA58D6;
IL2CPP_EXTERN_C String_t* _stringLiteralCD482D45B9ACB51A32833E88AE809C3743009694;
IL2CPP_EXTERN_C String_t* _stringLiteralD1F50D14FC7C614455F81DAEAB51931D335067E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D;
IL2CPP_EXTERN_C String_t* _stringLiteralE600E34C3B072D351406D75E140CA24D4A78FD5B;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4BFAB013E17610794032EB72F05531232C68D024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisSceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F_mDA79C5A2FADA99D3C5744445D350CAF48BAF4776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadDll_StartGame_m5BE4CB166DFB2E29E9D3C1C94C1D3804CA957E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownLoadDllsU3Ed__5_System_Collections_IEnumerator_Reset_m44965ABC41DD1F5FC494E9ED0F7501EB20E0D609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>
struct Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2D643CC9045D88A19CABBC3D8D436E9CDB92BE10* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2F188D57986FFD72350BDB82D3FC34EC26672DF3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA7DF40B33CAF1CC12CCC29F4547D85DA818303A7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// YooAsset.AddressLocationServices
struct AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619  : public RuntimeObject
{
};

// PostMainland.AppConst
struct AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44  : public RuntimeObject
{
};

struct AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields
{
	// System.String PostMainland.AppConst::HotfixDllBuildOutputDir
	String_t* ___HotfixDllBuildOutputDir_0;
	// System.String PostMainland.AppConst::HotfixDllBundleOutputDir
	String_t* ___HotfixDllBundleOutputDir_1;
	// System.String PostMainland.AppConst::ProtocalSerializationCodeDir
	String_t* ___ProtocalSerializationCodeDir_2;
	// System.String PostMainland.AppConst::HotfixCodesDir
	String_t* ___HotfixCodesDir_3;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032  : public RuntimeObject
{
	// System.Action`1<YooAsset.AsyncOperationBase> YooAsset.AsyncOperationBase::_callback
	Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF* ____callback_0;
	// YooAsset.EOperationStatus YooAsset.AsyncOperationBase::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.String YooAsset.AsyncOperationBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Single YooAsset.AsyncOperationBase::<Progress>k__BackingField
	float ___U3CProgressU3Ek__BackingField_3;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> YooAsset.AsyncOperationBase::_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ____taskCompletionSource_4;
};

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// YooAsset.OperationHandleBase
struct OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C  : public RuntimeObject
{
	// YooAsset.AssetInfo YooAsset.OperationHandleBase::_assetInfo
	AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ____assetInfo_0;
	// YooAsset.ProviderBase YooAsset.OperationHandleBase::<Provider>k__BackingField
	ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758* ___U3CProviderU3Ek__BackingField_1;
};

// HybridCLR.RuntimeApi
struct RuntimeApi_tE079806FE93DF498F7976CDA98C80E114292F70C  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// PostMainland.UnityExtensions
struct UnityExtensions_t1591645F28F3BCA26C7A139BA4FEDB7C75A0D95C  : public RuntimeObject
{
};

// PostMainland.UnityLogger
struct UnityLogger_t06458336C88FA603662CBD20B7C41DDFBB9AF8BC  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// PostMainland.YooAssetsManager
struct YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278  : public RuntimeObject
{
};

struct YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_StaticFields
{
	// PostMainland.YooAssetsManager PostMainland.YooAssetsManager::_instance
	YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* ____instance_0;
};

// PostMainland.LoadDll/<DownLoadDlls>d__5
struct U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A  : public RuntimeObject
{
	// System.Int32 PostMainland.LoadDll/<DownLoadDlls>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PostMainland.LoadDll/<DownLoadDlls>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PostMainland.LoadDll PostMainland.LoadDll/<DownLoadDlls>d__5::<>4__this
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* ___U3CU3E4__this_2;
	// System.Action PostMainland.LoadDll/<DownLoadDlls>d__5::onDownloadComplete
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDownloadComplete_3;
	// System.String[] PostMainland.LoadDll/<DownLoadDlls>d__5::<>7__wrap1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CU3E7__wrap1_4;
	// System.Int32 PostMainland.LoadDll/<DownLoadDlls>d__5::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;
	// System.String PostMainland.LoadDll/<DownLoadDlls>d__5::<ab>5__4
	String_t* ___U3CabU3E5__4_6;
	// UnityEngine.Networking.UnityWebRequest PostMainland.LoadDll/<DownLoadDlls>d__5::<www>5__5
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__5_7;
};

// YooAsset.YooAssets/InitializeParameters
struct InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE  : public RuntimeObject
{
	// System.Boolean YooAsset.YooAssets/InitializeParameters::LocationToLower
	bool ___LocationToLower_0;
	// YooAsset.ILocationServices YooAsset.YooAssets/InitializeParameters::LocationServices
	RuntimeObject* ___LocationServices_1;
	// YooAsset.IDecryptionServices YooAsset.YooAssets/InitializeParameters::DecryptionServices
	RuntimeObject* ___DecryptionServices_2;
	// System.Int32 YooAsset.YooAssets/InitializeParameters::AssetLoadingMaxNumber
	int32_t ___AssetLoadingMaxNumber_3;
	// System.Int64 YooAsset.YooAssets/InitializeParameters::OperationSystemMaxTimeSlice
	int64_t ___OperationSystemMaxTimeSlice_4;
};

// FairyGUI.Utils.ZipReader/ZipEntry
struct ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A  : public RuntimeObject
{
	// System.String FairyGUI.Utils.ZipReader/ZipEntry::name
	String_t* ___name_0;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::compress
	int32_t ___compress_1;
	// System.UInt32 FairyGUI.Utils.ZipReader/ZipEntry::crc
	uint32_t ___crc_2;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::size
	int32_t ___size_3;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::sourceSize
	int32_t ___sourceSize_4;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::offset
	int32_t ___offset_5;
	// System.Boolean FairyGUI.Utils.ZipReader/ZipEntry::isDirectory
	bool ___isDirectory_6;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>
struct AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___result_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>
struct AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	RuntimeObject* ___result_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Byte[]>
struct UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<UnityEngine.TextAsset>
struct UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
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

// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// YooAsset.RawFileOperation
struct RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// YooAsset.BundleInfo YooAsset.RawFileOperation::_bundleInfo
	BundleInfo_t9765601F6F4EE4ABC6315E2C38FE429BFB5AB2F2* ____bundleInfo_5;
	// System.String YooAsset.RawFileOperation::<CopyPath>k__BackingField
	String_t* ___U3CCopyPathU3Ek__BackingField_6;
};

// YooAsset.SceneOperationHandle
struct SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F  : public OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C
{
	// System.Action`1<YooAsset.SceneOperationHandle> YooAsset.SceneOperationHandle::_callback
	Action_1_tC9A2B8C23FB07361EFAFDD3FC34948FC12C263AB* ____callback_2;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=216
struct __StaticArrayInitTypeSizeU3D216_t49FE03028CA76951821F8B6840169F2934DC60C0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D216_t49FE03028CA76951821F8B6840169F2934DC60C0__padding[216];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t5D36F09DB888A3D39B9F339F5E2797E35A42DE69 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5D36F09DB888A3D39B9F339F5E2797E35A42DE69__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t462D765AD7FC1F591DB7DE266F496509963C9C6F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t462D765AD7FC1F591DB7DE266F496509963C9C6F__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80
struct __StaticArrayInitTypeSizeU3D80_tEFE1837C86CC412FB3EC9D32216429F8D12B0FA1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_tEFE1837C86CC412FB3EC9D32216429F8D12B0FA1__padding[80];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tD88BD57156924E64BEA0134742D78C8E748084A8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tD88BD57156924E64BEA0134742D78C8E748084A8__padding[96];
	};
};

// YooAsset.YooAssets/HostPlayModeParameters
struct HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B  : public InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE
{
	// System.String YooAsset.YooAssets/HostPlayModeParameters::DefaultHostServer
	String_t* ___DefaultHostServer_5;
	// System.String YooAsset.YooAssets/HostPlayModeParameters::FallbackHostServer
	String_t* ___FallbackHostServer_6;
	// System.Boolean YooAsset.YooAssets/HostPlayModeParameters::ClearCacheWhenDirty
	bool ___ClearCacheWhenDirty_7;
	// System.Int32 YooAsset.YooAssets/HostPlayModeParameters::BreakpointResumeFileSize
	int32_t ___BreakpointResumeFileSize_8;
	// YooAsset.EVerifyLevel YooAsset.YooAssets/HostPlayModeParameters::VerifyLevel
	int32_t ___VerifyLevel_9;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.TextAsset>
struct Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F ___task_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1AD16BF3144D2DFF517E63F08BC2E14578F1BC15  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t1AD16BF3144D2DFF517E63F08BC2E14578F1BC15_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::0D53D986AC9AC138A39C2D64E1588FCD87299A81C8ADD9ED9FD9D98955C8CCC5
	int64_t ___0D53D986AC9AC138A39C2D64E1588FCD87299A81C8ADD9ED9FD9D98955C8CCC5_0;
	// System.Int64 <PrivateImplementationDetails>::0EEE47048E50C250A2ADDB45A92446A0E929B91307560A759A5CFD44AD29DCE6
	int64_t ___0EEE47048E50C250A2ADDB45A92446A0E929B91307560A759A5CFD44AD29DCE6_1;
	// System.Int64 <PrivateImplementationDetails>::1F4870B08C47BFF9029BB6078DAD53700D95E592F9ED91103FD75B89C4537112
	int64_t ___1F4870B08C47BFF9029BB6078DAD53700D95E592F9ED91103FD75B89C4537112_2;
	// System.Int64 <PrivateImplementationDetails>::2B33DEA6CD38D4CE686C1D154716D6B7EF94321C797CBEB771D5581E59CC061F
	int64_t ___2B33DEA6CD38D4CE686C1D154716D6B7EF94321C797CBEB771D5581E59CC061F_3;
	// System.Int64 <PrivateImplementationDetails>::3375C0EBF42EB9560D400FCA92E7407C27D6246AD87E3AFAFB4AA10F3EDDDD1A
	int64_t ___3375C0EBF42EB9560D400FCA92E7407C27D6246AD87E3AFAFB4AA10F3EDDDD1A_4;
	// System.Int64 <PrivateImplementationDetails>::33ABAB3973FDD2036D9F9287F624B6D9ABD5DA6BFA58A02DADB7932188EFFF07
	int64_t ___33ABAB3973FDD2036D9F9287F624B6D9ABD5DA6BFA58A02DADB7932188EFFF07_5;
	// System.Int64 <PrivateImplementationDetails>::3629E8CDF2D4F629072F8463B3C49CD3AB93F695C4D4E33A9CABA6FB18EA8BAE
	int64_t ___3629E8CDF2D4F629072F8463B3C49CD3AB93F695C4D4E33A9CABA6FB18EA8BAE_6;
	// System.Int64 <PrivateImplementationDetails>::3CDF0387EAFF6E6E4EFF901E9E6CC7B4FA6358CC5AD83FF2BECCDBE64C4AA021
	int64_t ___3CDF0387EAFF6E6E4EFF901E9E6CC7B4FA6358CC5AD83FF2BECCDBE64C4AA021_7;
	// System.Int64 <PrivateImplementationDetails>::429D2BF09BBACDEB57473E7C76B01E6BF292AD1523953244632D8B01D9FE9085
	int64_t ___429D2BF09BBACDEB57473E7C76B01E6BF292AD1523953244632D8B01D9FE9085_8;
	// System.Int64 <PrivateImplementationDetails>::46CC7A59A429332A210CB4D933B1D4B5379398F0682CB775BC04F993C3D0B0AA
	int64_t ___46CC7A59A429332A210CB4D933B1D4B5379398F0682CB775BC04F993C3D0B0AA_9;
	// System.Int64 <PrivateImplementationDetails>::4F0AB0DA7BFC3F488135B803EF12279D108341F6F5872234676E438EA1F5BC44
	int64_t ___4F0AB0DA7BFC3F488135B803EF12279D108341F6F5872234676E438EA1F5BC44_10;
	// System.Int64 <PrivateImplementationDetails>::50E92C11B512B57563B4519FC45CC36931BE5EBB5C58B969BAD1C740677C582D
	int64_t ___50E92C11B512B57563B4519FC45CC36931BE5EBB5C58B969BAD1C740677C582D_11;
	// System.Int64 <PrivateImplementationDetails>::6039A839576CB450A68D98D9B3803789853EEDB9111A2EA5E6BBA91F701FE191
	int64_t ___6039A839576CB450A68D98D9B3803789853EEDB9111A2EA5E6BBA91F701FE191_12;
	// System.Int64 <PrivateImplementationDetails>::6D62730626CCC8B49CA5CF81AF4F7D2EF875E741DA3D8C6570488AEA013473DA
	int64_t ___6D62730626CCC8B49CA5CF81AF4F7D2EF875E741DA3D8C6570488AEA013473DA_13;
	// System.Int64 <PrivateImplementationDetails>::72B74EFC99D3B924ADDEA31E8DF371AC2918DD200D914B018CB7350448F23F0C
	int64_t ___72B74EFC99D3B924ADDEA31E8DF371AC2918DD200D914B018CB7350448F23F0C_14;
	// System.Int64 <PrivateImplementationDetails>::7F5323E27833E5ACD4967E9A8E009CCC1465419B8A02C7D3C7EC3AA52E71B2D4
	int64_t ___7F5323E27833E5ACD4967E9A8E009CCC1465419B8A02C7D3C7EC3AA52E71B2D4_15;
	// System.Int64 <PrivateImplementationDetails>::807911344F9807A1B582873D2F0F38B194E077DD886C3AFC830BC065EBF2CFAE
	int64_t ___807911344F9807A1B582873D2F0F38B194E077DD886C3AFC830BC065EBF2CFAE_16;
	// System.Int64 <PrivateImplementationDetails>::8908FCCC1DF13468816CA7A3A4FBB8A7F96FB3AC00BAA34D70C5397C9B88F9C4
	int64_t ___8908FCCC1DF13468816CA7A3A4FBB8A7F96FB3AC00BAA34D70C5397C9B88F9C4_17;
	// System.Int64 <PrivateImplementationDetails>::89B71AE7D45DE935FC05FF4BF4987BE1426359E2C389AD6149699D8050D0F75B
	int64_t ___89B71AE7D45DE935FC05FF4BF4987BE1426359E2C389AD6149699D8050D0F75B_18;
	// System.Int64 <PrivateImplementationDetails>::8DCFC69C77BE23ED6C460B27389CCC94F51C0A43E2947AD4FDFCBAA6C13EC607
	int64_t ___8DCFC69C77BE23ED6C460B27389CCC94F51C0A43E2947AD4FDFCBAA6C13EC607_19;
	// System.Int64 <PrivateImplementationDetails>::8EE9327ECC967FC1AB49834169C4F6C562D46189C5CFF4C25C084E82FB924BFA
	int64_t ___8EE9327ECC967FC1AB49834169C4F6C562D46189C5CFF4C25C084E82FB924BFA_20;
	// System.Int64 <PrivateImplementationDetails>::8F8DDC25F7C3822D3BE8C39FF1DE83005C8BAE2572F324A2F1E0E53AD5588E1E
	int64_t ___8F8DDC25F7C3822D3BE8C39FF1DE83005C8BAE2572F324A2F1E0E53AD5588E1E_21;
	// System.Int64 <PrivateImplementationDetails>::9291CB95205633E925E98E9CB0DB4912E4A7BF5B18F7557D52090962CC045ED1
	int64_t ___9291CB95205633E925E98E9CB0DB4912E4A7BF5B18F7557D52090962CC045ED1_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::98D1685B5E9C9FD24988D4F12B619330F10308FA20A82CC135A7D339A3B3F0CB
	__StaticArrayInitTypeSizeU3D64_t462D765AD7FC1F591DB7DE266F496509963C9C6F ___98D1685B5E9C9FD24988D4F12B619330F10308FA20A82CC135A7D339A3B3F0CB_23;
	// System.Int64 <PrivateImplementationDetails>::9C70DD87C645ADD1E55A15DD75BFC3980636D2EC17C832852F7616C8947C5524
	int64_t ___9C70DD87C645ADD1E55A15DD75BFC3980636D2EC17C832852F7616C8947C5524_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::A0EAAFC684A8BCF5FEEDF47A528FCEACF98A57D5CE1A9FD18201BD07010ACA4A
	__StaticArrayInitTypeSizeU3D80_tEFE1837C86CC412FB3EC9D32216429F8D12B0FA1 ___A0EAAFC684A8BCF5FEEDF47A528FCEACF98A57D5CE1A9FD18201BD07010ACA4A_25;
	// System.Int64 <PrivateImplementationDetails>::A9C5757FBFD31E7C729ED509C347B743BED698564E003AEA467DBC483FA0F4D9
	int64_t ___A9C5757FBFD31E7C729ED509C347B743BED698564E003AEA467DBC483FA0F4D9_26;
	// System.Int64 <PrivateImplementationDetails>::AD13E92D9C1D3305D4AFA5B2674500224AD34925FB6A767E825BD67C45332C3B
	int64_t ___AD13E92D9C1D3305D4AFA5B2674500224AD34925FB6A767E825BD67C45332C3B_27;
	// System.Int64 <PrivateImplementationDetails>::AE465A420BC05BA9297282F4201C8C25D7CBEFDCF3C220435F13110BCD642267
	int64_t ___AE465A420BC05BA9297282F4201C8C25D7CBEFDCF3C220435F13110BCD642267_28;
	// System.Int64 <PrivateImplementationDetails>::AFDFA8643900371FE41615B3C293ABD2511CC874390DF92EC2A79C227329333A
	int64_t ___AFDFA8643900371FE41615B3C293ABD2511CC874390DF92EC2A79C227329333A_29;
	// System.Int64 <PrivateImplementationDetails>::B3C846C9496A4C09CD134A48383754195F07F2CBB7FF09A5F7D053B31B03141B
	int64_t ___B3C846C9496A4C09CD134A48383754195F07F2CBB7FF09A5F7D053B31B03141B_30;
	// System.Int64 <PrivateImplementationDetails>::B586AA924B045960FF6BBC3D68DEA0A98B4B1BFFC64F90B9029AB72A5841856B
	int64_t ___B586AA924B045960FF6BBC3D68DEA0A98B4B1BFFC64F90B9029AB72A5841856B_31;
	// System.Int64 <PrivateImplementationDetails>::B99CF1EB09EDB7DC1869D9E6F54A8D60795752019177C8CF5F4E2755758C846F
	int64_t ___B99CF1EB09EDB7DC1869D9E6F54A8D60795752019177C8CF5F4E2755758C846F_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=216 <PrivateImplementationDetails>::B99E19B575DAEA6926B690C9B8B622902A7992D460C7E78AE72C12DF8A1B76D9
	__StaticArrayInitTypeSizeU3D216_t49FE03028CA76951821F8B6840169F2934DC60C0 ___B99E19B575DAEA6926B690C9B8B622902A7992D460C7E78AE72C12DF8A1B76D9_33;
	// System.Int64 <PrivateImplementationDetails>::C2AD3E40941848EBFD50C59D86CA2F0C6F10C5DBFAED314E8B3E49EB52C9B38E
	int64_t ___C2AD3E40941848EBFD50C59D86CA2F0C6F10C5DBFAED314E8B3E49EB52C9B38E_34;
	// System.Int64 <PrivateImplementationDetails>::C4508EFC736EAC1E91CA30F728EC3AE622E4360F93E6A7F557A5C7590C4E56DD
	int64_t ___C4508EFC736EAC1E91CA30F728EC3AE622E4360F93E6A7F557A5C7590C4E56DD_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::C4EB100C3C763F47842E818CE6C154E0FD34D2EC7108A3A68012BDB513BC7AE3
	__StaticArrayInitTypeSizeU3D36_t5D36F09DB888A3D39B9F339F5E2797E35A42DE69 ___C4EB100C3C763F47842E818CE6C154E0FD34D2EC7108A3A68012BDB513BC7AE3_36;
	// System.Int64 <PrivateImplementationDetails>::C94BE9E5997BFC7172BFF0E1698DA9ACC0DD14181040A90033F0AD0815979975
	int64_t ___C94BE9E5997BFC7172BFF0E1698DA9ACC0DD14181040A90033F0AD0815979975_37;
	// System.Int64 <PrivateImplementationDetails>::CAD276F8E0D6D4F23CBE291840AAC59B5D72E7D4A4078ED9719558145C37ADC3
	int64_t ___CAD276F8E0D6D4F23CBE291840AAC59B5D72E7D4A4078ED9719558145C37ADC3_38;
	// System.Int64 <PrivateImplementationDetails>::CED93B5430FE4CAFC5BFFF7C0A499B024657650D5A67770FD16C5CCB8C0D3B3A
	int64_t ___CED93B5430FE4CAFC5BFFF7C0A499B024657650D5A67770FD16C5CCB8C0D3B3A_39;
	// System.Int64 <PrivateImplementationDetails>::DAC2C0AEB7C896D6D8D4B54DBCA3B807C3ABAD013DCEDFF4C5D4DB412DD0F5A0
	int64_t ___DAC2C0AEB7C896D6D8D4B54DBCA3B807C3ABAD013DCEDFF4C5D4DB412DD0F5A0_40;
	// System.Int64 <PrivateImplementationDetails>::DDC0D2A22A9CB07513EDC1C5FE5890BD09CF5FBD58DAE047D70E9D3BBEC7BF33
	int64_t ___DDC0D2A22A9CB07513EDC1C5FE5890BD09CF5FBD58DAE047D70E9D3BBEC7BF33_41;
	// System.Int64 <PrivateImplementationDetails>::E2CB7C37304F6E20D427BA14E13C306CB5FB7B6CC9E6541A165225961BC36562
	int64_t ___E2CB7C37304F6E20D427BA14E13C306CB5FB7B6CC9E6541A165225961BC36562_42;
	// System.Int64 <PrivateImplementationDetails>::E79ED44CAC3EC1E173133141A47D3BD3564B09E991F40E9F557DB8A1B064988B
	int64_t ___E79ED44CAC3EC1E173133141A47D3BD3564B09E991F40E9F557DB8A1B064988B_43;
	// System.Int64 <PrivateImplementationDetails>::EA544CA6FD079BF61EBA836428B5D9EF2662A238CE9DF540D8667148A53321B2
	int64_t ___EA544CA6FD079BF61EBA836428B5D9EF2662A238CE9DF540D8667148A53321B2_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::F358F089F2B1C4134F6EA2EC349D724D1A21F0A73CDBEE63915B1AA162F93EDF
	__StaticArrayInitTypeSizeU3D96_tD88BD57156924E64BEA0134742D78C8E748084A8 ___F358F089F2B1C4134F6EA2EC349D724D1A21F0A73CDBEE63915B1AA162F93EDF_45;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
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

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6
struct U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18 
{
	// System.Int32 PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]> PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<>t__builder
	AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 ___U3CU3Et__builder_1;
	// System.String PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::location
	String_t* ___location_2;
	// YooAsset.RawFileOperation PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<handle>5__2
	RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* ___U3ChandleU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// PostMainland.Main/<Start>d__4
struct U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988 
{
	// System.Int32 PostMainland.Main/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder PostMainland.Main/<Start>d__4::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// PostMainland.Main PostMainland.Main/<Start>d__4::<>4__this
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* ___U3CU3E4__this_2;
	// UnityEngine.TextAsset PostMainland.Main/<Start>d__4::<dll>5__2
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___U3CdllU3E5__2_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter PostMainland.Main/<Start>d__4::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.TextAsset> PostMainland.Main/<Start>d__4::<>u__2
	Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 ___U3CU3Eu__2_5;
};

// PostMainland.YooAssetsManager/<Initialize>d__3
struct U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378 
{
	// System.Int32 PostMainland.YooAssetsManager/<Initialize>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder PostMainland.YooAssetsManager/<Initialize>d__3::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.UniTask/Awaiter PostMainland.YooAssetsManager/<Initialize>d__3::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_2;
};

// PostMainland.YooAssetsManager/<LoadSceneAsync>d__7
struct U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4 
{
	// System.Int32 PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// System.String PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::location
	String_t* ___location_2;
	// UnityEngine.SceneManagement.LoadSceneMode PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::sceneMode
	int32_t ___sceneMode_3;
	// System.Boolean PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::activateOnLoad
	bool ___activateOnLoad_4;
	// System.Int32 PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::priority
	int32_t ___priority_5;
	// Cysharp.Threading.Tasks.UniTask/Awaiter PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_6;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PostMainland.LoadDll
struct LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Reflection.Assembly PostMainland.LoadDll::_gameAss
	Assembly_t* ____gameAss_4;
};

struct LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]> PostMainland.LoadDll::_abBytes
	Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* ____abBytes_5;
	// UnityEngine.AssetBundle PostMainland.LoadDll::<AssemblyAssetBundle>k__BackingField
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___U3CAssemblyAssetBundleU3Ek__BackingField_6;
};

// PostMainland.Main
struct Main_t96A05F9E310A709E4C455D4220374621BA5FAC36  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action PostMainland.Main::_game_Update
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_Update_4;
	// System.Action PostMainland.Main::_game_FixedUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_FixedUpdate_5;
	// System.Action PostMainland.Main::_game_LateUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_LateUpdate_6;
	// System.Action PostMainland.Main::_game_OnApplicationQuit
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_OnApplicationQuit_7;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<PostMainland.Main/<Start>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,PostMainland.Main/<Start>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* ___stateMachine1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> PostMainland.YooAssetsManager::LoadAsync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 YooAssetsManager_LoadAsync_TisRuntimeObject_mF9F9FE418962479FB1C20F99F1B9343A190B10CA_gshared (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, String_t* ___location0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>,PostMainland.Main/<Start>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_mA583A335983A79D6A2C95AF0C0EE038F1B0FC765_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* ___stateMachine1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<PostMainland.YooAssetsManager/<Initialize>d__3>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF AsyncUniTaskMethodBuilder_1_Create_m3C3532D6852355DB15DB2854C207462C3F580CBC_gshared_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Start<PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m25375A60065B097DE897F9728C326D073E2DAB10_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<PostMainland.YooAssetsManager/<LoadSceneAsync>d__7>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m6E84075CB490BF6A8482C654CFEE9B330FBD15CB_gshared (RuntimeObject* ___enumerator0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,PostMainland.YooAssetsManager/<Initialize>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m91452026077DB7BD9138130D844279D19DF9790D_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetResult(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetStateMachine_m8A43AF59E5FC7FC4CA56454D17EC7F00FDD57916_gshared (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,PostMainland.YooAssetsManager/<LoadSceneAsync>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70 (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PostMainland.LoadDll::DownLoadDlls(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadDll_DownLoadDlls_mE8C3BE4FB286F0FF54AA7483B4211323B5503BA2 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDownloadComplete0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>::get_Item(TKey)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__5__ctor_m88CCD785606EE28622C4C17046C9CFB13B3AEF92 (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PostMainland.LoadDll::LoadGameDll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_LoadGameDll_m1091A1029AAAFBD6795EFBF3BEEF72B9662709BE (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) ;
// System.Void PostMainland.LoadDll::RunMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_RunMain_mA61446BDCB892878DF8EFF8E2A01CE9C060BE12C (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) ;
// System.Byte[] PostMainland.LoadDll::GetAbBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LoadDll_GetAbBytes_mD9C98BA3700CB7BDD29464FEA4A6AD98EC01889C (String_t* ___dllName0, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundle_LoadFromMemory_m1F7131801BA50A09B382DDD86F3B80194B7B1FFE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___binary0, const RuntimeMethod* method) ;
// System.Void PostMainland.LoadDll::set_AssemblyAssetBundle(UnityEngine.AssetBundle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadDll_set_AssemblyAssetBundle_m97F94D8411D37EEABF2207A9F6DCB1C6B108BCD2_inline (AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (AssetBundle_tB38418819A49060CD738CB21541649340F082943*, String_t*, const RuntimeMethod*))AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared)(__this, ___name0, method);
}
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_m53BD3A59473E6A3620D8F055191025D1E3C2D298 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawAssembly0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m689511E72BD71ADDAE4684F065083FB23CA7182F (Assembly_t* ___left0, Assembly_t* ___right1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>::.ctor()
inline void Dictionary_2__ctor_m4BFAB013E17610794032EB72F05531232C68D024 (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String PostMainland.LoadDll::GetWebRequestPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadDll_GetWebRequestPath_m050F90E93627404CBC62EBCE20E85EBA186F97D3 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, String_t* ___asset0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* __this, String_t* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void PostMainland.UnityLogger::Debug(TouchSocket.Core.Log.LogType,System.Object,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_Debug_mA86C29A4CE681ED26DE045312DBD17A1ACF3BF8F (UnityLogger_t06458336C88FA603662CBD20B7C41DDFBB9AF8BC* __this, int32_t ___logType0, RuntimeObject* ___source1, String_t* ___message2, Exception_t* ___exception3, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<PostMainland.Main/<Start>d__4>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10_gshared)(__this, ___stateMachine0, method);
}
// PostMainland.YooAssetsManager PostMainland.YooAssetsManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline (const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask PostMainland.YooAssetsManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 YooAssetsManager_Initialize_m922A65DA635D75650ECA8F6DC141A853050AC4AA (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,PostMainland.Main/<Start>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> PostMainland.YooAssetsManager::LoadAsync<UnityEngine.TextAsset>(System.String)
inline UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, String_t* ___location0, const RuntimeMethod* method)
{
	return ((  UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F (*) (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278*, String_t*, const RuntimeMethod*))YooAssetsManager_LoadAsync_TisRuntimeObject_mF9F9FE418962479FB1C20F99F1B9343A190B10CA_gshared)(__this, ___location0, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<UnityEngine.TextAsset>::GetAwaiter()
inline Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_inline (UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 (*) (UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F*, const RuntimeMethod*))UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.TextAsset>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_inline (Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.TextAsset>,PostMainland.Main/<Start>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* ___awaiter0, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6*, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_mA583A335983A79D6A2C95AF0C0EE038F1B0FC765_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.TextAsset>::GetResult()
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_inline (Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* __this, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mAE493D99239E2456319BA641A32236E6FE2B4E31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawAssembly0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawSymbolStore1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void PostMainland.Main/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_MoveNext_m315A9242F905F95BC1641742A70CB0C9578450DB (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void PostMainland.Main/<Start>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_SetStateMachine_mCEFA57BC87E6190D8C7378BF900A3445B8959DFC (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___componentType0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<PostMainland.YooAssetsManager/<Initialize>d__3>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::Create()
inline AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_m3C3532D6852355DB15DB2854C207462C3F580CBC_gshared_inline)(method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::Start<PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m25375A60065B097DE897F9728C326D073E2DAB10_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::get_Task()
inline UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<PostMainland.YooAssetsManager/<LoadSceneAsync>d__7>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void PostMainland.YooAssetsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsManager__ctor_m2B6EC44010DA0BD63EA0FCA41A2B7826352E85FE (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.YooAssets/HostPlayModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostPlayModeParameters__ctor_mD35D77EC62EA77A9D67038C3F62692BA200371B9 (HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.AddressLocationServices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressLocationServices__ctor_mB0E43B397A437F46B481E32DFDD1B774ADE99462 (AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619* __this, const RuntimeMethod* method) ;
// YooAsset.InitializationOperation YooAsset.YooAssets::InitializeAsync(YooAsset.YooAssets/InitializeParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* YooAssets_InitializeAsync_mC9FEFFCFD61AC4A38830A6D1BFBFCD378C1E2759 (InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE* ___parameters0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.InitializationOperation>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D (InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* ___enumerator0, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m6E84075CB490BF6A8482C654CFEE9B330FBD15CB_gshared)(___enumerator0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,PostMainland.YooAssetsManager/<Initialize>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void PostMainland.YooAssetsManager/<Initialize>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__3_MoveNext_m7522FB79A23BF1D356B0839901B849CDAE45CF0C (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void PostMainland.YooAssetsManager/<Initialize>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__3_SetStateMachine_m3E1C4268E1C7C928EF597295A026A698EC656C43 (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// YooAsset.RawFileOperation YooAsset.YooAssets::GetRawFileAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* YooAssets_GetRawFileAsync_m59D986EC97A2793858678A6E52CD527E8FA324AB (String_t* ___location0, String_t* ___copyPath1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task YooAsset.AsyncOperationBase::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncOperationBase_get_Task_mDCC715C92A8AAAB23175397B4452528F260A1481 (AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m91452026077DB7BD9138130D844279D19DF9790D_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Byte[] YooAsset.RawFileOperation::LoadFileData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RawFileOperation_LoadFileData_m703E814C436B47F1E57A263303E46A5FFAAB71D1 (RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline)(__this, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::SetResult(T)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline)(__this, ___result0, method);
}
// System.Void PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadRawFileBytesAsyncU3Ed__6_MoveNext_mB4C1186E3FF4CE7496FC614BF59AFF54F94E5CA0 (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5 (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_m8A43AF59E5FC7FC4CA56454D17EC7F00FDD57916_gshared)(__this, ___stateMachine0, method);
}
// System.Void PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadRawFileBytesAsyncU3Ed__6_SetStateMachine_m182CBA2D554B3B483D91003DB4D4607E9404C439 (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// YooAsset.SceneOperationHandle YooAsset.YooAssets::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* YooAssets_LoadSceneAsync_m6A091503A06167B63706A3FFC68C644E0D9D6E37 (String_t* ___location0, int32_t ___sceneMode1, bool ___activateOnLoad2, int32_t ___priority3, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.SceneOperationHandle>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisSceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F_mDA79C5A2FADA99D3C5744445D350CAF48BAF4776 (SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* ___enumerator0, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m6E84075CB490BF6A8482C654CFEE9B330FBD15CB_gshared)(___enumerator0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,PostMainland.YooAssetsManager/<LoadSceneAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__7_MoveNext_mB09A630EB4B183BAAE51E86AB2BE0DFB6BE8CECA (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* __this, const RuntimeMethod* method) ;
// System.Void PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__7_SetStateMachine_m35E73FD0547F96A7DB5F20E4071C26CC5B2A1780 (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RuntimeApi_LoadMetadataForAOTAssembly(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RuntimeApi_GetInterpreterThreadObjectStackSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RuntimeApi_SetInterpreterThreadObjectStackSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RuntimeApi_GetInterpreterThreadFrameStackSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RuntimeApi_SetInterpreterThreadFrameStackSize(int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FairyGUI.Utils.ZipReader/ZipEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry__ctor_mB8BCD4C0C187A490E08A06DBB47331F84233C7DC (ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* __this, const RuntimeMethod* method) 
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
// System.Int32 HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_m157A1BE6A776A71FBEE3C07EEA68D3FCED464D60 (intptr_t ___dllBytes0, int32_t ___dllSize1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_LoadMetadataForAOTAssembly", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RuntimeApi_LoadMetadataForAOTAssembly)(___dllBytes0, ___dllSize1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___dllBytes0, ___dllSize1);
	#endif

	return returnValue;
}
// System.Int32 HybridCLR.RuntimeApi::GetInterpreterThreadObjectStackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetInterpreterThreadObjectStackSize_m4840EEACE7BCB3365A5A1A5A29AD371B975C09BF (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_GetInterpreterThreadObjectStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RuntimeApi_GetInterpreterThreadObjectStackSize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void HybridCLR.RuntimeApi::SetInterpreterThreadObjectStackSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetInterpreterThreadObjectStackSize_mFB1B3B661001897437CB3A697C2B89A0A75AA40B (int32_t ___size0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_SetInterpreterThreadObjectStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	reinterpret_cast<PInvokeFunc>(RuntimeApi_SetInterpreterThreadObjectStackSize)(___size0);
	#else
	il2cppPInvokeFunc(___size0);
	#endif

}
// System.Int32 HybridCLR.RuntimeApi::GetInterpreterThreadFrameStackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetInterpreterThreadFrameStackSize_mD6C968E68076BC03C43AEB0DF4D188DF57E15F48 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_GetInterpreterThreadFrameStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RuntimeApi_GetInterpreterThreadFrameStackSize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void HybridCLR.RuntimeApi::SetInterpreterThreadFrameStackSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetInterpreterThreadFrameStackSize_mF511E871BD7E10A9B808289AE1E1300854525B62 (int32_t ___size0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_SetInterpreterThreadFrameStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	reinterpret_cast<PInvokeFunc>(RuntimeApi_SetInterpreterThreadFrameStackSize)(___size0);
	#else
	il2cppPInvokeFunc(___size0);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PostMainland.AppConst::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConst__ctor_m69E3A213EE2F473C9E5DFCF1408C80E153C349DB (AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PostMainland.AppConst::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConst__cctor_m2DF938066CFCF5BCF2F4E6C5170E9CDA6886535E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08DDA34D2CB08600BE59C7A104864791DB79186F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60CA546AC1F5CB89972D586A5795126E5483648F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8361DA020C3266EA96FF9E3147157259ABB13EEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1F50D14FC7C614455F81DAEAB51931D335067E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string HotfixDllBuildOutputDir = "./Temp/Bin/Debug";
		((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___HotfixDllBuildOutputDir_0 = _stringLiteral60CA546AC1F5CB89972D586A5795126E5483648F;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___HotfixDllBuildOutputDir_0), (void*)_stringLiteral60CA546AC1F5CB89972D586A5795126E5483648F);
		// public static string HotfixDllBundleOutputDir = "Assets/Bundles/HotfixDll";
		((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___HotfixDllBundleOutputDir_1 = _stringLiteral8361DA020C3266EA96FF9E3147157259ABB13EEC;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___HotfixDllBundleOutputDir_1), (void*)_stringLiteral8361DA020C3266EA96FF9E3147157259ABB13EEC);
		// public static string ProtocalSerializationCodeDir = "../Src/ProtocalSerializationCode/";
		((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___ProtocalSerializationCodeDir_2 = _stringLiteral08DDA34D2CB08600BE59C7A104864791DB79186F;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___ProtocalSerializationCodeDir_2), (void*)_stringLiteral08DDA34D2CB08600BE59C7A104864791DB79186F);
		// public static string HotfixCodesDir = "Assets/_MainProject/Hotfix";
		((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___HotfixCodesDir_3 = _stringLiteralD1F50D14FC7C614455F81DAEAB51931D335067E0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_StaticFields*)il2cpp_codegen_static_fields_for(AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var))->___HotfixCodesDir_3), (void*)_stringLiteralD1F50D14FC7C614455F81DAEAB51931D335067E0);
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
// System.Void PostMainland.LoadDll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_Start_m9E3CE25823AFCF58FC591A19275B09E1369FA25F (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_StartGame_m5BE4CB166DFB2E29E9D3C1C94C1D3804CA957E94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.runInBackground = true;
		Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70((bool)1, NULL);
		// StartCoroutine(DownLoadDlls(this.StartGame));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)LoadDll_StartGame_m5BE4CB166DFB2E29E9D3C1C94C1D3804CA957E94_RuntimeMethod_var), NULL);
		RuntimeObject* L_1;
		L_1 = LoadDll_DownLoadDlls_mE8C3BE4FB286F0FF54AA7483B4211323B5503BA2(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Byte[] PostMainland.LoadDll::GetAbBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LoadDll_GetAbBytes_mD9C98BA3700CB7BDD29464FEA4A6AD98EC01889C (String_t* ___dllName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _abBytes[dllName];
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* L_0 = ((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->____abBytes_5;
		String_t* L_1 = ___dllName0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E(L_0, L_1, Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E_RuntimeMethod_var);
		return L_2;
	}
}
// System.String PostMainland.LoadDll::GetWebRequestPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadDll_GetWebRequestPath_m050F90E93627404CBC62EBCE20E85EBA186F97D3 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, String_t* ___asset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var path = $"{Application.streamingAssetsPath}/{asset}";
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD(NULL);
		String_t* L_1 = ___asset0;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		V_0 = L_2;
		// if (!path.Contains("://"))
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_3, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// path = "file://" + path;
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_5, NULL);
		V_0 = L_6;
	}

IL_002a:
	{
		// return path;
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator PostMainland.LoadDll::DownLoadDlls(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadDll_DownLoadDlls_mE8C3BE4FB286F0FF54AA7483B4211323B5503BA2 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDownloadComplete0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* L_0 = (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A*)il2cpp_codegen_object_new(U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownLoadDllsU3Ed__5__ctor_m88CCD785606EE28622C4C17046C9CFB13B3AEF92(L_0, 0, NULL);
		U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___onDownloadComplete0;
		NullCheck(L_2);
		L_2->___onDownloadComplete_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onDownloadComplete_3), (void*)L_3);
		return L_2;
	}
}
// System.Void PostMainland.LoadDll::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_StartGame_m5BE4CB166DFB2E29E9D3C1C94C1D3804CA957E94 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	{
		// LoadGameDll();
		LoadDll_LoadGameDll_m1091A1029AAAFBD6795EFBF3BEEF72B9662709BE(__this, NULL);
		// RunMain();
		LoadDll_RunMain_mA61446BDCB892878DF8EFF8E2A01CE9C060BE12C(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.AssetBundle PostMainland.LoadDll::get_AssemblyAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* LoadDll_get_AssemblyAssetBundle_m3E287A85FF6E9080C888773A81BA0559FA172DAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AssetBundle AssemblyAssetBundle { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = ((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void PostMainland.LoadDll::set_AssemblyAssetBundle(UnityEngine.AssetBundle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_set_AssemblyAssetBundle_m97F94D8411D37EEABF2207A9F6DCB1C6B108BCD2 (AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AssetBundle AssemblyAssetBundle { get; private set; }
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void PostMainland.LoadDll::LoadGameDll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_LoadGameDll_m1091A1029AAAFBD6795EFBF3BEEF72B9662709BE (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD482D45B9ACB51A32833E88AE809C3743009694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_0 = NULL;
	{
		// AssetBundle dllAB = AssemblyAssetBundle = AssetBundle.LoadFromMemory(GetAbBytes("common"));
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = LoadDll_GetAbBytes_mD9C98BA3700CB7BDD29464FEA4A6AD98EC01889C(_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_1;
		L_1 = AssetBundle_LoadFromMemory_m1F7131801BA50A09B382DDD86F3B80194B7B1FFE(L_0, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_2 = L_1;
		LoadDll_set_AssemblyAssetBundle_m97F94D8411D37EEABF2207A9F6DCB1C6B108BCD2_inline(L_2, NULL);
		// TextAsset dllBytes = dllAB.LoadAsset<TextAsset>("Hotfix.dll.bytes");
		NullCheck(L_2);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_3;
		L_3 = AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A(L_2, _stringLiteralCD482D45B9ACB51A32833E88AE809C3743009694, AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A_RuntimeMethod_var);
		V_0 = L_3;
		// _gameAss = System.Reflection.Assembly.Load(dllBytes.bytes);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_4, NULL);
		Assembly_t* L_6;
		L_6 = Assembly_Load_m53BD3A59473E6A3620D8F055191025D1E3C2D298(L_5, NULL);
		__this->____gameAss_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameAss_4), (void*)L_6);
		// }
		return;
	}
}
// System.Void PostMainland.LoadDll::RunMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_RunMain_mA61446BDCB892878DF8EFF8E2A01CE9C060BE12C (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2CF30CDF767E11A78CE0D5C65C604190A189F12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8210CBC752FD7211DE9481E3F59D58263CA58D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_gameAss == null)
		Assembly_t* L_0 = __this->____gameAss_4;
		bool L_1;
		L_1 = Assembly_op_Equality_m689511E72BD71ADDAE4684F065083FB23CA7182F(L_0, (Assembly_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// UnityEngine.Debug.LogError("dll???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB2CF30CDF767E11A78CE0D5C65C604190A189F12, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// var appType = _gameAss.GetType("App");
		Assembly_t* L_2 = __this->____gameAss_4;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(78 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_2, _stringLiteralC8210CBC752FD7211DE9481E3F59D58263CA58D6);
		// var mainMethod = appType.GetMethod("Main");
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_3, _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		// mainMethod.Invoke(null, null);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_4, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// }
		return;
	}
}
// System.Void PostMainland.LoadDll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll__ctor_m0425BBC86B17E24E8AA1E889A34636420B3FF0A5 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PostMainland.LoadDll::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll__cctor_mDE64F01FECB6230D5CCB065813A008F2576B74EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4BFAB013E17610794032EB72F05531232C68D024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, byte[]> _abBytes = new Dictionary<string, byte[]>();
		Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* L_0 = (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D*)il2cpp_codegen_object_new(Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4BFAB013E17610794032EB72F05531232C68D024(L_0, Dictionary_2__ctor_m4BFAB013E17610794032EB72F05531232C68D024_RuntimeMethod_var);
		((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->____abBytes_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->____abBytes_5), (void*)L_0);
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
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__5__ctor_m88CCD785606EE28622C4C17046C9CFB13B3AEF92 (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__5_System_IDisposable_Dispose_m49CDF06AE65F01CE1CA0496A45EC4F60F0F1519A (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PostMainland.LoadDll/<DownLoadDlls>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownLoadDllsU3Ed__5_MoveNext_m82626DC806371A7EE33AB6107C41598DB72C6628 (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral543F5C57FC39284750082AD04C4EE9A0295EE386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8F2BE4C8A0EE7F81F5528FE1AE3C85636376B8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	String_t* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var abs = new string[]
		// {
		//     "common",
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		V_2 = L_5;
		// foreach (var ab in abs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_2;
		__this->___U3CU3E7__wrap1_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)L_6);
		__this->___U3CU3E7__wrap2_5 = 0;
		goto IL_0123;
	}

IL_0043:
	{
		// foreach (var ab in abs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___U3CU3E7__wrap1_4;
		int32_t L_8 = __this->___U3CU3E7__wrap2_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3CabU3E5__4_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabU3E5__4_6), (void*)L_10);
		// string dllPath = GetWebRequestPath(ab);
		LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* L_11 = V_1;
		String_t* L_12 = __this->___U3CabU3E5__4_6;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = LoadDll_GetWebRequestPath_m050F90E93627404CBC62EBCE20E85EBA186F97D3(L_11, L_12, NULL);
		V_3 = L_13;
		// Debug.Log($"start download ab:{ab}");
		String_t* L_14 = __this->___U3CabU3E5__4_6;
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral543F5C57FC39284750082AD04C4EE9A0295EE386, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_15, NULL);
		// UnityWebRequest www = UnityWebRequest.Get(dllPath);
		String_t* L_16 = V_3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17;
		L_17 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_16, NULL);
		__this->___U3CwwwU3E5__5_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__5_7), (void*)L_17);
		// yield return www.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___U3CwwwU3E5__5_7;
		NullCheck(L_18);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_19;
		L_19 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_18, NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (www.result != UnityWebRequest.Result.Success)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CwwwU3E5__5_7;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_20, NULL);
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_00c5;
		}
	}
	{
		// Debug.Log(www.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CwwwU3E5__5_7;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
		goto IL_0107;
	}

IL_00c5:
	{
		// byte[] abBytes = www.downloadHandler.data;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwwwU3E5__5_7;
		NullCheck(L_24);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_25;
		L_25 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_24, NULL);
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_25, NULL);
		V_4 = L_26;
		// Debug.Log($"dll:{ab}  size:{abBytes.Length}");
		String_t* L_27 = __this->___U3CabU3E5__4_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = ((int32_t)(((RuntimeArray*)L_28)->max_length));
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31;
		L_31 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA8F2BE4C8A0EE7F81F5528FE1AE3C85636376B8C, L_27, L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_31, NULL);
		// _abBytes[ab] = abBytes;
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* L_32 = ((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->____abBytes_5;
		String_t* L_33 = __this->___U3CabU3E5__4_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_4;
		NullCheck(L_32);
		Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F(L_32, L_33, L_34, Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F_RuntimeMethod_var);
	}

IL_0107:
	{
		// }
		__this->___U3CwwwU3E5__5_7 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__5_7), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CabU3E5__4_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabU3E5__4_6), (void*)(String_t*)NULL);
		int32_t L_35 = __this->___U3CU3E7__wrap2_5;
		__this->___U3CU3E7__wrap2_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0123:
	{
		// foreach (var ab in abs)
		int32_t L_36 = __this->___U3CU3E7__wrap2_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___U3CU3E7__wrap1_4;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		__this->___U3CU3E7__wrap1_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// onDownloadComplete();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_38 = __this->___onDownloadComplete_3;
		NullCheck(L_38);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_38, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PostMainland.LoadDll/<DownLoadDlls>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownLoadDllsU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7203BE7C195D96DE27403259CE72E3A9788108C4 (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__5_System_Collections_IEnumerator_Reset_m44965ABC41DD1F5FC494E9ED0F7501EB20E0D609 (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownLoadDllsU3Ed__5_System_Collections_IEnumerator_Reset_m44965ABC41DD1F5FC494E9ED0F7501EB20E0D609_RuntimeMethod_var)));
	}
}
// System.Object PostMainland.LoadDll/<DownLoadDlls>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownLoadDllsU3Ed__5_System_Collections_IEnumerator_get_Current_mF21FD84FD0AD09F440B875C67D45140DA214F718 (U3CDownLoadDllsU3Ed__5_tB622A9D9596D628942D71484C05F7709E7349B5A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void PostMainland.UnityLogger::Debug(TouchSocket.Core.Log.LogType,System.Object,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_Debug_mA86C29A4CE681ED26DE045312DBD17A1ACF3BF8F (UnityLogger_t06458336C88FA603662CBD20B7C41DDFBB9AF8BC* __this, int32_t ___logType0, RuntimeObject* ___source1, String_t* ___message2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_002a;
	}

IL_0014:
	{
		// UnityEngine.Debug.Log(message);
		String_t* L_1 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// break;
		goto IL_002a;
	}

IL_001c:
	{
		// UnityEngine.Debug.LogWarning(message);
		String_t* L_2 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_2, NULL);
		// break;
		goto IL_002a;
	}

IL_0024:
	{
		// UnityEngine.Debug.LogError(message);
		String_t* L_3 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
	}

IL_002a:
	{
		// if (exception != null)
		Exception_t* L_4 = ___exception3;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// UnityEngine.Debug.LogException(exception);
		Exception_t* L_5 = ___exception3;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void PostMainland.UnityLogger::Debug(TouchSocket.Core.Log.LogType,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_Debug_m2B3022A0D963B7F8CD3294B2FFDB874B272AC8D1 (UnityLogger_t06458336C88FA603662CBD20B7C41DDFBB9AF8BC* __this, int32_t ___logType0, RuntimeObject* ___source1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// Debug(logType, source, message, null);
		int32_t L_0 = ___logType0;
		RuntimeObject* L_1 = ___source1;
		String_t* L_2 = ___message2;
		UnityLogger_Debug_mA86C29A4CE681ED26DE045312DBD17A1ACF3BF8F(__this, L_0, L_1, L_2, (Exception_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void PostMainland.UnityLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger__ctor_m0D02BEB7000B9F8DBE4E50D249614D90C4AAF9BA (UnityLogger_t06458336C88FA603662CBD20B7C41DDFBB9AF8BC* __this, const RuntimeMethod* method) 
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
// System.Void PostMainland.Main::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Start_m67B8E8F063838E32A74D584FD2D8E00AA7D9EC66 (Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10_RuntimeMethod_var);
		return;
	}
}
// System.Void PostMainland.Main::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Update_mEA75A7751E70DD6F52711D413CD5994EBC8EA99A (Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _game_Update?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->____game_Update_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void PostMainland.Main::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_FixedUpdate_mEC061BD79B1149CE0A0363934B012D8B47B279EE (Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _game_FixedUpdate?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->____game_FixedUpdate_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void PostMainland.Main::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_LateUpdate_m3D225AF089E1282F4D1AE9F994486BE5A967099A (Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _game_LateUpdate?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->____game_LateUpdate_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void PostMainland.Main::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_OnApplicationQuit_m225E47C3569180ABBD2E591936C100065B293C8E (Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _game_OnApplicationQuit?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->____game_OnApplicationQuit_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void PostMainland.Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_mBD1B5AFF91C300095F397010747617655299B3BE (Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PostMainland.Main/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_MoveNext_m315A9242F905F95BC1641742A70CB0C9578450DB (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A32C142D3169BE735E6D22D213725020E0E4FCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F9087F18DF346F81A42DDF3E29BE4EB3DC674E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0904794AA225B058D09D9F44679550F3014728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE002B7FD7F0E5A229F68220E59B1BB11488731A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE600E34C3B072D351406D75E140CA24D4A78FD5B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* V_1 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	MethodInfo_t* V_5 = NULL;
	MethodInfo_t* V_6 = NULL;
	MethodInfo_t* V_7 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_10 = NULL;
	Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Delegate_t* G_B14_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B16_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B16_1 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B15_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B15_1 = NULL;
	Delegate_t* G_B17_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B17_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B17_2 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B19_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B19_1 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B18_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B18_1 = NULL;
	Delegate_t* G_B20_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B20_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B20_2 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B22_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B22_1 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B21_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B21_1 = NULL;
	Delegate_t* G_B23_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B23_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B23_2 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B25_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B25_1 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B24_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B24_1 = NULL;
	Delegate_t* G_B26_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B26_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B26_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0068_1;
				}
				case 1:
				{
					goto IL_00d3_1;
				}
				case 2:
				{
					goto IL_0148_1;
				}
			}
		}
		{
			// Application.runInBackground = true;
			Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70((bool)1, NULL);
			// await YooAssetsManager.Instance.Initialize();
			il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
			YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_3;
			L_3 = YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline(NULL);
			NullCheck(L_3);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
			L_4 = YooAssetsManager_Initialize_m922A65DA635D75650ECA8F6DC141A853050AC4AA(L_3, NULL);
			V_9 = L_4;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_5;
			L_5 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_5;
			bool L_6;
			L_6 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_6)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8 = V_8;
			__this->___U3CU3Eu__1_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178(L_9, (&V_8), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178_RuntimeMethod_var);
			goto IL_02b4;
		}

IL_0068_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_10 = __this->___U3CU3Eu__1_4;
			V_8 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_11 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_11, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0085_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
			// var dll = await YooAssetsManager.Instance.LoadAsync<TextAsset>("HotfixDll_Code.dll");
			il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
			YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_13;
			L_13 = YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline(NULL);
			NullCheck(L_13);
			UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F L_14;
			L_14 = YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B(L_13, _stringLiteral0A32C142D3169BE735E6D22D213725020E0E4FCD, YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B_RuntimeMethod_var);
			V_12 = L_14;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_15;
			L_15 = UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_inline((&V_12), UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_RuntimeMethod_var);
			V_11 = L_15;
			bool L_16;
			L_16 = Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_inline((&V_11), Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_00f0_1;
			}
		}
		{
			int32_t L_17 = 1;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_18 = V_11;
			__this->___U3CU3Eu__2_5 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_5))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_5))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659(L_19, (&V_11), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659_RuntimeMethod_var);
			goto IL_02b4;
		}

IL_00d3_1:
		{
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_20 = __this->___U3CU3Eu__2_5;
			V_11 = L_20;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* L_21 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_00f0_1:
		{
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_23;
			L_23 = Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_inline((&V_11), Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_RuntimeMethod_var);
			V_10 = L_23;
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_24 = V_10;
			__this->___U3CdllU3E5__2_3 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllU3E5__2_3), (void*)L_24);
			// var pdb = await YooAssetsManager.Instance.LoadAsync<TextAsset>("HotfixDll_Code.pdb");
			il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
			YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_25;
			L_25 = YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline(NULL);
			NullCheck(L_25);
			UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F L_26;
			L_26 = YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B(L_25, _stringLiteralE600E34C3B072D351406D75E140CA24D4A78FD5B, YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B_RuntimeMethod_var);
			V_12 = L_26;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_27;
			L_27 = UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_inline((&V_12), UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_RuntimeMethod_var);
			V_11 = L_27;
			bool L_28;
			L_28 = Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_inline((&V_11), Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_0165_1;
			}
		}
		{
			int32_t L_29 = 2;
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_30 = V_11;
			__this->___U3CU3Eu__2_5 = L_30;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_5))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_5))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_31 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659(L_31, (&V_11), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659_RuntimeMethod_var);
			goto IL_02b4;
		}

IL_0148_1:
		{
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_32 = __this->___U3CU3Eu__2_5;
			V_11 = L_32;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* L_33 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_33, sizeof(Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6));
			int32_t L_34 = (-1);
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
		}

IL_0165_1:
		{
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_35;
			L_35 = Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_inline((&V_11), Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_RuntimeMethod_var);
			V_2 = L_35;
			// Assembly ass = Assembly.Load(dll.bytes, pdb.bytes);
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_36 = __this->___U3CdllU3E5__2_3;
			NullCheck(L_36);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
			L_37 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_36, NULL);
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_38 = V_2;
			NullCheck(L_38);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
			L_39 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_38, NULL);
			Assembly_t* L_40;
			L_40 = Assembly_Load_mAE493D99239E2456319BA641A32236E6FE2B4E31(L_37, L_39, NULL);
			// Type game = ass.GetType("PostMainland.Game");
			NullCheck(L_40);
			Type_t* L_41;
			L_41 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(78 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_40, _stringLiteralAE002B7FD7F0E5A229F68220E59B1BB11488731A);
			// MethodInfo miStart = game.GetMethod("Start");
			Type_t* L_42 = L_41;
			NullCheck(L_42);
			MethodInfo_t* L_43;
			L_43 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_42, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
			V_3 = L_43;
			// MethodInfo miUpdate = game.GetMethod("Update");
			Type_t* L_44 = L_42;
			NullCheck(L_44);
			MethodInfo_t* L_45;
			L_45 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_44, _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6, NULL);
			V_4 = L_45;
			// MethodInfo miFixedUpdate = game.GetMethod("FixedUpdate");
			Type_t* L_46 = L_44;
			NullCheck(L_46);
			MethodInfo_t* L_47;
			L_47 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_46, _stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8, NULL);
			V_5 = L_47;
			// MethodInfo miLateUpdate = game.GetMethod("LateUpdate");
			Type_t* L_48 = L_46;
			NullCheck(L_48);
			MethodInfo_t* L_49;
			L_49 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_48, _stringLiteral1F0904794AA225B058D09D9F44679550F3014728, NULL);
			V_6 = L_49;
			// MethodInfo miOnApplicationQuit = game.GetMethod("OnApplicationQuit");
			NullCheck(L_48);
			MethodInfo_t* L_50;
			L_50 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_48, _stringLiteral17F9087F18DF346F81A42DDF3E29BE4EB3DC674E, NULL);
			V_7 = L_50;
			// Action start = (Action)miStart?.CreateDelegate(typeof(Action));
			MethodInfo_t* L_51 = V_3;
			if (L_51)
			{
				goto IL_01d2_1;
			}
		}
		{
			G_B14_0 = ((Delegate_t*)(NULL));
			goto IL_01e2_1;
		}

IL_01d2_1:
		{
			MethodInfo_t* L_52 = V_3;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_54;
			L_54 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_53, NULL);
			NullCheck(L_52);
			Delegate_t* L_55;
			L_55 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(137 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_52, L_54);
			G_B14_0 = L_55;
		}

IL_01e2_1:
		{
			// _game_Update = (Action)miUpdate?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_56 = V_1;
			MethodInfo_t* L_57 = V_4;
			G_B15_0 = L_56;
			G_B15_1 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B14_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			if (L_57)
			{
				G_B16_0 = L_56;
				G_B16_1 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B14_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
				goto IL_01ef_1;
			}
		}
		{
			G_B17_0 = ((Delegate_t*)(NULL));
			G_B17_1 = G_B15_0;
			G_B17_2 = G_B15_1;
			goto IL_0200_1;
		}

IL_01ef_1:
		{
			MethodInfo_t* L_58 = V_4;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_60;
			L_60 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_59, NULL);
			NullCheck(L_58);
			Delegate_t* L_61;
			L_61 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(137 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_58, L_60);
			G_B17_0 = L_61;
			G_B17_1 = G_B16_0;
			G_B17_2 = G_B16_1;
		}

IL_0200_1:
		{
			NullCheck(G_B17_1);
			G_B17_1->____game_Update_4 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B17_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B17_1->____game_Update_4), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B17_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// _game_FixedUpdate = (Action)miFixedUpdate?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_62 = V_1;
			MethodInfo_t* L_63 = V_5;
			G_B18_0 = L_62;
			G_B18_1 = G_B17_2;
			if (L_63)
			{
				G_B19_0 = L_62;
				G_B19_1 = G_B17_2;
				goto IL_0212_1;
			}
		}
		{
			G_B20_0 = ((Delegate_t*)(NULL));
			G_B20_1 = G_B18_0;
			G_B20_2 = G_B18_1;
			goto IL_0223_1;
		}

IL_0212_1:
		{
			MethodInfo_t* L_64 = V_5;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_66;
			L_66 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_65, NULL);
			NullCheck(L_64);
			Delegate_t* L_67;
			L_67 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(137 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_64, L_66);
			G_B20_0 = L_67;
			G_B20_1 = G_B19_0;
			G_B20_2 = G_B19_1;
		}

IL_0223_1:
		{
			NullCheck(G_B20_1);
			G_B20_1->____game_FixedUpdate_5 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B20_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->____game_FixedUpdate_5), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B20_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// _game_LateUpdate = (Action)miLateUpdate?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_68 = V_1;
			MethodInfo_t* L_69 = V_6;
			G_B21_0 = L_68;
			G_B21_1 = G_B20_2;
			if (L_69)
			{
				G_B22_0 = L_68;
				G_B22_1 = G_B20_2;
				goto IL_0235_1;
			}
		}
		{
			G_B23_0 = ((Delegate_t*)(NULL));
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			goto IL_0246_1;
		}

IL_0235_1:
		{
			MethodInfo_t* L_70 = V_6;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_72;
			L_72 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_71, NULL);
			NullCheck(L_70);
			Delegate_t* L_73;
			L_73 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(137 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_70, L_72);
			G_B23_0 = L_73;
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
		}

IL_0246_1:
		{
			NullCheck(G_B23_1);
			G_B23_1->____game_LateUpdate_6 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B23_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B23_1->____game_LateUpdate_6), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B23_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// _game_OnApplicationQuit = (Action)miOnApplicationQuit?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_74 = V_1;
			MethodInfo_t* L_75 = V_7;
			G_B24_0 = L_74;
			G_B24_1 = G_B23_2;
			if (L_75)
			{
				G_B25_0 = L_74;
				G_B25_1 = G_B23_2;
				goto IL_0258_1;
			}
		}
		{
			G_B26_0 = ((Delegate_t*)(NULL));
			G_B26_1 = G_B24_0;
			G_B26_2 = G_B24_1;
			goto IL_0269_1;
		}

IL_0258_1:
		{
			MethodInfo_t* L_76 = V_7;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_78;
			L_78 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_77, NULL);
			NullCheck(L_76);
			Delegate_t* L_79;
			L_79 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(137 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_76, L_78);
			G_B26_0 = L_79;
			G_B26_1 = G_B25_0;
			G_B26_2 = G_B25_1;
		}

IL_0269_1:
		{
			NullCheck(G_B26_1);
			G_B26_1->____game_OnApplicationQuit_7 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B26_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B26_1->____game_OnApplicationQuit_7), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B26_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// start();
			NullCheck(G_B26_2);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B26_2, NULL);
			goto IL_029a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_027a;
		}
		throw e;
	}

CATCH_027a:
	{// begin catch(System.Exception)
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdllU3E5__2_3 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllU3E5__2_3), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_80 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_81 = V_13;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_80, L_81, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02b4;
	}// end catch (depth: 1)

IL_029a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdllU3E5__2_3 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllU3E5__2_3), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_82 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_82, NULL);
	}

IL_02b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__4_MoveNext_m315A9242F905F95BC1641742A70CB0C9578450DB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988*>(__this + _offset);
	U3CStartU3Ed__4_MoveNext_m315A9242F905F95BC1641742A70CB0C9578450DB(_thisAdjusted, method);
}
// System.Void PostMainland.Main/<Start>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_SetStateMachine_mCEFA57BC87E6190D8C7378BF900A3445B8959DFC (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__4_SetStateMachine_mCEFA57BC87E6190D8C7378BF900A3445B8959DFC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988*>(__this + _offset);
	U3CStartU3Ed__4_SetStateMachine_mCEFA57BC87E6190D8C7378BF900A3445B8959DFC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Component PostMainland.UnityExtensions::GetOrAddComponent(UnityEngine.GameObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* UnityExtensions_GetOrAddComponent_mC3FF90BF56DDBEBFD522094C3C7D148E3D04C52B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, Type_t* ___type1, const RuntimeMethod* method) 
{
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* G_B2_0 = NULL;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* G_B1_0 = NULL;
	{
		// return go.GetComponent(type) ?? go.AddComponent(type);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		Type_t* L_1 = ___type1;
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_1, NULL);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0012;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___go0;
		Type_t* L_5 = ___type1;
		NullCheck(L_4);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6;
		L_6 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_4, L_5, NULL);
		G_B2_0 = L_6;
	}

IL_0012:
	{
		return G_B2_0;
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
// PostMainland.YooAssetsManager PostMainland.YooAssetsManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static YooAssetsManager Instance => _instance;
		il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
		YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_0 = ((YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask PostMainland.YooAssetsManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 YooAssetsManager_Initialize_m922A65DA635D75650ECA8F6DC141A853050AC4AA (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Byte[]> PostMainland.YooAssetsManager::LoadRawFileBytesAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E YooAssetsManager_LoadRawFileBytesAsync_mC39D1D83EFF9AC732EDA3BFD0360B4DA85E6CF56 (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_inline(AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___result_2), (void*)NULL);
		#endif
		String_t* L_1 = ___location0;
		(&V_0)->___location_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___location_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_inline(L_2, (&V_0), AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E L_4;
		L_4 = AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_inline(L_3, AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask PostMainland.YooAssetsManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 YooAssetsManager_LoadSceneAsync_m08FE9C2E6A9AA3C2BB123177CF14162174D4A8EF (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, String_t* ___location0, int32_t ___sceneMode1, bool ___activateOnLoad2, int32_t ___priority3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		String_t* L_1 = ___location0;
		(&V_0)->___location_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___location_2), (void*)L_1);
		int32_t L_2 = ___sceneMode1;
		(&V_0)->___sceneMode_3 = L_2;
		bool L_3 = ___activateOnLoad2;
		(&V_0)->___activateOnLoad_4 = L_3;
		int32_t L_4 = ___priority3;
		(&V_0)->___priority_5 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_inline(L_5, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
		L_7 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_6, NULL);
		return L_7;
	}
}
// System.Void PostMainland.YooAssetsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsManager__ctor_m2B6EC44010DA0BD63EA0FCA41A2B7826352E85FE (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PostMainland.YooAssetsManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsManager__cctor_m495718112320ED214E5DB58C16E740A4DDEAD576 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static YooAssetsManager _instance = new YooAssetsManager();
		YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_0 = (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278*)il2cpp_codegen_object_new(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		YooAssetsManager__ctor_m2B6EC44010DA0BD63EA0FCA41A2B7826352E85FE(L_0, NULL);
		((YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void PostMainland.YooAssetsManager/<Initialize>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__3_MoveNext_m7522FB79A23BF1D356B0839901B849CDAE45CF0C (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0079_1;
			}
		}
		{
			// var initParameters = new YooAssets.HostPlayModeParameters();
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_2 = (HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B*)il2cpp_codegen_object_new(HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			HostPlayModeParameters__ctor_mD35D77EC62EA77A9D67038C3F62692BA200371B9(L_2, NULL);
			// initParameters.LocationServices = new AddressLocationServices();
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_3 = L_2;
			AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619* L_4 = (AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619*)il2cpp_codegen_object_new(AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			AddressLocationServices__ctor_mB0E43B397A437F46B481E32DFDD1B774ADE99462(L_4, NULL);
			NullCheck(L_3);
			((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_3)->___LocationServices_1 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_3)->___LocationServices_1), (void*)L_4);
			// initParameters.DecryptionServices = null;
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_5 = L_3;
			NullCheck(L_5);
			((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_5)->___DecryptionServices_2 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_5)->___DecryptionServices_2), (void*)(RuntimeObject*)NULL);
			// initParameters.ClearCacheWhenDirty = false;
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_6 = L_5;
			NullCheck(L_6);
			L_6->___ClearCacheWhenDirty_7 = (bool)0;
			// initParameters.DefaultHostServer = "http://127.0.0.1:8088/Bundles/StandaloneWindows64/1/";
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_7 = L_6;
			NullCheck(L_7);
			L_7->___DefaultHostServer_5 = _stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___DefaultHostServer_5), (void*)_stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747);
			// initParameters.FallbackHostServer = "http://127.0.0.1:8088/Bundles/StandaloneWindows64/1/";
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_8 = L_7;
			NullCheck(L_8);
			L_8->___FallbackHostServer_6 = _stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747;
			Il2CppCodeGenWriteBarrier((void**)(&L_8->___FallbackHostServer_6), (void*)_stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747);
			// initParameters.VerifyLevel = EVerifyLevel.High;
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_9 = L_8;
			NullCheck(L_9);
			L_9->___VerifyLevel_9 = 1;
			// await YooAssets.InitializeAsync(initParameters);
			il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
			InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_10;
			L_10 = YooAssets_InitializeAsync_mC9FEFFCFD61AC4A38830A6D1BFBFCD378C1E2759(L_9, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11;
			L_11 = EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D(L_10, EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D_RuntimeMethod_var);
			V_1 = L_11;
			bool L_12;
			L_12 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_12)
			{
				goto IL_0095_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = V_1;
			__this->___U3CU3Eu__1_2 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_2))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_inline(L_15, (&V_1), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_RuntimeMethod_var);
			goto IL_00c8;
		}

IL_0079_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16 = __this->___U3CU3Eu__1_2;
			V_1 = L_16;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_17 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_17, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0095_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			goto IL_00b5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009e;
		}
		throw e;
	}

CATCH_009e:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_2;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c8;
	}// end catch (depth: 1)

IL_00b5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_21, NULL);
	}

IL_00c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__3_MoveNext_m7522FB79A23BF1D356B0839901B849CDAE45CF0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378*>(__this + _offset);
	U3CInitializeU3Ed__3_MoveNext_m7522FB79A23BF1D356B0839901B849CDAE45CF0C(_thisAdjusted, method);
}
// System.Void PostMainland.YooAssetsManager/<Initialize>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__3_SetStateMachine_m3E1C4268E1C7C928EF597295A026A698EC656C43 (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__3_SetStateMachine_m3E1C4268E1C7C928EF597295A026A698EC656C43_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378*>(__this + _offset);
	U3CInitializeU3Ed__3_SetStateMachine_m3E1C4268E1C7C928EF597295A026A698EC656C43(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadRawFileBytesAsyncU3Ed__6_MoveNext_mB4C1186E3FF4CE7496FC614BF59AFF54F94E5CA0 (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0056_1;
			}
		}
		{
			// var handle = YooAssets.GetRawFileAsync(location);
			String_t* L_2 = __this->___location_2;
			il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
			RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* L_3;
			L_3 = YooAssets_GetRawFileAsync_m59D986EC97A2793858678A6E52CD527E8FA324AB(L_2, (String_t*)NULL, NULL);
			__this->___U3ChandleU3E5__2_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__2_3), (void*)L_3);
			// await handle.Task;
			RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* L_4 = __this->___U3ChandleU3E5__2_3;
			NullCheck(L_4);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = AsyncOperationBase_get_Task_mDCC715C92A8AAAB23175397B4452528F260A1481(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_0072_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_inline(L_10, (&V_2), __this, AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_RuntimeMethod_var);
			goto IL_00c0;
		}

IL_0056_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_4;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0072_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// return handle.LoadFileData();
			RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* L_14 = __this->___U3ChandleU3E5__2_3;
			NullCheck(L_14);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
			L_15 = RawFileOperation_LoadFileData_m703E814C436B47F1E57A263303E46A5FFAAB71D1(L_14, NULL);
			V_1 = L_15;
			goto IL_00a5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ChandleU3E5__2_3 = (RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__2_3), (void*)(RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_3;
		AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_inline(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c0;
	}// end catch (depth: 1)

IL_00a5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ChandleU3E5__2_3 = (RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__2_3), (void*)(RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_18 = (&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_inline(L_18, L_19, AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var);
	}

IL_00c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadRawFileBytesAsyncU3Ed__6_MoveNext_mB4C1186E3FF4CE7496FC614BF59AFF54F94E5CA0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18*>(__this + _offset);
	U3CLoadRawFileBytesAsyncU3Ed__6_MoveNext_mB4C1186E3FF4CE7496FC614BF59AFF54F94E5CA0(_thisAdjusted, method);
}
// System.Void PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadRawFileBytesAsyncU3Ed__6_SetStateMachine_m182CBA2D554B3B483D91003DB4D4607E9404C439 (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5(L_0, L_1, AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadRawFileBytesAsyncU3Ed__6_SetStateMachine_m182CBA2D554B3B483D91003DB4D4607E9404C439_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18*>(__this + _offset);
	U3CLoadRawFileBytesAsyncU3Ed__6_SetStateMachine_m182CBA2D554B3B483D91003DB4D4607E9404C439(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__7_MoveNext_mB09A630EB4B183BAAE51E86AB2BE0DFB6BE8CECA (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisSceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F_mDA79C5A2FADA99D3C5744445D350CAF48BAF4776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0056_1;
			}
		}
		{
			// await YooAssets.LoadSceneAsync(location, sceneMode, activateOnLoad, priority);
			String_t* L_2 = __this->___location_2;
			int32_t L_3 = __this->___sceneMode_3;
			bool L_4 = __this->___activateOnLoad_4;
			int32_t L_5 = __this->___priority_5;
			il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
			SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* L_6;
			L_6 = YooAssets_LoadSceneAsync_m6A091503A06167B63706A3FFC68C644E0D9D6E37(L_2, L_3, L_4, L_5, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_7;
			L_7 = EnumeratorAsyncExtensions_GetAwaiter_TisSceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F_mDA79C5A2FADA99D3C5744445D350CAF48BAF4776(L_6, EnumeratorAsyncExtensions_GetAwaiter_TisSceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F_mDA79C5A2FADA99D3C5744445D350CAF48BAF4776_RuntimeMethod_var);
			V_1 = L_7;
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_8)
			{
				goto IL_0072_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_10 = V_1;
			__this->___U3CU3Eu__1_6 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_6))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_inline(L_11, (&V_1), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_RuntimeMethod_var);
			goto IL_00a5;
		}

IL_0056_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = __this->___U3CU3Eu__1_6;
			V_1 = L_12;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_13 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_13, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0072_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			goto IL_0092;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007b;
		}
		throw e;
	}

CATCH_007b:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_15 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_16 = V_2;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_15, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a5;
	}// end catch (depth: 1)

IL_0092:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_17 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_17, NULL);
	}

IL_00a5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadSceneAsyncU3Ed__7_MoveNext_mB09A630EB4B183BAAE51E86AB2BE0DFB6BE8CECA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4*>(__this + _offset);
	U3CLoadSceneAsyncU3Ed__7_MoveNext_mB09A630EB4B183BAAE51E86AB2BE0DFB6BE8CECA(_thisAdjusted, method);
}
// System.Void PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__7_SetStateMachine_m35E73FD0547F96A7DB5F20E4071C26CC5B2A1780 (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadSceneAsyncU3Ed__7_SetStateMachine_m35E73FD0547F96A7DB5F20E4071C26CC5B2A1780_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4*>(__this + _offset);
	U3CLoadSceneAsyncU3Ed__7_SetStateMachine_m35E73FD0547F96A7DB5F20E4071C26CC5B2A1780(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m413D9C4A48FA01808326C9051EC89958C4605D35 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadDll_set_AssemblyAssetBundle_m97F94D8411D37EEABF2207A9F6DCB1C6B108BCD2_inline (AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AssetBundle AssemblyAssetBundle { get; private set; }
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static YooAssetsManager Instance => _instance;
		il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
		YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_0 = ((YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		return L_0;
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
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		return L_6;
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
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___exception0;
		__this->___ex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		Exception_t* L_3 = ___exception0;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2, L_3);
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
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// runnerPromise.SetResult();
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_3 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_4 = (RuntimeObject*)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_6 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_0 = ___stateMachine0;
		U3CInitializeU3Ed__3_MoveNext_m7522FB79A23BF1D356B0839901B849CDAE45CF0C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF AsyncUniTaskMethodBuilder_1_Create_m3C3532D6852355DB15DB2854C207462C3F580CBC_gshared_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF));
		AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m25375A60065B097DE897F9728C326D073E2DAB10_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_0 = ___stateMachine0;
		U3CLoadRawFileBytesAsyncU3Ed__6_MoveNext_mB4C1186E3FF4CE7496FC614BF59AFF54F94E5CA0(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::get_Task() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = (Exception_t*)__this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException<T>(ex);
		Exception_t* L_4 = (Exception_t*)__this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_5;
		L_5 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_5;
	}

IL_0028:
	{
		// return UniTask.FromResult(result);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___result_2;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_7;
		L_7 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_0 = ___stateMachine0;
		U3CLoadSceneAsyncU3Ed__7_MoveNext_mB09A630EB4B183BAAE51E86AB2BE0DFB6BE8CECA(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m91452026077DB7BD9138130D844279D19DF9790D_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* ___stateMachine1, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::get_MoveNext() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___exception0;
		__this->___ex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_3 = ___exception0;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::SetException(System.Exception) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// this.result = result;
		RuntimeObject* L_1 = ___result0;
		__this->___result_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___result_2), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___runnerPromise_0;
		RuntimeObject* L_3 = ___result0;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::SetResult(T) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___task0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null)
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0014:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_7 = (&__this->___task_0);
		int16_t L_8 = L_7->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = ___task0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_1 = (*(UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___result_1), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
