#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>
struct Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
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
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<FairyGUI.GPathPoint>
struct List_1_tBB890E56CAD12049A46FC43E8AE1037EBC4D7E26;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<FairyGUI.Utils.XML>
struct List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<FairyGUI.Utils.XML>
struct Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751;
// System.Collections.Generic.Stack`1<FairyGUI.Utils.XML>
struct Stack_1_t1A22833FB3D6A45C7B11BEBDBB0F77C392C61E13;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Byte[]>
struct ValueCollection_tA7DF40B33CAF1CC12CCC29F4547D85DA818303A7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Byte[]>[]
struct EntryU5BU5D_t2D643CC9045D88A19CABBC3D8D436E9CDB92BE10;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// FairyGUI.Utils.XML[]
struct XMLU5BU5D_t57411AF180CE8ACB7984E6543C85B07163EDD906;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
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
// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// YooAsset.BundleInfo
struct BundleInfo_t9765601F6F4EE4ABC6315E2C38FE429BFB5AB2F2;
// FairyGUI.Utils.ByteBuffer
struct ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550;
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
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// YooAsset.IDecryptionServices
struct IDecryptionServices_t72A8C817CBF8635B47CA0CEFA6700D0ADE92AA8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
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
// System.Text.StringBuilder
struct StringBuilder_t;
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
// FairyGUI.Utils.XML
struct XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784;
// FairyGUI.Utils.XMLIterator
struct XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C;
// FairyGUI.Utils.XMLList
struct XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE;
// FairyGUI.Utils.XMLUtils
struct XMLUtils_t371862E103294083F79820724D290EF3EF82CA74;
// PostMainland.YooAssetsManager
struct YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278;
// FairyGUI.Utils.ZipReader
struct ZipReader_t2F6951270D42C8E8C5EB6113EA0EE7F6356B9B5F;
// PostMainland.LoadDll/<DownLoadDlls>d__9
struct U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7;
// PostMainland.Main/<Start>d__4
struct U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// FairyGUI.Utils.XMLList/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D;
// YooAsset.YooAssets/HostPlayModeParameters
struct HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B;
// YooAsset.YooAssets/InitializeParameters
struct InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE;
// PostMainland.YooAssetsManager/<Initialize>d__3
struct U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378;
// PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6
struct U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18;
// PostMainland.YooAssetsManager/<LoadSceneAsync>d__7
struct U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4;
// FairyGUI.Utils.ZipReader/ZipEntry
struct ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppConst_t05E92830F2ABFB6C93562B1C92B461784ABE4B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral067D631C255D4E0E8E6A2125BB825F7560FC55E5;
IL2CPP_EXTERN_C String_t* _stringLiteral08DDA34D2CB08600BE59C7A104864791DB79186F;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0A32C142D3169BE735E6D22D213725020E0E4FCD;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE5C75C762D2925310D5C8C6DE4A72136C79CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B;
IL2CPP_EXTERN_C String_t* _stringLiteral17F9087F18DF346F81A42DDF3E29BE4EB3DC674E;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0904794AA225B058D09D9F44679550F3014728;
IL2CPP_EXTERN_C String_t* _stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral28934E5EA2F56554DE167D05A0D99B894D609D5C;
IL2CPP_EXTERN_C String_t* _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1BBBF61A4D1102347EC72F429616D233963501;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4E8446539A176775E7FAD720AC4E860EB2C4EF;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6;
IL2CPP_EXTERN_C String_t* _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12;
IL2CPP_EXTERN_C String_t* _stringLiteral543F5C57FC39284750082AD04C4EE9A0295EE386;
IL2CPP_EXTERN_C String_t* _stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8;
IL2CPP_EXTERN_C String_t* _stringLiteral609FEB4E26D12D77194B8C93B9FB4BBCEC2E5E35;
IL2CPP_EXTERN_C String_t* _stringLiteral60CA546AC1F5CB89972D586A5795126E5483648F;
IL2CPP_EXTERN_C String_t* _stringLiteral651F3DD8CA1557E5BD9B2873C319D3BC64D3128C;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6ADFDC2F2C63343EB9FEAC4AF0CF3CE7EB903E0D;
IL2CPP_EXTERN_C String_t* _stringLiteral6C6FDC4565162D67861B63909523AE24FE5E083E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837;
IL2CPP_EXTERN_C String_t* _stringLiteral801E316126435DC3E90554FCF745B368C9D874FC;
IL2CPP_EXTERN_C String_t* _stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8361DA020C3266EA96FF9E3147157259ABB13EEC;
IL2CPP_EXTERN_C String_t* _stringLiteral85EA99A0471A7114A9EC175460FCA2312B8FED28;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62;
IL2CPP_EXTERN_C String_t* _stringLiteralA8F2BE4C8A0EE7F81F5528FE1AE3C85636376B8C;
IL2CPP_EXTERN_C String_t* _stringLiteralAE002B7FD7F0E5A229F68220E59B1BB11488731A;
IL2CPP_EXTERN_C String_t* _stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747;
IL2CPP_EXTERN_C String_t* _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA;
IL2CPP_EXTERN_C String_t* _stringLiteralB2CF30CDF767E11A78CE0D5C65C604190A189F12;
IL2CPP_EXTERN_C String_t* _stringLiteralBD6802922233B2514B76DFAE8EE645BD75420347;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642;
IL2CPP_EXTERN_C String_t* _stringLiteralCD482D45B9ACB51A32833E88AE809C3743009694;
IL2CPP_EXTERN_C String_t* _stringLiteralD1F50D14FC7C614455F81DAEAB51931D335067E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D;
IL2CPP_EXTERN_C String_t* _stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteralE600E34C3B072D351406D75E140CA24D4A78FD5B;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D44CAE1E3BEFC39260D137678DC510676429C3;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4BFAB013E17610794032EB72F05531232C68D024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisSceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F_mDA79C5A2FADA99D3C5744445D350CAF48BAF4776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_mE974B714E4137AA619735CEE6720077F93400190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mB7E72C982FEAE9BE3362F469D773D76B2DFE4686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadDll_StartGame_m5BE4CB166DFB2E29E9D3C1C94C1D3804CA957E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownLoadDllsU3Ed__9_System_Collections_IEnumerator_Reset_mA4ADC58BCCE5D66B897A1623862B85F9359A2728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CRemoveAllU3Eb__0_m40C58B9E54412A94EF088529FAB54424A70478ED_RuntimeMethod_var;
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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FairyGUI.Utils.XML>
struct List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XMLU5BU5D_t57411AF180CE8ACB7984E6543C85B07163EDD906* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XMLU5BU5D_t57411AF180CE8ACB7984E6543C85B07163EDD906* ___s_emptyArray_5;
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

// FairyGUI.Utils.ByteBuffer
struct ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550  : public RuntimeObject
{
	// System.Boolean FairyGUI.Utils.ByteBuffer::littleEndian
	bool ___littleEndian_0;
	// System.String[] FairyGUI.Utils.ByteBuffer::stringTable
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___stringTable_1;
	// System.Int32 FairyGUI.Utils.ByteBuffer::version
	int32_t ___version_2;
	// System.Int32 FairyGUI.Utils.ByteBuffer::_pointer
	int32_t ____pointer_3;
	// System.Int32 FairyGUI.Utils.ByteBuffer::_offset
	int32_t ____offset_4;
	// System.Int32 FairyGUI.Utils.ByteBuffer::_length
	int32_t ____length_5;
	// System.Byte[] FairyGUI.Utils.ByteBuffer::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_6;
};

struct ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550_StaticFields
{
	// System.Byte[] FairyGUI.Utils.ByteBuffer::temp
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___temp_7;
	// System.Collections.Generic.List`1<FairyGUI.GPathPoint> FairyGUI.Utils.ByteBuffer::helperPoints
	List_1_tBB890E56CAD12049A46FC43E8AE1037EBC4D7E26* ___helperPoints_8;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// FairyGUI.Utils.XML
struct XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784  : public RuntimeObject
{
	// System.String FairyGUI.Utils.XML::name
	String_t* ___name_0;
	// System.String FairyGUI.Utils.XML::text
	String_t* ___text_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> FairyGUI.Utils.XML::_attributes
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____attributes_2;
	// FairyGUI.Utils.XMLList FairyGUI.Utils.XML::_children
	XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* ____children_3;
};

struct XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784_StaticFields
{
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.XML> FairyGUI.Utils.XML::sNodeStack
	Stack_1_t1A22833FB3D6A45C7B11BEBDBB0F77C392C61E13* ___sNodeStack_4;
};

// FairyGUI.Utils.XMLIterator
struct XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C  : public RuntimeObject
{
};

struct XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields
{
	// System.String FairyGUI.Utils.XMLIterator::tagName
	String_t* ___tagName_0;
	// FairyGUI.Utils.XMLTagType FairyGUI.Utils.XMLIterator::tagType
	int32_t ___tagType_1;
	// System.String FairyGUI.Utils.XMLIterator::lastTagName
	String_t* ___lastTagName_2;
	// System.String FairyGUI.Utils.XMLIterator::source
	String_t* ___source_3;
	// System.Int32 FairyGUI.Utils.XMLIterator::sourceLen
	int32_t ___sourceLen_4;
	// System.Int32 FairyGUI.Utils.XMLIterator::parsePos
	int32_t ___parsePos_5;
	// System.Int32 FairyGUI.Utils.XMLIterator::tagPos
	int32_t ___tagPos_6;
	// System.Int32 FairyGUI.Utils.XMLIterator::tagLength
	int32_t ___tagLength_7;
	// System.Int32 FairyGUI.Utils.XMLIterator::lastTagEnd
	int32_t ___lastTagEnd_8;
	// System.Boolean FairyGUI.Utils.XMLIterator::attrParsed
	bool ___attrParsed_9;
	// System.Boolean FairyGUI.Utils.XMLIterator::lowerCaseName
	bool ___lowerCaseName_10;
	// System.Text.StringBuilder FairyGUI.Utils.XMLIterator::buffer
	StringBuilder_t* ___buffer_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> FairyGUI.Utils.XMLIterator::attributes
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributes_12;
};

// FairyGUI.Utils.XMLList
struct XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<FairyGUI.Utils.XML> FairyGUI.Utils.XMLList::rawList
	List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ___rawList_0;
};

struct XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields
{
	// System.Collections.Generic.List`1<FairyGUI.Utils.XML> FairyGUI.Utils.XMLList::_tmpList
	List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ____tmpList_1;
};

// FairyGUI.Utils.XMLUtils
struct XMLUtils_t371862E103294083F79820724D290EF3EF82CA74  : public RuntimeObject
{
};

struct XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_StaticFields
{
	// System.String[] FairyGUI.Utils.XMLUtils::ESCAPES
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ESCAPES_0;
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

// FairyGUI.Utils.ZipReader
struct ZipReader_t2F6951270D42C8E8C5EB6113EA0EE7F6356B9B5F  : public RuntimeObject
{
	// FairyGUI.Utils.ByteBuffer FairyGUI.Utils.ZipReader::_stream
	ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* ____stream_0;
	// System.Int32 FairyGUI.Utils.ZipReader::_entryCount
	int32_t ____entryCount_1;
	// System.Int32 FairyGUI.Utils.ZipReader::_pos
	int32_t ____pos_2;
	// System.Int32 FairyGUI.Utils.ZipReader::_index
	int32_t ____index_3;
};

// PostMainland.LoadDll/<DownLoadDlls>d__9
struct U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7  : public RuntimeObject
{
	// System.Int32 PostMainland.LoadDll/<DownLoadDlls>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PostMainland.LoadDll/<DownLoadDlls>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Action PostMainland.LoadDll/<DownLoadDlls>d__9::onDownloadComplete
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDownloadComplete_2;
	// PostMainland.LoadDll PostMainland.LoadDll/<DownLoadDlls>d__9::<>4__this
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* ___U3CU3E4__this_3;
	// System.String[] PostMainland.LoadDll/<DownLoadDlls>d__9::<abs>5__1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CabsU3E5__1_4;
	// System.String[] PostMainland.LoadDll/<DownLoadDlls>d__9::<>s__2
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CU3Es__2_5;
	// System.Int32 PostMainland.LoadDll/<DownLoadDlls>d__9::<>s__3
	int32_t ___U3CU3Es__3_6;
	// System.String PostMainland.LoadDll/<DownLoadDlls>d__9::<ab>5__4
	String_t* ___U3CabU3E5__4_7;
	// System.String PostMainland.LoadDll/<DownLoadDlls>d__9::<dllPath>5__5
	String_t* ___U3CdllPathU3E5__5_8;
	// UnityEngine.Networking.UnityWebRequest PostMainland.LoadDll/<DownLoadDlls>d__9::<www>5__6
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__6_9;
	// System.Byte[] PostMainland.LoadDll/<DownLoadDlls>d__9::<abBytes>5__7
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CabBytesU3E5__7_10;
};

// FairyGUI.Utils.XMLList/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D  : public RuntimeObject
{
	// System.String FairyGUI.Utils.XMLList/<>c__DisplayClass14_0::selector
	String_t* ___selector_0;
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
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::debuggingId
	RuntimeObject* ___debuggingId_3;
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
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::debuggingId
	RuntimeObject* ___debuggingId_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
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
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::debuggingId
	RuntimeObject* ___debuggingId_2;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// FairyGUI.Utils.XMLList/Enumerator
struct Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 
{
	// System.Collections.Generic.List`1<FairyGUI.Utils.XML> FairyGUI.Utils.XMLList/Enumerator::_source
	List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ____source_0;
	// System.String FairyGUI.Utils.XMLList/Enumerator::_selector
	String_t* ____selector_1;
	// System.Int32 FairyGUI.Utils.XMLList/Enumerator::_index
	int32_t ____index_2;
	// System.Int32 FairyGUI.Utils.XMLList/Enumerator::_total
	int32_t ____total_3;
	// FairyGUI.Utils.XML FairyGUI.Utils.XMLList/Enumerator::_current
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* ____current_4;
};
// Native definition for P/Invoke marshalling of FairyGUI.Utils.XMLList/Enumerator
struct Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_pinvoke
{
	List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ____source_0;
	char* ____selector_1;
	int32_t ____index_2;
	int32_t ____total_3;
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* ____current_4;
};
// Native definition for COM marshalling of FairyGUI.Utils.XMLList/Enumerator
struct Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_com
{
	List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ____source_0;
	Il2CppChar* ____selector_1;
	int32_t ____index_2;
	int32_t ____total_3;
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* ____current_4;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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
struct U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18  : public RuntimeObject
{
	// System.Int32 PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]> PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<>t__builder
	AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 ___U3CU3Et__builder_1;
	// System.String PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::location
	String_t* ___location_2;
	// PostMainland.YooAssetsManager PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<>4__this
	YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* ___U3CU3E4__this_3;
	// YooAsset.RawFileOperation PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<handle>5__1
	RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* ___U3ChandleU3E5__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
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
struct U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988  : public RuntimeObject
{
	// System.Int32 PostMainland.Main/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder PostMainland.Main/<Start>d__4::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// PostMainland.Main PostMainland.Main/<Start>d__4::<>4__this
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* ___U3CU3E4__this_2;
	// UnityEngine.TextAsset PostMainland.Main/<Start>d__4::<dll>5__1
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___U3CdllU3E5__1_3;
	// UnityEngine.TextAsset PostMainland.Main/<Start>d__4::<pdb>5__2
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___U3CpdbU3E5__2_4;
	// System.Reflection.Assembly PostMainland.Main/<Start>d__4::<ass>5__3
	Assembly_t* ___U3CassU3E5__3_5;
	// System.Type PostMainland.Main/<Start>d__4::<game>5__4
	Type_t* ___U3CgameU3E5__4_6;
	// System.Reflection.MethodInfo PostMainland.Main/<Start>d__4::<miStart>5__5
	MethodInfo_t* ___U3CmiStartU3E5__5_7;
	// System.Reflection.MethodInfo PostMainland.Main/<Start>d__4::<miUpdate>5__6
	MethodInfo_t* ___U3CmiUpdateU3E5__6_8;
	// System.Reflection.MethodInfo PostMainland.Main/<Start>d__4::<miFixedUpdate>5__7
	MethodInfo_t* ___U3CmiFixedUpdateU3E5__7_9;
	// System.Reflection.MethodInfo PostMainland.Main/<Start>d__4::<miLateUpdate>5__8
	MethodInfo_t* ___U3CmiLateUpdateU3E5__8_10;
	// System.Reflection.MethodInfo PostMainland.Main/<Start>d__4::<miOnApplicationQuit>5__9
	MethodInfo_t* ___U3CmiOnApplicationQuitU3E5__9_11;
	// System.Action PostMainland.Main/<Start>d__4::<start>5__10
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CstartU3E5__10_12;
	// UnityEngine.TextAsset PostMainland.Main/<Start>d__4::<>s__11
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___U3CU3Es__11_13;
	// UnityEngine.TextAsset PostMainland.Main/<Start>d__4::<>s__12
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___U3CU3Es__12_14;
	// Cysharp.Threading.Tasks.UniTask/Awaiter PostMainland.Main/<Start>d__4::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_15;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.TextAsset> PostMainland.Main/<Start>d__4::<>u__2
	Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 ___U3CU3Eu__2_16;
};

// PostMainland.YooAssetsManager/<Initialize>d__3
struct U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378  : public RuntimeObject
{
	// System.Int32 PostMainland.YooAssetsManager/<Initialize>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder PostMainland.YooAssetsManager/<Initialize>d__3::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// PostMainland.YooAssetsManager PostMainland.YooAssetsManager/<Initialize>d__3::<>4__this
	YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* ___U3CU3E4__this_2;
	// YooAsset.YooAssets/HostPlayModeParameters PostMainland.YooAssetsManager/<Initialize>d__3::<initParameters>5__1
	HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* ___U3CinitParametersU3E5__1_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter PostMainland.YooAssetsManager/<Initialize>d__3::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// PostMainland.YooAssetsManager/<LoadSceneAsync>d__7
struct U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4  : public RuntimeObject
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
	// PostMainland.YooAssetsManager PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::<>4__this
	YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* ___U3CU3E4__this_6;
	// Cysharp.Threading.Tasks.UniTask/Awaiter PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_7;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Predicate`1<FairyGUI.Utils.XML>
struct Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751  : public MulticastDelegate_t
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
	// System.Action PostMainland.LoadDll::_game_Update
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_Update_6;
	// System.Action PostMainland.LoadDll::_game_FixedUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_FixedUpdate_7;
	// System.Action PostMainland.LoadDll::_game_LateUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_LateUpdate_8;
	// System.Action PostMainland.LoadDll::_game_OnApplicationQuit
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____game_OnApplicationQuit_9;
};

struct LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]> PostMainland.LoadDll::_abBytes
	Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* ____abBytes_5;
	// UnityEngine.AssetBundle PostMainland.LoadDll::<AssemblyAssetBundle>k__BackingField
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___U3CAssemblyAssetBundleU3Ek__BackingField_10;
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisRuntimeObject_m40A3F54AD37F4A3E9FF4203E1FBD04254F73AE3C_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> PostMainland.YooAssetsManager::LoadAsync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 YooAssetsManager_LoadAsync_TisRuntimeObject_mF9F9FE418962479FB1C20F99F1B9343A190B10CA_gshared (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, String_t* ___location0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisRuntimeObject_m90330B635B57319A5AA102E536FEF3849A6CB781_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisRuntimeObject_mB47A7ED4A1E8E03B2C64A9071007BD0BD052D831_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF AsyncUniTaskMethodBuilder_1_Create_m3C3532D6852355DB15DB2854C207462C3F580CBC_gshared_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisRuntimeObject_m8EBBE5A86840E812B495F028DBD7D2EF0E535906_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m6E84075CB490BF6A8482C654CFEE9B330FBD15CB_gshared (RuntimeObject* ___enumerator0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisRuntimeObject_m2BC330657051AF9851E7A4061D3643D229FA216D_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_m96A80853F2F4735B517D6017C3F51CD617BC4129_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetResult(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;

// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5 (String_t* __this, const RuntimeMethod* method) ;
// System.String FairyGUI.Utils.XMLUtils::DecodeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLUtils_DecodeString_mBD4F2A44A5ED93B945F2975F3CB1C23BA190D754 (String_t* ___aSource0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void FairyGUI.Utils.XMLIterator::ParseAttributes(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator_ParseAttributes_m730B0902B230207AF5CF2B7EEEA5AD3AD28E0D5C (RuntimeObject* ___attrs0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String FairyGUI.Utils.XMLIterator::GetAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetAttribute_m7928223F35A39D07AE67672DA1D3BEEB1A62EF13 (String_t* ___attrName0, const RuntimeMethod* method) ;
// System.Int32 FairyGUI.Utils.XMLIterator::GetAttributeInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XMLIterator_GetAttributeInt_m5C3CDF11BEAD05CAE8D56A9E19414AFC21282D9F (String_t* ___attrName0, int32_t ___defValue1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Single FairyGUI.Utils.XMLIterator::GetAttributeFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XMLIterator_GetAttributeFloat_m58D17A404C6CEB381E97326F614E0D6F7EF31417 (String_t* ___attrName0, float ___defValue1, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Boolean FairyGUI.Utils.XMLIterator::GetAttributeBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLIterator_GetAttributeBool_m3BDE84FF718676CFBC227D73DB431AE7A22DE30A (String_t* ___attrName0, bool ___defValue1, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FairyGUI.Utils.XML>::.ctor()
inline void List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<FairyGUI.Utils.XML>::Add(T)
inline void List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_inline (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* __this, XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*, XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<FairyGUI.Utils.XML>::Clear()
inline void List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_inline (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<FairyGUI.Utils.XML>::get_Count()
inline int32_t List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_inline (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<FairyGUI.Utils.XML>::get_Item(System.Int32)
inline XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7 (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* (*) (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void FairyGUI.Utils.XMLList/Enumerator::.ctor(System.Collections.Generic.List`1<FairyGUI.Utils.XML>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m525EE0B1C73A9236DD84AED16DFBF983809989C7 (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ___source0, String_t* ___selector1, const RuntimeMethod* method) ;
// System.Void FairyGUI.Utils.XMLList::.ctor(System.Collections.Generic.List`1<FairyGUI.Utils.XML>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLList__ctor_m79B5317914AA0676FD84F942D77FFCB133057013 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ___list0, const RuntimeMethod* method) ;
// System.Void FairyGUI.Utils.XMLList/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m4DD668D3A084B2F9C307294F299C088BA6B52742 (U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<FairyGUI.Utils.XML>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m2DAF6A4EB12D28EAC8393D03FEF5D06F987E2921 (Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<FairyGUI.Utils.XML>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_mE974B714E4137AA619735CEE6720077F93400190 (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* __this, Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*, Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751*, const RuntimeMethod*))List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared)(__this, ___match0, method);
}
// FairyGUI.Utils.XML FairyGUI.Utils.XMLList/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* Enumerator_get_Current_m8A1141FE322D58FACD6759EEA401EDCB9BA60A0E (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) ;
// System.Boolean FairyGUI.Utils.XMLList/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAEF88F7011EC7C547603A05C736AF07F615C50BF (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FairyGUI.Utils.XML>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mB7E72C982FEAE9BE3362F469D773D76B2DFE4686 (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void FairyGUI.Utils.XMLList/Enumerator::Erase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Erase_m94D7AC50AEEB61FD43D2597B66996BB11EB0422B (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) ;
// System.Void FairyGUI.Utils.XMLList/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m3F956EF5263FECEBFF5AA41AC4842800EA0B4672 (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_mB19CE8A8A4BAFB372C5CDA374532B08CF0DB3654 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m9BB26D534FA4E6E2D32DCA99AB95BDD056CBB7E4 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Replace_mB0C05C33BEED1FB701AD826C0E1B3D08ADE66760 (StringBuilder_t* __this, String_t* ___oldValue0, String_t* ___newValue1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void FairyGUI.Utils.XMLUtils::EncodeString(System.Text.StringBuilder,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLUtils_EncodeString_mB1BB9A8C20451902DC221789BF0916E71B26E468 (StringBuilder_t* ___sb0, int32_t ___start1, bool ___isAttribute2, const RuntimeMethod* method) ;
// System.Void FairyGUI.Utils.ByteBuffer::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer__ctor_m65B0BF0F8B2B01ED88B725E7A93899E4F2A78E6B (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 FairyGUI.Utils.ByteBuffer::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuffer_get_length_m279884C997BE572F45AC85BC7056652DC73E4C27 (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, const RuntimeMethod* method) ;
// System.Void FairyGUI.Utils.ByteBuffer::set_position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int16 FairyGUI.Utils.ByteBuffer::ReadShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ByteBuffer_ReadShort_mE3ACB496B028F1CF9147A2A73B93AD9816BC403C (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, const RuntimeMethod* method) ;
// System.Int32 FairyGUI.Utils.ByteBuffer::ReadInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuffer_ReadInt_mA9E0A036529817DFF40E2ADC1D535C40503D771E (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, const RuntimeMethod* method) ;
// System.UInt16 FairyGUI.Utils.ByteBuffer::ReadUshort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ByteBuffer_ReadUshort_m8DBFF2A9F68B4C08454D714BB552D3EC6FE14639 (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, const RuntimeMethod* method) ;
// System.String FairyGUI.Utils.ByteBuffer::ReadString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ByteBuffer_ReadString_m1F0DA5DCBAC07C82425F98EFD566EE830FF57764 (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, int32_t ___len0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.UInt32 FairyGUI.Utils.ByteBuffer::ReadUint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteBuffer_ReadUint_m1085BCF50D511A12830A749DE8EBBD1EEE578DE5 (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, const RuntimeMethod* method) ;
// System.Byte[] FairyGUI.Utils.ByteBuffer::ReadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuffer_ReadBytes_m9CC38C232FDA0899A37CA2527CE4A26B70B13742 (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___destIndex1, int32_t ___count2, const RuntimeMethod* method) ;
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
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__9__ctor_m333302A882B4019A26C7468070CD2F9A3FA29822 (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
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
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>::.ctor()
inline void Dictionary_2__ctor_m4BFAB013E17610794032EB72F05531232C68D024 (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String PostMainland.LoadDll::GetWebRequestPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadDll_GetWebRequestPath_m050F90E93627404CBC62EBCE20E85EBA186F97D3 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, String_t* ___asset0, const RuntimeMethod* method) ;
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
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void PostMainland.UnityLogger::Debug(TouchSocket.Core.Log.LogType,System.Object,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_Debug_mA86C29A4CE681ED26DE045312DBD17A1ACF3BF8F (UnityLogger_t06458336C88FA603662CBD20B7C41DDFBB9AF8BC* __this, int32_t ___logType0, RuntimeObject* ___source1, String_t* ___message2, Exception_t* ___exception3, const RuntimeMethod* method) ;
// System.Void PostMainland.Main/<Start>d__4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m68DA3682BCEDDA5CB00A244E706697A8A5B470EE (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<PostMainland.Main/<Start>d__4>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
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
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisRuntimeObject_m40A3F54AD37F4A3E9FF4203E1FBD04254F73AE3C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* ___awaiter0, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6*, U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisRuntimeObject_m90330B635B57319A5AA102E536FEF3849A6CB781_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.TextAsset>::GetResult()
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_inline (Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* __this, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mAE493D99239E2456319BA641A32236E6FE2B4E31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawAssembly0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawSymbolStore1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___componentType0, const RuntimeMethod* method) ;
// System.Void PostMainland.YooAssetsManager/<Initialize>d__3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__3__ctor_mF9C78DAC5B2E40C397D34A4F4EC166A8238B80E8 (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<PostMainland.YooAssetsManager/<Initialize>d__3>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378**, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisRuntimeObject_mB47A7ED4A1E8E03B2C64A9071007BD0BD052D831_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadRawFileBytesAsyncU3Ed__6__ctor_mB5B9D7E3C34F21902060E8028D6CD18D6B7B778F (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::Create()
inline AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_m3C3532D6852355DB15DB2854C207462C3F580CBC_gshared_inline)(method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::Start<PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18**, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisRuntimeObject_m8EBBE5A86840E812B495F028DBD7D2EF0E535906_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::get_Task()
inline UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline)(__this, method);
}
// System.Void PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__7__ctor_mB8311BB16C71599FF01A045FC42FA1264CEACA30 (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<PostMainland.YooAssetsManager/<LoadSceneAsync>d__7>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4**, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisRuntimeObject_mB47A7ED4A1E8E03B2C64A9071007BD0BD052D831_gshared_inline)(__this, ___stateMachine0, method);
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
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378**, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisRuntimeObject_m2BC330657051AF9851E7A4061D3643D229FA216D_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// YooAsset.RawFileOperation YooAsset.YooAssets::GetRawFileAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* YooAssets_GetRawFileAsync_m59D986EC97A2793858678A6E52CD527E8FA324AB (String_t* ___location0, String_t* ___copyPath1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task YooAsset.AsyncOperationBase::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncOperationBase_get_Task_mDCC715C92A8AAAB23175397B4452528F260A1481 (AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18**, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_m96A80853F2F4735B517D6017C3F51CD617BC4129_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
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
// YooAsset.SceneOperationHandle YooAsset.YooAssets::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* YooAssets_LoadSceneAsync_m6A091503A06167B63706A3FFC68C644E0D9D6E37 (String_t* ___location0, int32_t ___sceneMode1, bool ___activateOnLoad2, int32_t ___priority3, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<YooAsset.SceneOperationHandle>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisSceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F_mDA79C5A2FADA99D3C5744445D350CAF48BAF4776 (SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* ___enumerator0, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m6E84075CB490BF6A8482C654CFEE9B330FBD15CB_gshared)(___enumerator0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,PostMainland.YooAssetsManager/<LoadSceneAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4**, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisRuntimeObject_m2BC330657051AF9851E7A4061D3643D229FA216D_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void FairyGUI.Utils.XMLIterator::Begin(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator_Begin_m957C71D3688F65602716B5B02E94DFE0AD9EDADB (String_t* ___source0, bool ___lowerCaseName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XMLIterator.source = source;
		String_t* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3), (void*)L_0);
		// XMLIterator.lowerCaseName = lowerCaseName;
		bool L_1 = ___lowerCaseName1;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lowerCaseName_10 = L_1;
		// sourceLen = source.Length;
		String_t* L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4 = L_3;
		// parsePos = 0;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5 = 0;
		// lastTagEnd = 0;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8 = 0;
		// tagPos = 0;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6 = 0;
		// tagLength = 0;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7 = 0;
		// tagName = null;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0), (void*)(String_t*)NULL);
		// }
		return;
	}
}
// System.Boolean FairyGUI.Utils.XMLIterator::NextTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLIterator_NextTag_m89731D1E42C8458EC1602AC97731CD98004AA3B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EE5C75C762D2925310D5C8C6DE4A72136C79CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral651F3DD8CA1557E5BD9B2873C319D3BC64D3128C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral801E316126435DC3E90554FCF745B368C9D874FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
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
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B39_0 = 0;
	{
		// tagType = XMLTagType.Start;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagType_1 = 0;
		// buffer.Length = 0;
		StringBuilder_t* L_0 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		// lastTagEnd = parsePos;
		int32_t L_1 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8 = L_1;
		// attrParsed = false;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attrParsed_9 = (bool)0;
		// lastTagName = tagName;
		String_t* L_2 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagName_2), (void*)L_2);
		goto IL_03af;
	}

IL_0032:
	{
		// parsePos = pos;
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5 = L_3;
		// pos++;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (pos == sourceLen)
		int32_t L_5 = V_0;
		int32_t L_6 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		V_5 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// break;
		goto IL_03d1;
	}

IL_0050:
	{
		// c = source[pos];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_8 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		V_1 = L_10;
		// if (c == '!')
		Il2CppChar L_11 = V_1;
		V_6 = (bool)((((int32_t)L_11) == ((int32_t)((int32_t)33)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_01ad;
		}
	}
	{
		// if (sourceLen > pos + 7 && source.Substring(pos - 1, 9) == CDATA_START)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_13 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_14, 7)))))
		{
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_15 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), ((int32_t)9), NULL);
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral651F3DD8CA1557E5BD9B2873C319D3BC64D3128C, NULL);
		G_B7_0 = ((int32_t)(L_18));
		goto IL_0091;
	}

IL_0090:
	{
		G_B7_0 = 0;
	}

IL_0091:
	{
		V_7 = (bool)G_B7_0;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0105;
		}
	}
	{
		// pos = source.IndexOf(CDATA_END, pos);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_20 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_20, _stringLiteral801E316126435DC3E90554FCF745B368C9D874FC, L_21, NULL);
		V_0 = L_22;
		// tagType = XMLTagType.CDATA;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagType_1 = 3;
		// tagName = string.Empty;
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0), (void*)L_23);
		// tagPos = parsePos;
		int32_t L_24 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6 = L_24;
		// if (pos == -1)
		int32_t L_25 = V_0;
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)(-1)))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_00df;
		}
	}
	{
		// tagLength = sourceLen - parsePos;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_27 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		int32_t L_28 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		goto IL_00ed;
	}

IL_00df:
	{
		// tagLength = pos + 3 - parsePos;
		int32_t L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_30 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, 3)), L_30));
	}

IL_00ed:
	{
		// parsePos += tagLength;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_31 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		int32_t L_32 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		// return true;
		V_9 = (bool)1;
		goto IL_03ec;
	}

IL_0105:
	{
		// else if (sourceLen > pos + 2 && source.Substring(pos - 1, 4) == COMMENT_START)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_33 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_34, 2)))))
		{
			goto IL_0129;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_35 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		String_t* L_37;
		L_37 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_35, ((int32_t)il2cpp_codegen_subtract(L_36, 1)), 4, NULL);
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral0EE5C75C762D2925310D5C8C6DE4A72136C79CC4, NULL);
		G_B15_0 = ((int32_t)(L_38));
		goto IL_012a;
	}

IL_0129:
	{
		G_B15_0 = 0;
	}

IL_012a:
	{
		V_10 = (bool)G_B15_0;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_019e;
		}
	}
	{
		// pos = source.IndexOf(COMMENT_END, pos);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_40 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42;
		L_42 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_40, _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA, L_41, NULL);
		V_0 = L_42;
		// tagType = XMLTagType.Comment;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagType_1 = 4;
		// tagName = string.Empty;
		String_t* L_43 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0), (void*)L_43);
		// tagPos = parsePos;
		int32_t L_44 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6 = L_44;
		// if (pos == -1)
		int32_t L_45 = V_0;
		V_11 = (bool)((((int32_t)L_45) == ((int32_t)(-1)))? 1 : 0);
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		// tagLength = sourceLen - parsePos;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_47 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		int32_t L_48 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7 = ((int32_t)il2cpp_codegen_subtract(L_47, L_48));
		goto IL_0186;
	}

IL_0178:
	{
		// tagLength = pos + 3 - parsePos;
		int32_t L_49 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_50 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_49, 3)), L_50));
	}

IL_0186:
	{
		// parsePos += tagLength;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_51 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		int32_t L_52 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		// return true;
		V_9 = (bool)1;
		goto IL_03ec;
	}

IL_019e:
	{
		// pos++;
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// tagType = XMLTagType.Instruction;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagType_1 = 5;
		goto IL_01dd;
	}

IL_01ad:
	{
		// else if (c == '/')
		Il2CppChar L_54 = V_1;
		V_12 = (bool)((((int32_t)L_54) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_55 = V_12;
		if (!L_55)
		{
			goto IL_01c6;
		}
	}
	{
		// pos++;
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		// tagType = XMLTagType.End;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagType_1 = 1;
		goto IL_01dd;
	}

IL_01c6:
	{
		// else if (c == '?')
		Il2CppChar L_57 = V_1;
		V_13 = (bool)((((int32_t)L_57) == ((int32_t)((int32_t)63)))? 1 : 0);
		bool L_58 = V_13;
		if (!L_58)
		{
			goto IL_01dd;
		}
	}
	{
		// pos++;
		int32_t L_59 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		// tagType = XMLTagType.Instruction;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagType_1 = 5;
	}

IL_01dd:
	{
		goto IL_020e;
	}

IL_01df:
	{
		// c = source[pos];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_60 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		Il2CppChar L_62;
		L_62 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_60, L_61, NULL);
		V_1 = L_62;
		// if (Char.IsWhiteSpace(c) || c == '>' || c == '/')
		Il2CppChar L_63 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_63, NULL);
		if (L_64)
		{
			goto IL_0200;
		}
	}
	{
		Il2CppChar L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)62))))
		{
			goto IL_0200;
		}
	}
	{
		Il2CppChar L_66 = V_1;
		G_B30_0 = ((((int32_t)L_66) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B30_0 = 1;
	}

IL_0201:
	{
		V_14 = (bool)G_B30_0;
		bool L_67 = V_14;
		if (!L_67)
		{
			goto IL_0209;
		}
	}
	{
		// break;
		goto IL_021c;
	}

IL_0209:
	{
		// for (; pos < sourceLen; pos++)
		int32_t L_68 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_020e:
	{
		// for (; pos < sourceLen; pos++)
		int32_t L_69 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_70 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		V_15 = (bool)((((int32_t)L_69) < ((int32_t)L_70))? 1 : 0);
		bool L_71 = V_15;
		if (L_71)
		{
			goto IL_01df;
		}
	}

IL_021c:
	{
		// if (pos == sourceLen)
		int32_t L_72 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_73 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		V_16 = (bool)((((int32_t)L_72) == ((int32_t)L_73))? 1 : 0);
		bool L_74 = V_16;
		if (!L_74)
		{
			goto IL_022f;
		}
	}
	{
		// break;
		goto IL_03d1;
	}

IL_022f:
	{
		// buffer.Append(source, parsePos + 1, pos - parsePos - 1);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_75 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		String_t* L_76 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_77 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		int32_t L_78 = V_0;
		int32_t L_79 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		NullCheck(L_75);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_75, L_76, ((int32_t)il2cpp_codegen_add(L_77, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_78, L_79)), 1)), NULL);
		// if (buffer.Length > 0 && buffer[0] == '/')
		StringBuilder_t* L_81 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_81, NULL);
		if ((((int32_t)L_82) <= ((int32_t)0)))
		{
			goto IL_026d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_83 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_83);
		Il2CppChar L_84;
		L_84 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_83, 0, NULL);
		G_B39_0 = ((((int32_t)L_84) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_026e;
	}

IL_026d:
	{
		G_B39_0 = 0;
	}

IL_026e:
	{
		V_17 = (bool)G_B39_0;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_0281;
		}
	}
	{
		// buffer.Remove(0, 1);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_86 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_86, 0, 1, NULL);
	}

IL_0281:
	{
		// bool singleQuoted = false, doubleQuoted = false;
		V_2 = (bool)0;
		// bool singleQuoted = false, doubleQuoted = false;
		V_3 = (bool)0;
		// int possibleEnd = -1;
		V_4 = (-1);
		goto IL_0307;
	}

IL_028a:
	{
		// c = source[pos];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_88 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_89 = V_0;
		NullCheck(L_88);
		Il2CppChar L_90;
		L_90 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_88, L_89, NULL);
		V_1 = L_90;
		// if (c == '"')
		Il2CppChar L_91 = V_1;
		V_18 = (bool)((((int32_t)L_91) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_92 = V_18;
		if (!L_92)
		{
			goto IL_02b5;
		}
	}
	{
		// if (!singleQuoted)
		bool L_93 = V_2;
		V_19 = (bool)((((int32_t)L_93) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_19;
		if (!L_94)
		{
			goto IL_02b2;
		}
	}
	{
		// doubleQuoted = !doubleQuoted;
		bool L_95 = V_3;
		V_3 = (bool)((((int32_t)L_95) == ((int32_t)0))? 1 : 0);
	}

IL_02b2:
	{
		goto IL_02d1;
	}

IL_02b5:
	{
		// else if (c == '\'')
		Il2CppChar L_96 = V_1;
		V_20 = (bool)((((int32_t)L_96) == ((int32_t)((int32_t)39)))? 1 : 0);
		bool L_97 = V_20;
		if (!L_97)
		{
			goto IL_02d1;
		}
	}
	{
		// if (!doubleQuoted)
		bool L_98 = V_3;
		V_21 = (bool)((((int32_t)L_98) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_21;
		if (!L_99)
		{
			goto IL_02d0;
		}
	}
	{
		// singleQuoted = !singleQuoted;
		bool L_100 = V_2;
		V_2 = (bool)((((int32_t)L_100) == ((int32_t)0))? 1 : 0);
	}

IL_02d0:
	{
	}

IL_02d1:
	{
		// if (c == '>')
		Il2CppChar L_101 = V_1;
		V_22 = (bool)((((int32_t)L_101) == ((int32_t)((int32_t)62)))? 1 : 0);
		bool L_102 = V_22;
		if (!L_102)
		{
			goto IL_02f5;
		}
	}
	{
		// if (!(singleQuoted || doubleQuoted))
		bool L_103 = V_2;
		bool L_104 = V_3;
		V_23 = (bool)((((int32_t)((int32_t)((int32_t)L_103|(int32_t)L_104))) == ((int32_t)0))? 1 : 0);
		bool L_105 = V_23;
		if (!L_105)
		{
			goto IL_02ef;
		}
	}
	{
		// possibleEnd = -1;
		V_4 = (-1);
		// break;
		goto IL_0318;
	}

IL_02ef:
	{
		// possibleEnd = pos;
		int32_t L_106 = V_0;
		V_4 = L_106;
		goto IL_0302;
	}

IL_02f5:
	{
		// else if (c == '<')
		Il2CppChar L_107 = V_1;
		V_24 = (bool)((((int32_t)L_107) == ((int32_t)((int32_t)60)))? 1 : 0);
		bool L_108 = V_24;
		if (!L_108)
		{
			goto IL_0302;
		}
	}
	{
		// break;
		goto IL_0318;
	}

IL_0302:
	{
		// for (; pos < sourceLen; pos++)
		int32_t L_109 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_0307:
	{
		// for (; pos < sourceLen; pos++)
		int32_t L_110 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_111 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		V_25 = (bool)((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		bool L_112 = V_25;
		if (L_112)
		{
			goto IL_028a;
		}
	}

IL_0318:
	{
		// if (possibleEnd != -1)
		int32_t L_113 = V_4;
		V_26 = (bool)((((int32_t)((((int32_t)L_113) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_114 = V_26;
		if (!L_114)
		{
			goto IL_0329;
		}
	}
	{
		// pos = possibleEnd;
		int32_t L_115 = V_4;
		V_0 = L_115;
	}

IL_0329:
	{
		// if (pos == sourceLen)
		int32_t L_116 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_117 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		V_27 = (bool)((((int32_t)L_116) == ((int32_t)L_117))? 1 : 0);
		bool L_118 = V_27;
		if (!L_118)
		{
			goto IL_033c;
		}
	}
	{
		// break;
		goto IL_03d1;
	}

IL_033c:
	{
		// if (source[pos - 1] == '/')
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_119 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_120 = V_0;
		NullCheck(L_119);
		Il2CppChar L_121;
		L_121 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_119, ((int32_t)il2cpp_codegen_subtract(L_120, 1)), NULL);
		V_28 = (bool)((((int32_t)L_121) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_122 = V_28;
		if (!L_122)
		{
			goto IL_0359;
		}
	}
	{
		// tagType = XMLTagType.Void;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagType_1 = 2;
	}

IL_0359:
	{
		// tagName = buffer.ToString();
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_123 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_123);
		String_t* L_124;
		L_124 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_123);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0), (void*)L_124);
		// if (lowerCaseName)
		bool L_125 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lowerCaseName_10;
		V_29 = L_125;
		bool L_126 = V_29;
		if (!L_126)
		{
			goto IL_0382;
		}
	}
	{
		// tagName = tagName.ToLower();
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_127 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0;
		NullCheck(L_127);
		String_t* L_128;
		L_128 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_127, NULL);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0), (void*)L_128);
	}

IL_0382:
	{
		// tagPos = parsePos;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_129 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6 = L_129;
		// tagLength = pos + 1 - parsePos;
		int32_t L_130 = V_0;
		int32_t L_131 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131));
		// parsePos += tagLength;
		int32_t L_132 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		int32_t L_133 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5 = ((int32_t)il2cpp_codegen_add(L_132, L_133));
		// return true;
		V_9 = (bool)1;
		goto IL_03ec;
	}

IL_03af:
	{
		// while ((pos = source.IndexOf('<', parsePos)) != -1)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_134 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_135 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___parsePos_5;
		NullCheck(L_134);
		int32_t L_136;
		L_136 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_134, ((int32_t)60), L_135, NULL);
		int32_t L_137 = L_136;
		V_0 = L_137;
		V_30 = (bool)((((int32_t)((((int32_t)L_137) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_138 = V_30;
		if (L_138)
		{
			goto IL_0032;
		}
	}

IL_03d1:
	{
		// tagPos = sourceLen;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_139 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___sourceLen_4;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6 = L_139;
		// tagLength = 0;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7 = 0;
		// tagName = null;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagName_0), (void*)(String_t*)NULL);
		// return false;
		V_9 = (bool)0;
		goto IL_03ec;
	}

IL_03ec:
	{
		// }
		bool L_140 = V_9;
		return L_140;
	}
}
// System.String FairyGUI.Utils.XMLIterator::GetTagSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetTagSource_m1AB8A9A7826E1DFE7475EC5C6808F8A46838E7BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return source.Substring(tagPos, tagLength);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_0 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_1 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		int32_t L_2 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String FairyGUI.Utils.XMLIterator::GetRawText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetRawText_m54516937C642FF1DCD08EA80212E72779613694C (bool ___trim0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (lastTagEnd == tagPos)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		int32_t L_1 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_3;
		goto IL_00aa;
	}

IL_001c:
	{
		// else if (trim)
		bool L_4 = ___trim0;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_008d;
		}
	}
	{
		// int i = lastTagEnd;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_6 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		V_3 = L_6;
		goto IL_004f;
	}

IL_002a:
	{
		// char c = source[i];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_7 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		V_4 = L_9;
		// if (!char.IsWhiteSpace(c))
		Il2CppChar L_10 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_10, NULL);
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		// break;
		goto IL_005d;
	}

IL_004a:
	{
		// for (; i < tagPos; i++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		// for (; i < tagPos; i++)
		int32_t L_14 = V_3;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_15 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_6;
		if (L_16)
		{
			goto IL_002a;
		}
	}

IL_005d:
	{
		// if (i == tagPos)
		int32_t L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_18 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return string.Empty;
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_20;
		goto IL_00aa;
	}

IL_0073:
	{
		// return source.Substring(i, tagPos - i).TrimEnd();
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_21 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_22 = V_3;
		int32_t L_23 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		int32_t L_24 = V_3;
		NullCheck(L_21);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_21, L_22, ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5(L_25, NULL);
		V_1 = L_26;
		goto IL_00aa;
	}

IL_008d:
	{
		// return source.Substring(lastTagEnd, tagPos - lastTagEnd);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_27 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_28 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		int32_t L_29 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		int32_t L_30 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		NullCheck(L_27);
		String_t* L_31;
		L_31 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_27, L_28, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		V_1 = L_31;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		String_t* L_32 = V_1;
		return L_32;
	}
}
// System.String FairyGUI.Utils.XMLIterator::GetText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetText_m9BAF35809110EED6C79B0EE76ED7AB6A2A304997 (bool ___trim0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (lastTagEnd == tagPos)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		int32_t L_1 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_3;
		goto IL_00b4;
	}

IL_001c:
	{
		// else if (trim)
		bool L_4 = ___trim0;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		// int i = lastTagEnd;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_6 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		V_3 = L_6;
		goto IL_004f;
	}

IL_002a:
	{
		// char c = source[i];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_7 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		V_4 = L_9;
		// if (!char.IsWhiteSpace(c))
		Il2CppChar L_10 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_10, NULL);
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		// break;
		goto IL_005d;
	}

IL_004a:
	{
		// for (; i < tagPos; i++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		// for (; i < tagPos; i++)
		int32_t L_14 = V_3;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_15 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_6;
		if (L_16)
		{
			goto IL_002a;
		}
	}

IL_005d:
	{
		// if (i == tagPos)
		int32_t L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_18 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return string.Empty;
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_20;
		goto IL_00b4;
	}

IL_0073:
	{
		// return XMLUtils.DecodeString(source.Substring(i, tagPos - i).TrimEnd());
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_21 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_22 = V_3;
		int32_t L_23 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		int32_t L_24 = V_3;
		NullCheck(L_21);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_21, L_22, ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = XMLUtils_DecodeString_mBD4F2A44A5ED93B945F2975F3CB1C23BA190D754(L_26, NULL);
		V_1 = L_27;
		goto IL_00b4;
	}

IL_0092:
	{
		// return XMLUtils.DecodeString(source.Substring(lastTagEnd, tagPos - lastTagEnd));
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_28 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_29 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		int32_t L_30 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		int32_t L_31 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lastTagEnd_8;
		NullCheck(L_28);
		String_t* L_32;
		L_32 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_28, L_29, ((int32_t)il2cpp_codegen_subtract(L_30, L_31)), NULL);
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = XMLUtils_DecodeString_mBD4F2A44A5ED93B945F2975F3CB1C23BA190D754(L_32, NULL);
		V_1 = L_33;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Boolean FairyGUI.Utils.XMLIterator::HasAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLIterator_HasAttribute_mA72E1A72EB2A55217682B3A5B034E662C754B2B7 (String_t* ___attrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!attrParsed)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		bool L_0 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attrParsed_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// attributes.Clear();
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		NullCheck(L_2);
		Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586(L_2, Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		// ParseAttributes(attributes);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		XMLIterator_ParseAttributes_m730B0902B230207AF5CF2B7EEEA5AD3AD28E0D5C(L_3, NULL);
		// attrParsed = true;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attrParsed_9 = (bool)1;
	}

IL_002b:
	{
		// return attributes.ContainsKey(attrName);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		String_t* L_5 = ___attrName0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_4, L_5, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.String FairyGUI.Utils.XMLIterator::GetAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetAttribute_m7928223F35A39D07AE67672DA1D3BEEB1A62EF13 (String_t* ___attrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// if (!attrParsed)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		bool L_0 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attrParsed_9;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// attributes.Clear();
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		NullCheck(L_2);
		Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586(L_2, Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		// ParseAttributes(attributes);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		XMLIterator_ParseAttributes_m730B0902B230207AF5CF2B7EEEA5AD3AD28E0D5C(L_3, NULL);
		// attrParsed = true;
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attrParsed_9 = (bool)1;
	}

IL_002b:
	{
		// if (attributes.TryGetValue(attrName, out value))
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		String_t* L_5 = ___attrName0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// return value;
		String_t* L_8 = V_0;
		V_3 = L_8;
		goto IL_0044;
	}

IL_0040:
	{
		// return null;
		V_3 = (String_t*)NULL;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		String_t* L_9 = V_3;
		return L_9;
	}
}
// System.String FairyGUI.Utils.XMLIterator::GetAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetAttribute_mC9DA031F190F0F15B754F4DE7FB120A2683E2ED2 (String_t* ___attrName0, String_t* ___defValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// string ret = GetAttribute(attrName);
		String_t* L_0 = ___attrName0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XMLIterator_GetAttribute_m7928223F35A39D07AE67672DA1D3BEEB1A62EF13(L_0, NULL);
		V_0 = L_1;
		// if (ret != null)
		String_t* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return ret;
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_0018;
	}

IL_0014:
	{
		// return defValue;
		String_t* L_5 = ___defValue1;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.Int32 FairyGUI.Utils.XMLIterator::GetAttributeInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XMLIterator_GetAttributeInt_m167959E44AA6CBB609E29A75AB025297B41DD82C (String_t* ___attrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return GetAttributeInt(attrName, 0);
		String_t* L_0 = ___attrName0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = XMLIterator_GetAttributeInt_m5C3CDF11BEAD05CAE8D56A9E19414AFC21282D9F(L_0, 0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 FairyGUI.Utils.XMLIterator::GetAttributeInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XMLIterator_GetAttributeInt_m5C3CDF11BEAD05CAE8D56A9E19414AFC21282D9F (String_t* ___attrName0, int32_t ___defValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// string value = GetAttribute(attrName);
		String_t* L_0 = ___attrName0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XMLIterator_GetAttribute_m7928223F35A39D07AE67672DA1D3BEEB1A62EF13(L_0, NULL);
		V_0 = L_1;
		// if (value == null || value.Length == 0)
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return defValue;
		int32_t L_6 = ___defValue1;
		V_3 = L_6;
		goto IL_0035;
	}

IL_001f:
	{
		// if (int.TryParse(value, out ret))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_7, (&V_1), NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return ret;
		int32_t L_10 = V_1;
		V_3 = L_10;
		goto IL_0035;
	}

IL_0031:
	{
		// return defValue;
		int32_t L_11 = ___defValue1;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		int32_t L_12 = V_3;
		return L_12;
	}
}
// System.Single FairyGUI.Utils.XMLIterator::GetAttributeFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XMLIterator_GetAttributeFloat_m1DD7D841E9EBC646BB6848F3B987852576CD368D (String_t* ___attrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return GetAttributeFloat(attrName, 0);
		String_t* L_0 = ___attrName0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = XMLIterator_GetAttributeFloat_m58D17A404C6CEB381E97326F614E0D6F7EF31417(L_0, (0.0f), NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single FairyGUI.Utils.XMLIterator::GetAttributeFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XMLIterator_GetAttributeFloat_m58D17A404C6CEB381E97326F614E0D6F7EF31417 (String_t* ___attrName0, float ___defValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// string value = GetAttribute(attrName);
		String_t* L_0 = ___attrName0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XMLIterator_GetAttribute_m7928223F35A39D07AE67672DA1D3BEEB1A62EF13(L_0, NULL);
		V_0 = L_1;
		// if (value == null || value.Length == 0)
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return defValue;
		float L_6 = ___defValue1;
		V_3 = L_6;
		goto IL_0035;
	}

IL_001f:
	{
		// if (float.TryParse(value, out ret))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_7, (&V_1), NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return ret;
		float L_10 = V_1;
		V_3 = L_10;
		goto IL_0035;
	}

IL_0031:
	{
		// return defValue;
		float L_11 = ___defValue1;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		float L_12 = V_3;
		return L_12;
	}
}
// System.Boolean FairyGUI.Utils.XMLIterator::GetAttributeBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLIterator_GetAttributeBool_mF652722359C2A5AE6D22DD716685C599F5A984C5 (String_t* ___attrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return GetAttributeBool(attrName, false);
		String_t* L_0 = ___attrName0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = XMLIterator_GetAttributeBool_m3BDE84FF718676CFBC227D73DB431AE7A22DE30A(L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean FairyGUI.Utils.XMLIterator::GetAttributeBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLIterator_GetAttributeBool_m3BDE84FF718676CFBC227D73DB431AE7A22DE30A (String_t* ___attrName0, bool ___defValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// string value = GetAttribute(attrName);
		String_t* L_0 = ___attrName0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XMLIterator_GetAttribute_m7928223F35A39D07AE67672DA1D3BEEB1A62EF13(L_0, NULL);
		V_0 = L_1;
		// if (value == null || value.Length == 0)
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return defValue;
		bool L_6 = ___defValue1;
		V_3 = L_6;
		goto IL_0035;
	}

IL_001f:
	{
		// if (bool.TryParse(value, out ret))
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F(L_7, (&V_1), NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return ret;
		bool L_10 = V_1;
		V_3 = L_10;
		goto IL_0035;
	}

IL_0031:
	{
		// return defValue;
		bool L_11 = ___defValue1;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> FairyGUI.Utils.XMLIterator::GetAttributes(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* XMLIterator_GetAttributes_m401006905FAF06471992F1A5FB1D2E060A020F2E (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_4 = NULL;
	{
		// if (result == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___result0;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// result = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		___result0 = L_2;
	}

IL_0010:
	{
		// if (attrParsed)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		bool L_3 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attrParsed_9;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// foreach (KeyValuePair<string, string> kv in attributes)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		NullCheck(L_5);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_6;
		L_6 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_5, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_2), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0028_1:
			{
				// foreach (KeyValuePair<string, string> kv in attributes)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_7;
				L_7 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_2), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_3 = L_7;
				// result[kv.Key] = kv.Value;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___result0;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_10;
				L_10 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_8);
				Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_8, L_9, L_10, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
			}

IL_0045_1:
			{
				// foreach (KeyValuePair<string, string> kv in attributes)
				bool L_11;
				L_11 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_2), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		goto IL_0069;
	}

IL_0062:
	{
		// ParseAttributes(result);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = ___result0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		XMLIterator_ParseAttributes_m730B0902B230207AF5CF2B7EEEA5AD3AD28E0D5C(L_12, NULL);
	}

IL_0069:
	{
		// return result;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = ___result0;
		V_4 = L_13;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_4;
		return L_14;
	}
}
// System.Collections.Hashtable FairyGUI.Utils.XMLIterator::GetAttributes(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* XMLIterator_GetAttributes_mF65F3F4CB49851C6349F612783D668AEB2A568FE (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_4 = NULL;
	{
		// if (result == null)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___result0;
		V_0 = (bool)((((RuntimeObject*)(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// result = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_2, NULL);
		___result0 = L_2;
	}

IL_0010:
	{
		// if (attrParsed)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		bool L_3 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attrParsed_9;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// foreach (KeyValuePair<string, string> kv in attributes)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12;
		NullCheck(L_5);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_6;
		L_6 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_5, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_2), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0028_1:
			{
				// foreach (KeyValuePair<string, string> kv in attributes)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_7;
				L_7 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_2), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_3 = L_7;
				// result[kv.Key] = kv.Value;
				Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_8 = ___result0;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_10;
				L_10 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_8);
				VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(31 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_8, L_9, L_10);
			}

IL_0045_1:
			{
				// foreach (KeyValuePair<string, string> kv in attributes)
				bool L_11;
				L_11 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_2), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		goto IL_0069;
	}

IL_0062:
	{
		// ParseAttributes(result);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_12 = ___result0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		XMLIterator_ParseAttributes_m730B0902B230207AF5CF2B7EEEA5AD3AD28E0D5C(L_12, NULL);
	}

IL_0069:
	{
		// return result;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_13 = ___result0;
		V_4 = L_13;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = V_4;
		return L_14;
	}
}
// System.Void FairyGUI.Utils.XMLIterator::ParseAttributes(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator_ParseAttributes_m730B0902B230207AF5CF2B7EEEA5AD3AD28E0D5C (RuntimeObject* ___attrs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	Il2CppChar V_8 = 0x0;
	bool V_9 = false;
	bool V_10 = false;
	Il2CppChar V_11 = 0x0;
	bool V_12 = false;
	int32_t V_13 = 0;
	Il2CppChar V_14 = 0x0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B69_0 = 0;
	{
		// bool waitValue = false;
		V_3 = (bool)0;
		// buffer.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		// int i = tagPos;
		int32_t L_1 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		V_5 = L_1;
		// int attrEnd = tagPos + tagLength;
		int32_t L_2 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagPos_6;
		int32_t L_3 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___tagLength_7;
		V_6 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		// if (i < attrEnd && source[i] == '<')
		int32_t L_4 = V_5;
		int32_t L_5 = V_6;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_6 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		G_B3_0 = ((((int32_t)L_8) == ((int32_t)((int32_t)60)))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B3_0 = 0;
	}

IL_003c:
	{
		V_7 = (bool)G_B3_0;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_007b;
	}

IL_0045:
	{
		// char c = source[i];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_10 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_8 = L_12;
		// if (Char.IsWhiteSpace(c) || c == '>' || c == '/')
		Il2CppChar L_13 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_13, NULL);
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		Il2CppChar L_15 = V_8;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)62))))
		{
			goto IL_006b;
		}
	}
	{
		Il2CppChar L_16 = V_8;
		G_B9_0 = ((((int32_t)L_16) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B9_0 = 1;
	}

IL_006c:
	{
		V_9 = (bool)G_B9_0;
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		// break;
		goto IL_0087;
	}

IL_0074:
	{
		// for (; i < attrEnd; i++)
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007b:
	{
		// for (; i < attrEnd; i++)
		int32_t L_19 = V_5;
		int32_t L_20 = V_6;
		V_10 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_10;
		if (L_21)
		{
			goto IL_0045;
		}
	}

IL_0087:
	{
	}

IL_0088:
	{
		goto IL_02fd;
	}

IL_008d:
	{
		// char c = source[i];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_22 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, L_23, NULL);
		V_11 = L_24;
		// if (c == '=')
		Il2CppChar L_25 = V_11;
		V_12 = (bool)((((int32_t)L_25) == ((int32_t)((int32_t)61)))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_023c;
		}
	}
	{
		// valueStart = -1;
		V_1 = (-1);
		// valueEnd = -1;
		V_2 = (-1);
		// quoted = 0;
		V_4 = 0;
		// for (int j = i + 1; j < attrEnd; j++)
		int32_t L_27 = V_5;
		V_13 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		goto IL_01bf;
	}

IL_00be:
	{
		// char c2 = source[j];
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		String_t* L_28 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_29 = V_13;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, L_29, NULL);
		V_14 = L_30;
		// if (Char.IsWhiteSpace(c2))
		Il2CppChar L_31 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_31, NULL);
		V_15 = L_32;
		bool L_33 = V_15;
		if (!L_33)
		{
			goto IL_00fe;
		}
	}
	{
		// if (valueStart != -1 && quoted == 0)
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_35 = V_4;
		G_B21_0 = ((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B21_0 = 0;
	}

IL_00e7:
	{
		V_16 = (bool)G_B21_0;
		bool L_36 = V_16;
		if (!L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// valueEnd = j - 1;
		int32_t L_37 = V_13;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		// break;
		goto IL_01ce;
	}

IL_00f8:
	{
		goto IL_01b8;
	}

IL_00fe:
	{
		// else if (c2 == '>')
		Il2CppChar L_38 = V_14;
		V_17 = (bool)((((int32_t)L_38) == ((int32_t)((int32_t)62)))? 1 : 0);
		bool L_39 = V_17;
		if (!L_39)
		{
			goto IL_0127;
		}
	}
	{
		// if (quoted == 0)
		int32_t L_40 = V_4;
		V_18 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_18;
		if (!L_41)
		{
			goto IL_0121;
		}
	}
	{
		// valueEnd = j - 1;
		int32_t L_42 = V_13;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		// break;
		goto IL_01ce;
	}

IL_0121:
	{
		goto IL_01b8;
	}

IL_0127:
	{
		// else if (c2 == '"')
		Il2CppChar L_43 = V_14;
		V_19 = (bool)((((int32_t)L_43) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_44 = V_19;
		if (!L_44)
		{
			goto IL_0168;
		}
	}
	{
		// if (valueStart != -1)
		int32_t L_45 = V_1;
		V_20 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_20;
		if (!L_46)
		{
			goto IL_015b;
		}
	}
	{
		// if (quoted != 1)
		int32_t L_47 = V_4;
		V_21 = (bool)((((int32_t)((((int32_t)L_47) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_21;
		if (!L_48)
		{
			goto IL_0158;
		}
	}
	{
		// valueEnd = j - 1;
		int32_t L_49 = V_13;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
		// break;
		goto IL_01ce;
	}

IL_0158:
	{
		goto IL_0165;
	}

IL_015b:
	{
		// quoted = 2;
		V_4 = 2;
		// valueStart = j + 1;
		int32_t L_50 = V_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0165:
	{
		goto IL_01b8;
	}

IL_0168:
	{
		// else if (c2 == '\'')
		Il2CppChar L_51 = V_14;
		V_22 = (bool)((((int32_t)L_51) == ((int32_t)((int32_t)39)))? 1 : 0);
		bool L_52 = V_22;
		if (!L_52)
		{
			goto IL_01a9;
		}
	}
	{
		// if (valueStart != -1)
		int32_t L_53 = V_1;
		V_23 = (bool)((((int32_t)((((int32_t)L_53) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_23;
		if (!L_54)
		{
			goto IL_019c;
		}
	}
	{
		// if (quoted != 2)
		int32_t L_55 = V_4;
		V_24 = (bool)((((int32_t)((((int32_t)L_55) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_24;
		if (!L_56)
		{
			goto IL_0199;
		}
	}
	{
		// valueEnd = j - 1;
		int32_t L_57 = V_13;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		// break;
		goto IL_01ce;
	}

IL_0199:
	{
		goto IL_01a6;
	}

IL_019c:
	{
		// quoted = 1;
		V_4 = 1;
		// valueStart = j + 1;
		int32_t L_58 = V_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_01a6:
	{
		goto IL_01b8;
	}

IL_01a9:
	{
		// else if (valueStart == -1)
		int32_t L_59 = V_1;
		V_25 = (bool)((((int32_t)L_59) == ((int32_t)(-1)))? 1 : 0);
		bool L_60 = V_25;
		if (!L_60)
		{
			goto IL_01b8;
		}
	}
	{
		// valueStart = j;
		int32_t L_61 = V_13;
		V_1 = L_61;
	}

IL_01b8:
	{
		// for (int j = i + 1; j < attrEnd; j++)
		int32_t L_62 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01bf:
	{
		// for (int j = i + 1; j < attrEnd; j++)
		int32_t L_63 = V_13;
		int32_t L_64 = V_6;
		V_26 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_26;
		if (L_65)
		{
			goto IL_00be;
		}
	}

IL_01ce:
	{
		// if (valueStart != -1 && valueEnd != -1)
		int32_t L_66 = V_1;
		if ((((int32_t)L_66) == ((int32_t)(-1))))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_67 = V_2;
		G_B49_0 = ((((int32_t)((((int32_t)L_67) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01dc;
	}

IL_01db:
	{
		G_B49_0 = 0;
	}

IL_01dc:
	{
		V_27 = (bool)G_B49_0;
		bool L_68 = V_27;
		if (!L_68)
		{
			goto IL_0231;
		}
	}
	{
		// attrName = buffer.ToString();
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_69 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_69);
		V_0 = L_70;
		// if (lowerCaseName)
		bool L_71 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lowerCaseName_10;
		V_28 = L_71;
		bool L_72 = V_28;
		if (!L_72)
		{
			goto IL_0200;
		}
	}
	{
		// attrName = attrName.ToLower();
		String_t* L_73 = V_0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_73, NULL);
		V_0 = L_74;
	}

IL_0200:
	{
		// buffer.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_75 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_75);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_75, 0, NULL);
		// attrs[attrName] = XMLUtils.DecodeString(source.Substring(valueStart, valueEnd - valueStart + 1));
		RuntimeObject* L_76 = ___attrs0;
		String_t* L_77 = V_0;
		String_t* L_78 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___source_3;
		int32_t L_79 = V_1;
		int32_t L_80 = V_2;
		int32_t L_81 = V_1;
		NullCheck(L_78);
		String_t* L_82;
		L_82 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_78, L_79, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_80, L_81)), 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		String_t* L_83;
		L_83 = XMLUtils_DecodeString_mBD4F2A44A5ED93B945F2975F3CB1C23BA190D754(L_82, NULL);
		NullCheck(L_76);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_76, L_77, L_83);
		// i = valueEnd + 1;
		int32_t L_84 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		goto IL_0236;
	}

IL_0231:
	{
		// break;
		goto IL_030c;
	}

IL_0236:
	{
		goto IL_02f6;
	}

IL_023c:
	{
		// else if (!Char.IsWhiteSpace(c))
		Il2CppChar L_85 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_85, NULL);
		V_29 = (bool)((((int32_t)L_86) == ((int32_t)0))? 1 : 0);
		bool L_87 = V_29;
		if (!L_87)
		{
			goto IL_02df;
		}
	}
	{
		// if (waitValue || c == '/' || c == '>')
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_0261;
		}
	}
	{
		Il2CppChar L_89 = V_11;
		if ((((int32_t)L_89) == ((int32_t)((int32_t)47))))
		{
			goto IL_0261;
		}
	}
	{
		Il2CppChar L_90 = V_11;
		G_B60_0 = ((((int32_t)L_90) == ((int32_t)((int32_t)62)))? 1 : 0);
		goto IL_0262;
	}

IL_0261:
	{
		G_B60_0 = 1;
	}

IL_0262:
	{
		V_30 = (bool)G_B60_0;
		bool L_91 = V_30;
		if (!L_91)
		{
			goto IL_02b7;
		}
	}
	{
		// if (buffer.Length > 0)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_92 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_92, NULL);
		V_31 = (bool)((((int32_t)L_93) > ((int32_t)0))? 1 : 0);
		bool L_94 = V_31;
		if (!L_94)
		{
			goto IL_02b4;
		}
	}
	{
		// attrName = buffer.ToString();
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_95 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_95);
		String_t* L_96;
		L_96 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_95);
		V_0 = L_96;
		// if (lowerCaseName)
		bool L_97 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___lowerCaseName_10;
		V_32 = L_97;
		bool L_98 = V_32;
		if (!L_98)
		{
			goto IL_029a;
		}
	}
	{
		// attrName = attrName.ToLower();
		String_t* L_99 = V_0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_99, NULL);
		V_0 = L_100;
	}

IL_029a:
	{
		// attrs[attrName] = string.Empty;
		RuntimeObject* L_101 = ___attrs0;
		String_t* L_102 = V_0;
		String_t* L_103 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_101);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_101, L_102, L_103);
		// buffer.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_104 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_104);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_104, 0, NULL);
	}

IL_02b4:
	{
		// waitValue = false;
		V_3 = (bool)0;
	}

IL_02b7:
	{
		// if (c != '/' && c != '>')
		Il2CppChar L_105 = V_11;
		if ((((int32_t)L_105) == ((int32_t)((int32_t)47))))
		{
			goto IL_02c8;
		}
	}
	{
		Il2CppChar L_106 = V_11;
		G_B69_0 = ((((int32_t)((((int32_t)L_106) == ((int32_t)((int32_t)62)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02c9;
	}

IL_02c8:
	{
		G_B69_0 = 0;
	}

IL_02c9:
	{
		V_33 = (bool)G_B69_0;
		bool L_107 = V_33;
		if (!L_107)
		{
			goto IL_02dc;
		}
	}
	{
		// buffer.Append(c);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_108 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		Il2CppChar L_109 = V_11;
		NullCheck(L_108);
		StringBuilder_t* L_110;
		L_110 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_108, L_109, NULL);
	}

IL_02dc:
	{
		goto IL_02f6;
	}

IL_02df:
	{
		// if (buffer.Length > 0)
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_111 = ((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_111, NULL);
		V_34 = (bool)((((int32_t)L_112) > ((int32_t)0))? 1 : 0);
		bool L_113 = V_34;
		if (!L_113)
		{
			goto IL_02f5;
		}
	}
	{
		// waitValue = true;
		V_3 = (bool)1;
	}

IL_02f5:
	{
	}

IL_02f6:
	{
		// for (; i < attrEnd; i++)
		int32_t L_114 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02fd:
	{
		// for (; i < attrEnd; i++)
		int32_t L_115 = V_5;
		int32_t L_116 = V_6;
		V_35 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_35;
		if (L_117)
		{
			goto IL_008d;
		}
	}

IL_030c:
	{
		// }
		return;
	}
}
// System.Void FairyGUI.Utils.XMLIterator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator__ctor_mF1935AEB21D17B0A5FAD487BFAD870D4A882AF58 (XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FairyGUI.Utils.XMLIterator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator__cctor_mD88203C16711438F7BFCCB737A2207777E7CC7F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static StringBuilder buffer = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___buffer_11), (void*)L_0);
		// static Dictionary<string, string> attributes = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_tB11768100AB5489EB95FB16072C0B935A3EC5F1C_il2cpp_TypeInfo_var))->___attributes_12), (void*)L_1);
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
// System.Void FairyGUI.Utils.XMLList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLList__ctor_m15330294A790EA0AFDF53827022332EE15EB794D (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XMLList()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// rawList = new List<XML>();
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*)il2cpp_codegen_object_new(List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A(L_0, List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A_RuntimeMethod_var);
		__this->___rawList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawList_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void FairyGUI.Utils.XMLList::.ctor(System.Collections.Generic.List`1<FairyGUI.Utils.XML>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLList__ctor_m79B5317914AA0676FD84F942D77FFCB133057013 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ___list0, const RuntimeMethod* method) 
{
	{
		// public XMLList(List<XML> list)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// rawList = list;
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = ___list0;
		__this->___rawList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawList_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void FairyGUI.Utils.XMLList::Add(FairyGUI.Utils.XML)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLList_Add_mBA1EA5C1CD8F2AE4624DD2CCCD7AC91FA56D6991 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* ___xml0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rawList.Add(xml);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->___rawList_0;
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_1 = ___xml0;
		NullCheck(L_0);
		List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_inline(L_0, L_1, List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FairyGUI.Utils.XMLList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLList_Clear_mCFD9B3EE01D7E497DAC2F9FD0D4D078900654310 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rawList.Clear();
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->___rawList_0;
		NullCheck(L_0);
		List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_inline(L_0, List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 FairyGUI.Utils.XMLList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XMLList_get_Count_m1659D8522E11040BD5D2CBEEDCF9C66161320C02 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return rawList.Count; }
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->___rawList_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_inline(L_0, List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return rawList.Count; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// FairyGUI.Utils.XML FairyGUI.Utils.XMLList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* XMLList_get_Item_mFF0226B0667E0486E8CAAEB5155C09C1DC236F86 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* V_0 = NULL;
	{
		// get { return rawList[index]; }
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->___rawList_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_2;
		L_2 = List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7(L_0, L_1, List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// get { return rawList[index]; }
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_3 = V_0;
		return L_3;
	}
}
// FairyGUI.Utils.XMLList/Enumerator FairyGUI.Utils.XMLList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 XMLList_GetEnumerator_mC95E21EC1187A4D3F5CC50571220F77B5B351E05 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, const RuntimeMethod* method) 
{
	Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Enumerator(rawList, null);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->___rawList_0;
		Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m525EE0B1C73A9236DD84AED16DFBF983809989C7((&L_1), L_0, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 L_2 = V_0;
		return L_2;
	}
}
// FairyGUI.Utils.XMLList/Enumerator FairyGUI.Utils.XMLList::GetEnumerator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 XMLList_GetEnumerator_m3D4A920E85CD87DF94A859E05F7B3ABF3F85D956 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, String_t* ___selector0, const RuntimeMethod* method) 
{
	Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Enumerator(rawList, selector);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->___rawList_0;
		String_t* L_1 = ___selector0;
		Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m525EE0B1C73A9236DD84AED16DFBF983809989C7((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91 L_3 = V_0;
		return L_3;
	}
}
// FairyGUI.Utils.XMLList FairyGUI.Utils.XMLList::Filter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* XMLList_Filter_m31E776C4566EA5A278F6358643B2E6A28BFDAAA1 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, String_t* ___selector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* V_7 = NULL;
	XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* V_8 = NULL;
	{
		// bool allFit = true;
		V_0 = (bool)1;
		// _tmpList.Clear();
		il2cpp_codegen_runtime_class_init_inline(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = ((XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields*)il2cpp_codegen_static_fields_for(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var))->____tmpList_1;
		NullCheck(L_0);
		List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_inline(L_0, List_1_Clear_mE90B0292D87C80725D7A126E65BF9BE268C19F81_RuntimeMethod_var);
		// int cnt = rawList.Count;
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_1 = __this->___rawList_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_inline(L_1, List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		V_1 = L_2;
		// for (int i = 0; i < cnt; i++)
		V_2 = 0;
		goto IL_0053;
	}

IL_001e:
	{
		// XML xml = rawList[i];
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_3 = __this->___rawList_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_5;
		L_5 = List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7(L_3, L_4, List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		V_3 = L_5;
		// if (xml.name == selector)
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_6 = V_3;
		NullCheck(L_6);
		String_t* L_7 = L_6->___name_0;
		String_t* L_8 = ___selector0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, L_8, NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// _tmpList.Add(xml);
		il2cpp_codegen_runtime_class_init_inline(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_11 = ((XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields*)il2cpp_codegen_static_fields_for(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var))->____tmpList_1;
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_inline(L_11, L_12, List_1_Add_m764F11DD8397710541FE8E4F1C771DC85F47725E_RuntimeMethod_var);
		goto IL_004e;
	}

IL_004c:
	{
		// allFit = false;
		V_0 = (bool)0;
	}

IL_004e:
	{
		// for (int i = 0; i < cnt; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < cnt; i++)
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_001e;
		}
	}
	{
		// if (allFit)
		bool L_17 = V_0;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		// return this;
		V_7 = __this;
		goto IL_0086;
	}

IL_0069:
	{
		// XMLList ret = new XMLList(_tmpList);
		il2cpp_codegen_runtime_class_init_inline(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_19 = ((XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields*)il2cpp_codegen_static_fields_for(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var))->____tmpList_1;
		XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* L_20 = (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE*)il2cpp_codegen_object_new(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		XMLList__ctor_m79B5317914AA0676FD84F942D77FFCB133057013(L_20, L_19, NULL);
		V_8 = L_20;
		// _tmpList = new List<XML>();
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_21 = (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*)il2cpp_codegen_object_new(List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A(L_21, List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A_RuntimeMethod_var);
		((XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields*)il2cpp_codegen_static_fields_for(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var))->____tmpList_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields*)il2cpp_codegen_static_fields_for(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var))->____tmpList_1), (void*)L_21);
		// return ret;
		XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* L_22 = V_8;
		V_7 = L_22;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* L_23 = V_7;
		return L_23;
	}
}
// FairyGUI.Utils.XML FairyGUI.Utils.XMLList::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* XMLList_Find_m03D445AD37BE9C130D71E7BCB9A490AA781688A3 (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, String_t* ___selector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* V_2 = NULL;
	bool V_3 = false;
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* V_4 = NULL;
	bool V_5 = false;
	{
		// int cnt = rawList.Count;
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->___rawList_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_inline(L_0, List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < cnt; i++)
		V_1 = 0;
		goto IL_0039;
	}

IL_0011:
	{
		// XML xml = rawList[i];
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_2 = __this->___rawList_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_4;
		L_4 = List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7(L_2, L_3, List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		V_2 = L_4;
		// if (xml.name == selector)
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = L_5->___name_0;
		String_t* L_7 = ___selector0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		// return xml;
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_10 = V_2;
		V_4 = L_10;
		goto IL_0048;
	}

IL_0034:
	{
		// for (int i = 0; i < cnt; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < cnt; i++)
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_5;
		if (L_14)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		V_4 = (XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784*)NULL;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_15 = V_4;
		return L_15;
	}
}
// System.Void FairyGUI.Utils.XMLList::RemoveAll(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLList_RemoveAll_mE88F95D2CBDEA48F52A314EBA576AC9F3EDFC15F (XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE* __this, String_t* ___selector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_mE974B714E4137AA619735CEE6720077F93400190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CRemoveAllU3Eb__0_m40C58B9E54412A94EF088529FAB54424A70478ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D* L_0 = (U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m4DD668D3A084B2F9C307294F299C088BA6B52742(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D* L_1 = V_0;
		String_t* L_2 = ___selector0;
		NullCheck(L_1);
		L_1->___selector_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___selector_0), (void*)L_2);
		// rawList.RemoveAll(xml => xml.name == selector);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_3 = __this->___rawList_0;
		U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D* L_4 = V_0;
		Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751* L_5 = (Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751*)il2cpp_codegen_object_new(Predicate_1_t2D563AADA11B88183D4EABFC5EC5A710AAD4D751_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m2DAF6A4EB12D28EAC8393D03FEF5D06F987E2921(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CRemoveAllU3Eb__0_m40C58B9E54412A94EF088529FAB54424A70478ED_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_RemoveAll_mE974B714E4137AA619735CEE6720077F93400190(L_3, L_5, List_1_RemoveAll_mE974B714E4137AA619735CEE6720077F93400190_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FairyGUI.Utils.XMLList::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLList__cctor_mF007839206818BEB07EC0BD3FF3E1DB83193231E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XML> _tmpList = new List<XML>();
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = (List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*)il2cpp_codegen_object_new(List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A(L_0, List_1__ctor_m0BB6C372E676C136E86409B480AF9A45D583696A_RuntimeMethod_var);
		((XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields*)il2cpp_codegen_static_fields_for(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var))->____tmpList_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_StaticFields*)il2cpp_codegen_static_fields_for(XMLList_t36519228C259E56AEDAFF92E7BDD54212B52AFCE_il2cpp_TypeInfo_var))->____tmpList_1), (void*)L_0);
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
// Conversion methods for marshalling of: FairyGUI.Utils.XMLList/Enumerator
IL2CPP_EXTERN_C void Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshal_pinvoke(const Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91& unmarshaled, Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_pinvoke& marshaled)
{
	Exception_t* ____source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_source' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____source_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshal_pinvoke_back(const Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_pinvoke& marshaled, Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91& unmarshaled)
{
	Exception_t* ____source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_source' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____source_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: FairyGUI.Utils.XMLList/Enumerator
IL2CPP_EXTERN_C void Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshal_pinvoke_cleanup(Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FairyGUI.Utils.XMLList/Enumerator
IL2CPP_EXTERN_C void Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshal_com(const Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91& unmarshaled, Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_com& marshaled)
{
	Exception_t* ____source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_source' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____source_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshal_com_back(const Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_com& marshaled, Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91& unmarshaled)
{
	Exception_t* ____source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_source' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____source_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: FairyGUI.Utils.XMLList/Enumerator
IL2CPP_EXTERN_C void Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshal_com_cleanup(Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91_marshaled_com& marshaled)
{
}
// System.Void FairyGUI.Utils.XMLList/Enumerator::.ctor(System.Collections.Generic.List`1<FairyGUI.Utils.XML>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m525EE0B1C73A9236DD84AED16DFBF983809989C7 (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ___source0, String_t* ___selector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _source = source;
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = ___source0;
		__this->____source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_0), (void*)L_0);
		// _selector = selector;
		String_t* L_1 = ___selector1;
		__this->____selector_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selector_1), (void*)L_1);
		// _index = -1;
		__this->____index_2 = (-1);
		// if (_source != null)
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_2 = __this->____source_0;
		V_0 = (bool)((!(((RuntimeObject*)(List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// _total = _source.Count;
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_4 = __this->____source_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_inline(L_4, List_1_get_Count_mC15590B0A1F04FE63FCFF9EC3CF24BD4FBE7F54D_RuntimeMethod_var);
		__this->____total_3 = L_5;
		goto IL_003d;
	}

IL_0036:
	{
		// _total = 0;
		__this->____total_3 = 0;
	}

IL_003d:
	{
		// _current = null;
		__this->____current_4 = (XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_4), (void*)(XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m525EE0B1C73A9236DD84AED16DFBF983809989C7_AdjustorThunk (RuntimeObject* __this, List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* ___source0, String_t* ___selector1, const RuntimeMethod* method)
{
	Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91*>(__this + _offset);
	Enumerator__ctor_m525EE0B1C73A9236DD84AED16DFBF983809989C7(_thisAdjusted, ___source0, ___selector1, method);
}
// FairyGUI.Utils.XML FairyGUI.Utils.XMLList/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* Enumerator_get_Current_m8A1141FE322D58FACD6759EEA401EDCB9BA60A0E (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) 
{
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* V_0 = NULL;
	{
		// get { return _current; }
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_0 = __this->____current_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _current; }
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* Enumerator_get_Current_m8A1141FE322D58FACD6759EEA401EDCB9BA60A0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91*>(__this + _offset);
	XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* _returnValue;
	_returnValue = Enumerator_get_Current_m8A1141FE322D58FACD6759EEA401EDCB9BA60A0E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean FairyGUI.Utils.XMLList/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAEF88F7011EC7C547603A05C736AF07F615C50BF (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B4_0 = 0;
	{
		goto IL_0045;
	}

IL_0003:
	{
		// _current = _source[_index];
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->____source_0;
		int32_t L_1 = __this->____index_2;
		NullCheck(L_0);
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_2;
		L_2 = List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7(L_0, L_1, List_1_get_Item_mE4F202C2E366B9B44A5CF2050449DFBAD9BD29F7_RuntimeMethod_var);
		__this->____current_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_4), (void*)L_2);
		// if (_selector == null || _current.name == _selector)
		String_t* L_3 = __this->____selector_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_4 = __this->____current_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___name_0;
		String_t* L_6 = __this->____selector_1;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, L_6, NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_003c;
	}

IL_003b:
	{
		G_B4_0 = 1;
	}

IL_003c:
	{
		V_0 = (bool)G_B4_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0066;
	}

IL_0044:
	{
	}

IL_0045:
	{
		// while (++_index < _total)
		int32_t L_9 = __this->____index_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_3;
		__this->____index_2 = L_10;
		int32_t L_11 = V_3;
		int32_t L_12 = __this->____total_3;
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0003;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		bool L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mAEF88F7011EC7C547603A05C736AF07F615C50BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mAEF88F7011EC7C547603A05C736AF07F615C50BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FairyGUI.Utils.XMLList/Enumerator::Erase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Erase_m94D7AC50AEEB61FD43D2597B66996BB11EB0422B (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mB7E72C982FEAE9BE3362F469D773D76B2DFE4686_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _source.RemoveAt(_index);
		List_1_tAF4CE38EEAF448BF87FD532ABA95A463F2565B1F* L_0 = __this->____source_0;
		int32_t L_1 = __this->____index_2;
		NullCheck(L_0);
		List_1_RemoveAt_mB7E72C982FEAE9BE3362F469D773D76B2DFE4686(L_0, L_1, List_1_RemoveAt_mB7E72C982FEAE9BE3362F469D773D76B2DFE4686_RuntimeMethod_var);
		// _total--;
		int32_t L_2 = __this->____total_3;
		__this->____total_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Erase_m94D7AC50AEEB61FD43D2597B66996BB11EB0422B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91*>(__this + _offset);
	Enumerator_Erase_m94D7AC50AEEB61FD43D2597B66996BB11EB0422B(_thisAdjusted, method);
}
// System.Void FairyGUI.Utils.XMLList/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m3F956EF5263FECEBFF5AA41AC4842800EA0B4672 (Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* __this, const RuntimeMethod* method) 
{
	{
		// _index = -1;
		__this->____index_2 = (-1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m3F956EF5263FECEBFF5AA41AC4842800EA0B4672_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t9C9188BFFAA80C80E3DFE002ADCBF00C39303E91*>(__this + _offset);
	Enumerator_Reset_m3F956EF5263FECEBFF5AA41AC4842800EA0B4672(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FairyGUI.Utils.XMLList/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m4DD668D3A084B2F9C307294F299C088BA6B52742 (U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FairyGUI.Utils.XMLList/<>c__DisplayClass14_0::<RemoveAll>b__0(FairyGUI.Utils.XML)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CRemoveAllU3Eb__0_m40C58B9E54412A94EF088529FAB54424A70478ED (U3CU3Ec__DisplayClass14_0_t3C32CD2B94D94757E196F5B344E067AA1340048D* __this, XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* ___xml0, const RuntimeMethod* method) 
{
	{
		// rawList.RemoveAll(xml => xml.name == selector);
		XML_t0E0E339E40D628E8EF9D95CA44A27B341E315784* L_0 = ___xml0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___selector_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		return L_3;
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
// System.String FairyGUI.Utils.XMLUtils::DecodeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLUtils_DecodeString_mBD4F2A44A5ED93B945F2975F3CB1C23BA190D754 (String_t* ___aSource0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C6FDC4565162D67861B63909523AE24FE5E083E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	String_t* V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	String_t* V_18 = NULL;
	int32_t G_B11_0 = 0;
	{
		// int len = aSource.Length;
		String_t* L_0 = ___aSource0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_1 = L_2;
		// int pos1 = 0, pos2 = 0;
		V_2 = 0;
		// int pos1 = 0, pos2 = 0;
		V_3 = 0;
		goto IL_01df;
	}

IL_0017:
	{
		// pos2 = aSource.IndexOf('&', pos1);
		String_t* L_3 = ___aSource0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_3, ((int32_t)38), L_4, NULL);
		V_3 = L_5;
		// if (pos2 == -1)
		int32_t L_6 = V_3;
		V_5 = (bool)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// sb.Append(aSource.Substring(pos1));
		StringBuilder_t* L_8 = V_1;
		String_t* L_9 = ___aSource0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_9, L_10, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_11, NULL);
		// break;
		goto IL_01e7;
	}

IL_0040:
	{
		// sb.Append(aSource.Substring(pos1, pos2 - pos1));
		StringBuilder_t* L_13 = V_1;
		String_t* L_14 = ___aSource0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		NullCheck(L_14);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
		NullCheck(L_13);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, L_18, NULL);
		// pos1 = pos2 + 1;
		int32_t L_20 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// pos2 = pos1;
		int32_t L_21 = V_2;
		V_3 = L_21;
		// int end = Math.Min(len, pos2 + 10);
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)10))), NULL);
		V_4 = L_24;
		goto IL_007e;
	}

IL_0065:
	{
		// if (aSource[pos2] == ';')
		String_t* L_25 = ___aSource0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, L_26, NULL);
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)((int32_t)59)))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0079;
		}
	}
	{
		// break;
		goto IL_0089;
	}

IL_0079:
	{
		// for (; pos2 < end; pos2++)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_007e:
	{
		// for (; pos2 < end; pos2++)
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		V_7 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_0065;
		}
	}

IL_0089:
	{
		// if (pos2 < end && pos2 > pos1)
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_35 = V_3;
		int32_t L_36 = V_2;
		G_B11_0 = ((((int32_t)L_35) > ((int32_t)L_36))? 1 : 0);
		goto IL_0095;
	}

IL_0094:
	{
		G_B11_0 = 0;
	}

IL_0095:
	{
		V_8 = (bool)G_B11_0;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_01d3;
		}
	}
	{
		// string entity = aSource.Substring(pos1, pos2 - pos1);
		String_t* L_38 = ___aSource0;
		int32_t L_39 = V_2;
		int32_t L_40 = V_3;
		int32_t L_41 = V_2;
		NullCheck(L_38);
		String_t* L_42;
		L_42 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_38, L_39, ((int32_t)il2cpp_codegen_subtract(L_40, L_41)), NULL);
		V_9 = L_42;
		// int u = 0;
		V_10 = 0;
		// if (entity[0] == '#')
		String_t* L_43 = V_9;
		NullCheck(L_43);
		Il2CppChar L_44;
		L_44 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_43, 0, NULL);
		V_11 = (bool)((((int32_t)L_44) == ((int32_t)((int32_t)35)))? 1 : 0);
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_0126;
		}
	}
	{
		// if (entity.Length > 1)
		String_t* L_46 = V_9;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		V_12 = (bool)((((int32_t)L_47) > ((int32_t)1))? 1 : 0);
		bool L_48 = V_12;
		if (!L_48)
		{
			goto IL_0117;
		}
	}
	{
		// if (entity[1] == 'x')
		String_t* L_49 = V_9;
		NullCheck(L_49);
		Il2CppChar L_50;
		L_50 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_49, 1, NULL);
		V_13 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)120)))? 1 : 0);
		bool L_51 = V_13;
		if (!L_51)
		{
			goto IL_00f7;
		}
	}
	{
		// u = Convert.ToInt16(entity.Substring(2), 16);
		String_t* L_52 = V_9;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_52, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_54;
		L_54 = Convert_ToInt16_mB19CE8A8A4BAFB372C5CDA374532B08CF0DB3654(L_53, ((int32_t)16), NULL);
		V_10 = L_54;
		goto IL_0106;
	}

IL_00f7:
	{
		// u = Convert.ToInt16(entity.Substring(1));
		String_t* L_55 = V_9;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_55, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_57;
		L_57 = Convert_ToInt16_m9BB26D534FA4E6E2D32DCA99AB95BDD056CBB7E4(L_56, NULL);
		V_10 = L_57;
	}

IL_0106:
	{
		// sb.Append((char)u);
		StringBuilder_t* L_58 = V_1;
		int32_t L_59 = V_10;
		NullCheck(L_58);
		StringBuilder_t* L_60;
		L_60 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_58, ((int32_t)(uint16_t)L_59), NULL);
		// pos1 = pos2 + 1;
		int32_t L_61 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_61, 1));
		goto IL_0120;
	}

IL_0117:
	{
		// sb.Append('&');
		StringBuilder_t* L_62 = V_1;
		NullCheck(L_62);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_62, ((int32_t)38), NULL);
	}

IL_0120:
	{
		goto IL_01d0;
	}

IL_0126:
	{
		// switch (entity)
		String_t* L_64 = V_9;
		V_15 = L_64;
		String_t* L_65 = V_15;
		V_14 = L_65;
		String_t* L_66 = V_14;
		bool L_67;
		L_67 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_66, _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62, NULL);
		if (L_67)
		{
			goto IL_0185;
		}
	}
	{
		String_t* L_68 = V_14;
		bool L_69;
		L_69 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_68, _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12, NULL);
		if (L_69)
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_70 = V_14;
		bool L_71;
		L_71 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_70, _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B, NULL);
		if (L_71)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_72 = V_14;
		bool L_73;
		L_73 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_72, _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9, NULL);
		if (L_73)
		{
			goto IL_0197;
		}
	}
	{
		String_t* L_74 = V_14;
		bool L_75;
		L_75 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_74, _stringLiteral6C6FDC4565162D67861B63909523AE24FE5E083E, NULL);
		if (L_75)
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_76 = V_14;
		bool L_77;
		L_77 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_76, _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406, NULL);
		if (L_77)
		{
			goto IL_01a3;
		}
	}
	{
		goto IL_01a9;
	}

IL_0185:
	{
		// u = 38;
		V_10 = ((int32_t)38);
		// break;
		goto IL_01a9;
	}

IL_018b:
	{
		// u = 39;
		V_10 = ((int32_t)39);
		// break;
		goto IL_01a9;
	}

IL_0191:
	{
		// u = 62;
		V_10 = ((int32_t)62);
		// break;
		goto IL_01a9;
	}

IL_0197:
	{
		// u = 60;
		V_10 = ((int32_t)60);
		// break;
		goto IL_01a9;
	}

IL_019d:
	{
		// u = 32;
		V_10 = ((int32_t)32);
		// break;
		goto IL_01a9;
	}

IL_01a3:
	{
		// u = 34;
		V_10 = ((int32_t)34);
		// break;
		goto IL_01a9;
	}

IL_01a9:
	{
		// if (u > 0)
		int32_t L_78 = V_10;
		V_16 = (bool)((((int32_t)L_78) > ((int32_t)0))? 1 : 0);
		bool L_79 = V_16;
		if (!L_79)
		{
			goto IL_01c6;
		}
	}
	{
		// sb.Append((char)u);
		StringBuilder_t* L_80 = V_1;
		int32_t L_81 = V_10;
		NullCheck(L_80);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_80, ((int32_t)(uint16_t)L_81), NULL);
		// pos1 = pos2 + 1;
		int32_t L_83 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_01cf;
	}

IL_01c6:
	{
		// sb.Append('&');
		StringBuilder_t* L_84 = V_1;
		NullCheck(L_84);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_84, ((int32_t)38), NULL);
	}

IL_01cf:
	{
	}

IL_01d0:
	{
		goto IL_01de;
	}

IL_01d3:
	{
		// sb.Append('&');
		StringBuilder_t* L_86 = V_1;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_86, ((int32_t)38), NULL);
	}

IL_01de:
	{
	}

IL_01df:
	{
		// while (true)
		V_17 = (bool)1;
		goto IL_0017;
	}

IL_01e7:
	{
		// return sb.ToString();
		StringBuilder_t* L_88 = V_1;
		NullCheck(L_88);
		String_t* L_89;
		L_89 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_88);
		V_18 = L_89;
		goto IL_01f1;
	}

IL_01f1:
	{
		// }
		String_t* L_90 = V_18;
		return L_90;
	}
}
// System.Void FairyGUI.Utils.XMLUtils::EncodeString(System.Text.StringBuilder,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLUtils_EncodeString_mB1BB9A8C20451902DC221789BF0916E71B26E468 (StringBuilder_t* ___sb0, int32_t ___start1, bool ___isAttribute2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// int len = isAttribute ? ESCAPES.Length : 6;
		bool L_0 = ___isAttribute2;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 6;
		goto IL_000e;
	}

IL_0007:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var))->___ESCAPES_0;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}

IL_000e:
	{
		V_1 = G_B3_0;
		// for (int i = 0; i < len; i += 2)
		V_2 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		// count = sb.Length - start;
		StringBuilder_t* L_2 = ___sb0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_2, NULL);
		int32_t L_4 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
		// sb.Replace(ESCAPES[i], ESCAPES[i + 1], start, count);
		StringBuilder_t* L_5 = ___sb0;
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var))->___ESCAPES_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var))->___ESCAPES_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = ___start1;
		int32_t L_15 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Replace_mB0C05C33BEED1FB701AD826C0E1B3D08ADE66760(L_5, L_9, L_13, L_14, L_15, NULL);
		// for (int i = 0; i < len; i += 2)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 2));
	}

IL_003b:
	{
		// for (int i = 0; i < len; i += 2)
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.String FairyGUI.Utils.XMLUtils::EncodeString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLUtils_EncodeString_mC322E774D80A3039FC23DD940121677F47E883CA (String_t* ___str0, bool ___isAttribute1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	{
		// if (string.IsNullOrEmpty(str))
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_002d;
	}

IL_0013:
	{
		// StringBuilder sb = new StringBuilder(str);
		String_t* L_3 = ___str0;
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_4, L_3, NULL);
		V_2 = L_4;
		// EncodeString(sb, 0);
		StringBuilder_t* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		XMLUtils_EncodeString_mB1BB9A8C20451902DC221789BF0916E71B26E468(L_5, 0, (bool)0, NULL);
		// return sb.ToString();
		StringBuilder_t* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_1 = L_7;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void FairyGUI.Utils.XMLUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLUtils__ctor_m4085527DCB10ED2A2E897A1D40F61912A590121A (XMLUtils_t371862E103294083F79820724D290EF3EF82CA74* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FairyGUI.Utils.XMLUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLUtils__cctor_mE792E15C1B82BCF4F251D3E84BCA88093F1D5895 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral067D631C255D4E0E8E6A2125BB825F7560FC55E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1BBBF61A4D1102347EC72F429616D233963501);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D44CAE1E3BEFC39260D137678DC510676429C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string[] ESCAPES = new string[] {
		//     "&", "&amp;",
		//     "<", "&lt;",
		//     ">", "&gt;",
		// 
		//     "'", "&apos;",
		//     "\"", "&quot;",
		//     "\t", "&#x9;",
		//     "\n", "&#xA;",
		//     "\r", "&#xD;"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralF6D44CAE1E3BEFC39260D137678DC510676429C3);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralF6D44CAE1E3BEFC39260D137678DC510676429C3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3C1BBBF61A4D1102347EC72F429616D233963501);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3C1BBBF61A4D1102347EC72F429616D233963501);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral067D631C255D4E0E8E6A2125BB825F7560FC55E5);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral067D631C255D4E0E8E6A2125BB825F7560FC55E5);
		((XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var))->___ESCAPES_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_t371862E103294083F79820724D290EF3EF82CA74_il2cpp_TypeInfo_var))->___ESCAPES_0), (void*)L_16);
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
// System.Void FairyGUI.Utils.ZipReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipReader__ctor_mA131189A74A4FDD27A030D296733A91B6F914650 (ZipReader_t2F6951270D42C8E8C5EB6113EA0EE7F6356B9B5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public ZipReader(byte[] data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _stream = new ByteBuffer(data);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_1 = (ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550*)il2cpp_codegen_object_new(ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ByteBuffer__ctor_m65B0BF0F8B2B01ED88B725E7A93899E4F2A78E6B(L_1, L_0, 0, (-1), NULL);
		__this->____stream_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_0), (void*)L_1);
		// _stream.littleEndian = true;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_2 = __this->____stream_0;
		NullCheck(L_2);
		L_2->___littleEndian_0 = (bool)1;
		// int pos = _stream.length - 22;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_3 = __this->____stream_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ByteBuffer_get_length_m279884C997BE572F45AC85BC7056652DC73E4C27(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)22)));
		// _stream.position = pos + 10;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_5 = __this->____stream_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_5, ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)10))), NULL);
		// _entryCount = _stream.ReadShort();
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_7 = __this->____stream_0;
		NullCheck(L_7);
		int16_t L_8;
		L_8 = ByteBuffer_ReadShort_mE3ACB496B028F1CF9147A2A73B93AD9816BC403C(L_7, NULL);
		__this->____entryCount_1 = L_8;
		// _stream.position = pos + 16;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_9 = __this->____stream_0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)16))), NULL);
		// _pos = _stream.ReadInt();
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_11 = __this->____stream_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ByteBuffer_ReadInt_mA9E0A036529817DFF40E2ADC1D535C40503D771E(L_11, NULL);
		__this->____pos_2 = L_12;
		// }
		return;
	}
}
// System.Int32 FairyGUI.Utils.ZipReader::get_entryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipReader_get_entryCount_m4FD6DECC6C81B2F2779D44785BDE3A60E33567E1 (ZipReader_t2F6951270D42C8E8C5EB6113EA0EE7F6356B9B5F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _entryCount; }
		int32_t L_0 = __this->____entryCount_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _entryCount; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean FairyGUI.Utils.ZipReader::GetNextEntry(FairyGUI.Utils.ZipReader/ZipEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipReader_GetNextEntry_mC3DC6D373ECA8269CE3217A9482764A817602A2B (ZipReader_t2F6951270D42C8E8C5EB6113EA0EE7F6356B9B5F* __this, ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* ___entry0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		// if (_index >= _entryCount)
		int32_t L_0 = __this->____index_3;
		int32_t L_1 = __this->____entryCount_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_01a6;
	}

IL_001e:
	{
		// _stream.position = _pos + 28;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_3 = __this->____stream_0;
		int32_t L_4 = __this->____pos_2;
		NullCheck(L_3);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)28))), NULL);
		// int len = _stream.ReadUshort();
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_5 = __this->____stream_0;
		NullCheck(L_5);
		uint16_t L_6;
		L_6 = ByteBuffer_ReadUshort_m8DBFF2A9F68B4C08454D714BB552D3EC6FE14639(L_5, NULL);
		V_0 = L_6;
		// int len2 = _stream.ReadUshort() + _stream.ReadUshort();
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_7 = __this->____stream_0;
		NullCheck(L_7);
		uint16_t L_8;
		L_8 = ByteBuffer_ReadUshort_m8DBFF2A9F68B4C08454D714BB552D3EC6FE14639(L_7, NULL);
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_9 = __this->____stream_0;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = ByteBuffer_ReadUshort_m8DBFF2A9F68B4C08454D714BB552D3EC6FE14639(L_9, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10));
		// _stream.position = _pos + 46;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_11 = __this->____stream_0;
		int32_t L_12 = __this->____pos_2;
		NullCheck(L_11);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_11, ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)46))), NULL);
		// string name = _stream.ReadString(len);
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_13 = __this->____stream_0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = ByteBuffer_ReadString_m1F0DA5DCBAC07C82425F98EFD566EE830FF57764(L_13, L_14, NULL);
		V_2 = L_15;
		// name = name.Replace("\\", "/");
		String_t* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_16, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_2 = L_17;
		// entry.name = name;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_18 = ___entry0;
		String_t* L_19 = V_2;
		NullCheck(L_18);
		L_18->___name_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___name_0), (void*)L_19);
		// if (name[name.Length - 1] == '/') //directory
		String_t* L_20 = V_2;
		String_t* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		NullCheck(L_20);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), NULL);
		V_5 = (bool)((((int32_t)L_23) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00de;
		}
	}
	{
		// entry.isDirectory = true;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_25 = ___entry0;
		NullCheck(L_25);
		L_25->___isDirectory_6 = (bool)1;
		// entry.compress = 0;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_26 = ___entry0;
		NullCheck(L_26);
		L_26->___compress_1 = 0;
		// entry.crc = 0;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_27 = ___entry0;
		NullCheck(L_27);
		L_27->___crc_2 = 0;
		// entry.size = entry.sourceSize = 0;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_28 = ___entry0;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_29 = ___entry0;
		int32_t L_30 = 0;
		V_6 = L_30;
		NullCheck(L_29);
		L_29->___sourceSize_4 = L_30;
		int32_t L_31 = V_6;
		NullCheck(L_28);
		L_28->___size_3 = L_31;
		// entry.offset = 0;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_32 = ___entry0;
		NullCheck(L_32);
		L_32->___offset_5 = 0;
		goto IL_0180;
	}

IL_00de:
	{
		// entry.isDirectory = false;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_33 = ___entry0;
		NullCheck(L_33);
		L_33->___isDirectory_6 = (bool)0;
		// _stream.position = _pos + 10;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_34 = __this->____stream_0;
		int32_t L_35 = __this->____pos_2;
		NullCheck(L_34);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_34, ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)10))), NULL);
		// entry.compress = _stream.ReadUshort();
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_36 = ___entry0;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_37 = __this->____stream_0;
		NullCheck(L_37);
		uint16_t L_38;
		L_38 = ByteBuffer_ReadUshort_m8DBFF2A9F68B4C08454D714BB552D3EC6FE14639(L_37, NULL);
		NullCheck(L_36);
		L_36->___compress_1 = L_38;
		// _stream.position = _pos + 16;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_39 = __this->____stream_0;
		int32_t L_40 = __this->____pos_2;
		NullCheck(L_39);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)16))), NULL);
		// entry.crc = _stream.ReadUint();
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_41 = ___entry0;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_42 = __this->____stream_0;
		NullCheck(L_42);
		uint32_t L_43;
		L_43 = ByteBuffer_ReadUint_m1085BCF50D511A12830A749DE8EBBD1EEE578DE5(L_42, NULL);
		NullCheck(L_41);
		L_41->___crc_2 = L_43;
		// entry.size = _stream.ReadInt();
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_44 = ___entry0;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_45 = __this->____stream_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = ByteBuffer_ReadInt_mA9E0A036529817DFF40E2ADC1D535C40503D771E(L_45, NULL);
		NullCheck(L_44);
		L_44->___size_3 = L_46;
		// entry.sourceSize = _stream.ReadInt();
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_47 = ___entry0;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_48 = __this->____stream_0;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = ByteBuffer_ReadInt_mA9E0A036529817DFF40E2ADC1D535C40503D771E(L_48, NULL);
		NullCheck(L_47);
		L_47->___sourceSize_4 = L_49;
		// _stream.position = _pos + 42;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_50 = __this->____stream_0;
		int32_t L_51 = __this->____pos_2;
		NullCheck(L_50);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_50, ((int32_t)il2cpp_codegen_add(L_51, ((int32_t)42))), NULL);
		// entry.offset = _stream.ReadInt() + 30 + len;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_52 = ___entry0;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_53 = __this->____stream_0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = ByteBuffer_ReadInt_mA9E0A036529817DFF40E2ADC1D535C40503D771E(L_53, NULL);
		int32_t L_55 = V_0;
		NullCheck(L_52);
		L_52->___offset_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_54, ((int32_t)30))), L_55));
	}

IL_0180:
	{
		// _pos += 46 + len + len2;
		int32_t L_56 = __this->____pos_2;
		int32_t L_57 = V_0;
		int32_t L_58 = V_1;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_56, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)46), L_57)), L_58))));
		// _index++;
		int32_t L_59 = __this->____index_3;
		__this->____index_3 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		// return true;
		V_4 = (bool)1;
		goto IL_01a6;
	}

IL_01a6:
	{
		// }
		bool L_60 = V_4;
		return L_60;
	}
}
// System.Byte[] FairyGUI.Utils.ZipReader::GetEntryData(FairyGUI.Utils.ZipReader/ZipEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipReader_GetEntryData_mF07AC416D6C6C97C8EF857F14D123BF0FE9862C2 (ZipReader_t2F6951270D42C8E8C5EB6113EA0EE7F6356B9B5F* __this, ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* ___entry0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// byte[] data = new byte[entry.size];
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_0 = ___entry0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___size_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// if (entry.size > 0)
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_3 = ___entry0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___size_3;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// _stream.position = entry.offset;
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_6 = __this->____stream_0;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_7 = ___entry0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___offset_5;
		NullCheck(L_6);
		ByteBuffer_set_position_m1570E90E7ABCF8B6F7809CA88D5A87B58E6B49CE(L_6, L_8, NULL);
		// _stream.ReadBytes(data, 0, entry.size);
		ByteBuffer_tD137766921DBA7B568492D4367B8D2D3C9A99550* L_9 = __this->____stream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ZipEntry_tA075A7290A8C2EA41040EE8D31EBD4DB054B999A* L_11 = ___entry0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___size_3;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ByteBuffer_ReadBytes_m9CC38C232FDA0899A37CA2527CE4A26B70B13742(L_9, L_10, 0, L_12, NULL);
	}

IL_0042:
	{
		// return data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		V_2 = L_14;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		return L_15;
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
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// return _abBytes[dllName];
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* L_0 = ((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->____abBytes_5;
		String_t* L_1 = ___dllName0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E(L_0, L_1, Dictionary_2_get_Item_m7642FA3563DFA7698DD6A3543DA4C8F83E5AE16E_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
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
	bool V_1 = false;
	String_t* V_2 = NULL;
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
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// path = "file://" + path;
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_6, NULL);
		V_0 = L_7;
	}

IL_0032:
	{
		// return path;
		String_t* L_8 = V_0;
		V_2 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Collections.IEnumerator PostMainland.LoadDll::DownLoadDlls(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadDll_DownLoadDlls_mE8C3BE4FB286F0FF54AA7483B4211323B5503BA2 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDownloadComplete0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* L_0 = (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7*)il2cpp_codegen_object_new(U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownLoadDllsU3Ed__9__ctor_m333302A882B4019A26C7468070CD2F9A3FA29822(L_0, 0, NULL);
		U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___onDownloadComplete0;
		NullCheck(L_2);
		L_2->___onDownloadComplete_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onDownloadComplete_2), (void*)L_3);
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
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = ((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_10;
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
		((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_10), (void*)L_0);
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
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* V_0 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_1 = NULL;
	{
		// AssetBundle dllAB = AssemblyAssetBundle = AssetBundle.LoadFromMemory(GetAbBytes("common"));
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = LoadDll_GetAbBytes_mD9C98BA3700CB7BDD29464FEA4A6AD98EC01889C(_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_1;
		L_1 = AssetBundle_LoadFromMemory_m1F7131801BA50A09B382DDD86F3B80194B7B1FFE(L_0, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_2 = L_1;
		LoadDll_set_AssemblyAssetBundle_m97F94D8411D37EEABF2207A9F6DCB1C6B108BCD2_inline(L_2, NULL);
		V_0 = L_2;
		// TextAsset dllBytes1 = dllAB.LoadAsset<TextAsset>("Hotfix.dll.bytes");
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_3 = V_0;
		NullCheck(L_3);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_4;
		L_4 = AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A(L_3, _stringLiteralCD482D45B9ACB51A32833E88AE809C3743009694, AssetBundle_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m010EDC8EE1F2920CB3D7AFDB32BAE9461801050A_RuntimeMethod_var);
		V_1 = L_4;
		// Assembly.Load(dllBytes1.bytes);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_5 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_5, NULL);
		Assembly_t* L_7;
		L_7 = Assembly_Load_m53BD3A59473E6A3620D8F055191025D1E3C2D298(L_6, NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F9087F18DF346F81A42DDF3E29BE4EB3DC674E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0904794AA225B058D09D9F44679550F3014728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE002B7FD7F0E5A229F68220E59B1BB11488731A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2CF30CDF767E11A78CE0D5C65C604190A189F12);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	MethodInfo_t* V_5 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_6 = NULL;
	bool V_7 = false;
	Delegate_t* G_B5_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B7_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B6_0 = NULL;
	Delegate_t* G_B8_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B8_1 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B10_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B9_0 = NULL;
	Delegate_t* G_B11_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B11_1 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B13_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B12_0 = NULL;
	Delegate_t* G_B14_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B14_1 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B16_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B15_0 = NULL;
	Delegate_t* G_B17_0 = NULL;
	LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* G_B17_1 = NULL;
	{
		// if (_gameAss == null)
		Assembly_t* L_0 = __this->____gameAss_4;
		bool L_1;
		L_1 = Assembly_op_Equality_m689511E72BD71ADDAE4684F065083FB23CA7182F(L_0, (Assembly_t*)NULL, NULL);
		V_7 = L_1;
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// UnityEngine.Debug.LogError("dll???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB2CF30CDF767E11A78CE0D5C65C604190A189F12, NULL);
		// return;
		goto IL_0120;
	}

IL_0024:
	{
		// var game = _gameAss.GetType("PostMainland.Game");
		Assembly_t* L_3 = __this->____gameAss_4;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(19 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_3, _stringLiteralAE002B7FD7F0E5A229F68220E59B1BB11488731A);
		V_0 = L_4;
		// MethodInfo miStart = game.GetMethod("Start");
		Type_t* L_5 = V_0;
		NullCheck(L_5);
		MethodInfo_t* L_6;
		L_6 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_5, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		V_1 = L_6;
		// MethodInfo miUpdate = game.GetMethod("Update");
		Type_t* L_7 = V_0;
		NullCheck(L_7);
		MethodInfo_t* L_8;
		L_8 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_7, _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6, NULL);
		V_2 = L_8;
		// MethodInfo miFixedUpdate = game.GetMethod("FixedUpdate");
		Type_t* L_9 = V_0;
		NullCheck(L_9);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_9, _stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8, NULL);
		V_3 = L_10;
		// MethodInfo miLateUpdate = game.GetMethod("LateUpdate");
		Type_t* L_11 = V_0;
		NullCheck(L_11);
		MethodInfo_t* L_12;
		L_12 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_11, _stringLiteral1F0904794AA225B058D09D9F44679550F3014728, NULL);
		V_4 = L_12;
		// MethodInfo miOnApplicationQuit = game.GetMethod("OnApplicationQuit");
		Type_t* L_13 = V_0;
		NullCheck(L_13);
		MethodInfo_t* L_14;
		L_14 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_13, _stringLiteral17F9087F18DF346F81A42DDF3E29BE4EB3DC674E, NULL);
		V_5 = L_14;
		// Action start = (Action)miStart?.CreateDelegate(typeof(Action));
		MethodInfo_t* L_15 = V_1;
		if (L_15)
		{
			goto IL_0079;
		}
	}
	{
		G_B5_0 = ((Delegate_t*)(NULL));
		goto IL_0089;
	}

IL_0079:
	{
		MethodInfo_t* L_16 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		NullCheck(L_16);
		Delegate_t* L_19;
		L_19 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_16, L_18);
		G_B5_0 = L_19;
	}

IL_0089:
	{
		V_6 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B5_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		// _game_Update = (Action)miUpdate?.CreateDelegate(typeof(Action));
		MethodInfo_t* L_20 = V_2;
		G_B6_0 = __this;
		if (L_20)
		{
			G_B7_0 = __this;
			goto IL_0097;
		}
	}
	{
		G_B8_0 = ((Delegate_t*)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_00a7;
	}

IL_0097:
	{
		MethodInfo_t* L_21 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		NullCheck(L_21);
		Delegate_t* L_24;
		L_24 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_21, L_23);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_0;
	}

IL_00a7:
	{
		NullCheck(G_B8_1);
		G_B8_1->____game_Update_6 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B8_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->____game_Update_6), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B8_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// _game_FixedUpdate = (Action)miFixedUpdate?.CreateDelegate(typeof(Action));
		MethodInfo_t* L_25 = V_3;
		G_B9_0 = __this;
		if (L_25)
		{
			G_B10_0 = __this;
			goto IL_00b8;
		}
	}
	{
		G_B11_0 = ((Delegate_t*)(NULL));
		G_B11_1 = G_B9_0;
		goto IL_00c8;
	}

IL_00b8:
	{
		MethodInfo_t* L_26 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_27, NULL);
		NullCheck(L_26);
		Delegate_t* L_29;
		L_29 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_26, L_28);
		G_B11_0 = L_29;
		G_B11_1 = G_B10_0;
	}

IL_00c8:
	{
		NullCheck(G_B11_1);
		G_B11_1->____game_FixedUpdate_7 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B11_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->____game_FixedUpdate_7), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B11_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// _game_LateUpdate = (Action)miLateUpdate?.CreateDelegate(typeof(Action));
		MethodInfo_t* L_30 = V_4;
		G_B12_0 = __this;
		if (L_30)
		{
			G_B13_0 = __this;
			goto IL_00da;
		}
	}
	{
		G_B14_0 = ((Delegate_t*)(NULL));
		G_B14_1 = G_B12_0;
		goto IL_00eb;
	}

IL_00da:
	{
		MethodInfo_t* L_31 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
		NullCheck(L_31);
		Delegate_t* L_34;
		L_34 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_31, L_33);
		G_B14_0 = L_34;
		G_B14_1 = G_B13_0;
	}

IL_00eb:
	{
		NullCheck(G_B14_1);
		G_B14_1->____game_LateUpdate_8 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B14_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_1->____game_LateUpdate_8), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B14_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// _game_OnApplicationQuit = (Action)miOnApplicationQuit?.CreateDelegate(typeof(Action));
		MethodInfo_t* L_35 = V_5;
		G_B15_0 = __this;
		if (L_35)
		{
			G_B16_0 = __this;
			goto IL_00fd;
		}
	}
	{
		G_B17_0 = ((Delegate_t*)(NULL));
		G_B17_1 = G_B15_0;
		goto IL_010e;
	}

IL_00fd:
	{
		MethodInfo_t* L_36 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		NullCheck(L_36);
		Delegate_t* L_39;
		L_39 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_36, L_38);
		G_B17_0 = L_39;
		G_B17_1 = G_B16_0;
	}

IL_010e:
	{
		NullCheck(G_B17_1);
		G_B17_1->____game_OnApplicationQuit_9 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B17_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B17_1->____game_OnApplicationQuit_9), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B17_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// start();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_40 = V_6;
		NullCheck(L_40);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_40, NULL);
	}

IL_0120:
	{
		// }
		return;
	}
}
// System.Void PostMainland.LoadDll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_Update_m734D2A25CBEABEC0AFA7793137FA108FB8D8CFBC (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PostMainland.LoadDll::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_FixedUpdate_m5660951BA7BA41C48337917850CD42A3391A798E (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PostMainland.LoadDll::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_LateUpdate_m7BA1BE5E83DCCC7E6126BF2FC6FF9474DE1623E1 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PostMainland.LoadDll::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_OnApplicationQuit_mCEEF6C93774E15CF9EC1C7578BE87323A6622089 (LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__9__ctor_m333302A882B4019A26C7468070CD2F9A3FA29822 (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__9_System_IDisposable_Dispose_m62B9616829E0BF583FE3E557AB98C9CDEE4311BB (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PostMainland.LoadDll/<DownLoadDlls>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownLoadDllsU3Ed__9_MoveNext_m4B4F765CAE59594BA3E884A5253FEC289C51DAD6 (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28934E5EA2F56554DE167D05A0D99B894D609D5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4E8446539A176775E7FAD720AC4E860EB2C4EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral543F5C57FC39284750082AD04C4EE9A0295EE386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral609FEB4E26D12D77194B8C93B9FB4BBCEC2E5E35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ADFDC2F2C63343EB9FEAC4AF0CF3CE7EB903E0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EA99A0471A7114A9EC175460FCA2312B8FED28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8F2BE4C8A0EE7F81F5528FE1AE3C85636376B8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD6802922233B2514B76DFAE8EE645BD75420347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00c7;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("===========================1");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBD6802922233B2514B76DFAE8EE645BD75420347, NULL);
		// var abs = new string[]
		// {
		// "common",
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDC99E95A31C8C0EAC33C33DB56D1A26B35DC611D);
		__this->___U3CabsU3E5__1_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabsU3E5__1_4), (void*)L_4);
		// foreach (var ab in abs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___U3CabsU3E5__1_4;
		__this->___U3CU3Es__2_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)L_5);
		__this->___U3CU3Es__3_6 = 0;
		goto IL_01ac;
	}

IL_005b:
	{
		// foreach (var ab in abs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___U3CU3Es__2_5;
		int32_t L_7 = __this->___U3CU3Es__3_6;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___U3CabU3E5__4_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabU3E5__4_7), (void*)L_9);
		// string dllPath = GetWebRequestPath(ab);
		LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C* L_10 = __this->___U3CU3E4__this_3;
		String_t* L_11 = __this->___U3CabU3E5__4_7;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = LoadDll_GetWebRequestPath_m050F90E93627404CBC62EBCE20E85EBA186F97D3(L_10, L_11, NULL);
		__this->___U3CdllPathU3E5__5_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllPathU3E5__5_8), (void*)L_12);
		// Debug.Log($"start download ab:{ab}");
		String_t* L_13 = __this->___U3CabU3E5__4_7;
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral543F5C57FC39284750082AD04C4EE9A0295EE386, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		// UnityWebRequest www = UnityWebRequest.Get(dllPath);
		String_t* L_15 = __this->___U3CdllPathU3E5__5_8;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16;
		L_16 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_15, NULL);
		__this->___U3CwwwU3E5__6_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__6_9), (void*)L_16);
		// yield return www.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwwwU3E5__6_9;
		NullCheck(L_17);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_18;
		L_18 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("===========================2");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6ADFDC2F2C63343EB9FEAC4AF0CF3CE7EB903E0D, NULL);
		// if (www.result != UnityWebRequest.Result.Success)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CwwwU3E5__6_9;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_19, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_010e;
		}
	}
	{
		// Debug.Log("===========================-1");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral28934E5EA2F56554DE167D05A0D99B894D609D5C, NULL);
		// Debug.Log(www.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CwwwU3E5__6_9;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_22, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
		goto IL_0188;
	}

IL_010e:
	{
		// Debug.Log("===========================3");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3E4E8446539A176775E7FAD720AC4E860EB2C4EF, NULL);
		// byte[] abBytes = www.downloadHandler.data;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwwwU3E5__6_9;
		NullCheck(L_24);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_25;
		L_25 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_24, NULL);
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_25, NULL);
		__this->___U3CabBytesU3E5__7_10 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabBytesU3E5__7_10), (void*)L_26);
		// Debug.Log($"dll:{ab}  size:{abBytes.Length}");
		String_t* L_27 = __this->___U3CabU3E5__4_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___U3CabBytesU3E5__7_10;
		NullCheck(L_28);
		int32_t L_29 = ((int32_t)(((RuntimeArray*)L_28)->max_length));
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31;
		L_31 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA8F2BE4C8A0EE7F81F5528FE1AE3C85636376B8C, L_27, L_30, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_31, NULL);
		// Debug.Log("===========================4");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral85EA99A0471A7114A9EC175460FCA2312B8FED28, NULL);
		// _abBytes[ab] = abBytes;
		il2cpp_codegen_runtime_class_init_inline(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var);
		Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* L_32 = ((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->____abBytes_5;
		String_t* L_33 = __this->___U3CabU3E5__4_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___U3CabBytesU3E5__7_10;
		NullCheck(L_32);
		Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F(L_32, L_33, L_34, Dictionary_2_set_Item_mC270D7DE1967C0EDD82AC75FB86E151C5EA9B26F_RuntimeMethod_var);
		// Debug.Log("===========================5");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral609FEB4E26D12D77194B8C93B9FB4BBCEC2E5E35, NULL);
		__this->___U3CabBytesU3E5__7_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabBytesU3E5__7_10), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_0188:
	{
		__this->___U3CdllPathU3E5__5_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllPathU3E5__5_8), (void*)(String_t*)NULL);
		__this->___U3CwwwU3E5__6_9 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__6_9), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CabU3E5__4_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabU3E5__4_7), (void*)(String_t*)NULL);
		int32_t L_35 = __this->___U3CU3Es__3_6;
		__this->___U3CU3Es__3_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_01ac:
	{
		// foreach (var ab in abs)
		int32_t L_36 = __this->___U3CU3Es__3_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___U3CU3Es__2_5;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		__this->___U3CU3Es__2_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// Debug.Log("===========================1");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBD6802922233B2514B76DFAE8EE645BD75420347, NULL);
		// onDownloadComplete();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_38 = __this->___onDownloadComplete_2;
		NullCheck(L_38);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_38, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PostMainland.LoadDll/<DownLoadDlls>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownLoadDllsU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5C3CAD7E726B070C27172314A48D4DEE89FD2B40 (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PostMainland.LoadDll/<DownLoadDlls>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownLoadDllsU3Ed__9_System_Collections_IEnumerator_Reset_mA4ADC58BCCE5D66B897A1623862B85F9359A2728 (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownLoadDllsU3Ed__9_System_Collections_IEnumerator_Reset_mA4ADC58BCCE5D66B897A1623862B85F9359A2728_RuntimeMethod_var)));
	}
}
// System.Object PostMainland.LoadDll/<DownLoadDlls>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownLoadDllsU3Ed__9_System_Collections_IEnumerator_get_Current_m27DD2C2CD37FE4E1A29A78BECBBE1A3F2B4BD6FA (U3CDownLoadDllsU3Ed__9_tCE9D89BFB2AE1E88B0376BC232773FA507B974C7* __this, const RuntimeMethod* method) 
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
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (logType)
		int32_t L_0 = ___logType0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		// UnityEngine.Debug.Log(message);
		String_t* L_3 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// break;
		goto IL_0036;
	}

IL_0022:
	{
		// UnityEngine.Debug.LogWarning(message);
		String_t* L_4 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_4, NULL);
		// break;
		goto IL_0036;
	}

IL_002b:
	{
		// UnityEngine.Debug.LogError(message);
		String_t* L_5 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_5, NULL);
		// break;
		goto IL_0036;
	}

IL_0034:
	{
		// break;
		goto IL_0036;
	}

IL_0036:
	{
		// if (exception != null)
		Exception_t* L_6 = ___exception3;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// UnityEngine.Debug.LogException(exception);
		Exception_t* L_8 = ___exception3;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_8, NULL);
	}

IL_0049:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* V_0 = NULL;
	{
		U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* L_0 = (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988*)il2cpp_codegen_object_new(U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__4__ctor_m68DA3682BCEDDA5CB00A244E706697A8A5B470EE(L_0, NULL);
		V_0 = L_0;
		U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m6BD0D8ABD8D49A47E1422E837EA703378A189F10_RuntimeMethod_var);
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
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0013:
	{
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
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0013:
	{
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
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0013:
	{
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
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0013:
	{
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
// System.Void PostMainland.Main/<Start>d__4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m68DA3682BCEDDA5CB00A244E706697A8A5B470EE (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
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
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* V_3 = NULL;
	Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	MethodInfo_t* G_B17_0 = NULL;
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* G_B17_1 = NULL;
	MethodInfo_t* G_B16_0 = NULL;
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* G_B16_1 = NULL;
	Delegate_t* G_B18_0 = NULL;
	U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* G_B18_1 = NULL;
	MethodInfo_t* G_B20_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B20_1 = NULL;
	MethodInfo_t* G_B19_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B19_1 = NULL;
	Delegate_t* G_B21_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B21_1 = NULL;
	MethodInfo_t* G_B23_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B23_1 = NULL;
	MethodInfo_t* G_B22_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B22_1 = NULL;
	Delegate_t* G_B24_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B24_1 = NULL;
	MethodInfo_t* G_B26_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B26_1 = NULL;
	MethodInfo_t* G_B25_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B25_1 = NULL;
	Delegate_t* G_B27_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B27_1 = NULL;
	MethodInfo_t* G_B29_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B29_1 = NULL;
	MethodInfo_t* G_B28_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B28_1 = NULL;
	Delegate_t* G_B30_0 = NULL;
	Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* G_B30_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001b_1;
				}
				case 1:
				{
					goto IL_001d_1;
				}
				case 2:
				{
					goto IL_0022_1;
				}
			}
		}
		{
			goto IL_0027_1;
		}

IL_001b_1:
		{
			goto IL_0072_1;
		}

IL_001d_1:
		{
			goto IL_00e1_1;
		}

IL_0022_1:
		{
			goto IL_0169_1;
		}

IL_0027_1:
		{
			// Application.runInBackground = true;
			Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70((bool)1, NULL);
			// await YooAssetsManager.Instance.Initialize();
			il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
			YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_2;
			L_2 = YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline(NULL);
			NullCheck(L_2);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
			L_3 = YooAssetsManager_Initialize_m922A65DA635D75650ECA8F6DC141A853050AC4AA(L_2, NULL);
			V_2 = L_3;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_4;
			L_4 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_1 = L_4;
			bool L_5;
			L_5 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_5)
			{
				goto IL_008e_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_7 = V_1;
			__this->___U3CU3Eu__1_15 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178(L_8, (&V_1), (&V_3), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m0E2392830AF03D04D58ED8396FD3D98B83773178_RuntimeMethod_var);
			goto IL_03ea;
		}

IL_0072_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9 = __this->___U3CU3Eu__1_15;
			V_1 = L_9;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_10 = (&__this->___U3CU3Eu__1_15);
			il2cpp_codegen_initobj(L_10, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_008e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			// var dll = await YooAssetsManager.Instance.LoadAsync<TextAsset>("HotfixDll_Code.dll");
			il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
			YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_12;
			L_12 = YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline(NULL);
			NullCheck(L_12);
			UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F L_13;
			L_13 = YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B(L_12, _stringLiteral0A32C142D3169BE735E6D22D213725020E0E4FCD, YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B_RuntimeMethod_var);
			V_5 = L_13;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_14;
			L_14 = UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_inline((&V_5), UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_RuntimeMethod_var);
			V_4 = L_14;
			bool L_15;
			L_15 = Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_inline((&V_4), Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_00fe_1;
			}
		}
		{
			int32_t L_16 = 1;
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_17 = V_4;
			__this->___U3CU3Eu__2_16 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___result_1), (void*)NULL);
			#endif
			V_3 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659(L_18, (&V_4), (&V_3), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659_RuntimeMethod_var);
			goto IL_03ea;
		}

IL_00e1_1:
		{
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_19 = __this->___U3CU3Eu__2_16;
			V_4 = L_19;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* L_20 = (&__this->___U3CU3Eu__2_16);
			il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
		}

IL_00fe_1:
		{
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_22;
			L_22 = Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_inline((&V_4), Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_RuntimeMethod_var);
			__this->___U3CU3Es__11_13 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__11_13), (void*)L_22);
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_23 = __this->___U3CU3Es__11_13;
			__this->___U3CdllU3E5__1_3 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllU3E5__1_3), (void*)L_23);
			__this->___U3CU3Es__11_13 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__11_13), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
			// var pdb = await YooAssetsManager.Instance.LoadAsync<TextAsset>("HotfixDll_Code.pdb");
			il2cpp_codegen_runtime_class_init_inline(YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278_il2cpp_TypeInfo_var);
			YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* L_24;
			L_24 = YooAssetsManager_get_Instance_mB38011DA2E30F2267C7BB124458714A992541906_inline(NULL);
			NullCheck(L_24);
			UniTask_1_tEFB702756F9BBC5F016EDC5821A1CAE9EA4A256F L_25;
			L_25 = YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B(L_24, _stringLiteralE600E34C3B072D351406D75E140CA24D4A78FD5B, YooAssetsManager_LoadAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_mD91EFA40BF788FAC571FBEC89662F064DA930C0B_RuntimeMethod_var);
			V_5 = L_25;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_26;
			L_26 = UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_inline((&V_5), UniTask_1_GetAwaiter_m6FFAAEC34F7BF15B133A54B2D1631336DC4D3FBD_RuntimeMethod_var);
			V_6 = L_26;
			bool L_27;
			L_27 = Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_inline((&V_6), Awaiter_get_IsCompleted_m12C4E790BD8E851C30F8C028495848B274D19F31_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0186_1;
			}
		}
		{
			int32_t L_28 = 2;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_29 = V_6;
			__this->___U3CU3Eu__2_16 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___result_1), (void*)NULL);
			#endif
			V_3 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659(L_30, (&V_6), (&V_3), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6_TisU3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988_m9843B3A9DCEB4DAE4821E8B50A45A1EBF7764659_RuntimeMethod_var);
			goto IL_03ea;
		}

IL_0169_1:
		{
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6 L_31 = __this->___U3CU3Eu__2_16;
			V_6 = L_31;
			Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6* L_32 = (&__this->___U3CU3Eu__2_16);
			il2cpp_codegen_initobj(L_32, sizeof(Awaiter_t06FE601BDBA4D949AB5E3777DDADC00784AD4DC6));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_0186_1:
		{
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_34;
			L_34 = Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_inline((&V_6), Awaiter_GetResult_m982A938997755931FB0E2B779AAF1B267455932C_RuntimeMethod_var);
			__this->___U3CU3Es__12_14 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__12_14), (void*)L_34);
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_35 = __this->___U3CU3Es__12_14;
			__this->___U3CpdbU3E5__2_4 = L_35;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpdbU3E5__2_4), (void*)L_35);
			__this->___U3CU3Es__12_14 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__12_14), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
			// Assembly ass = Assembly.Load(dll.bytes, pdb.bytes);
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_36 = __this->___U3CdllU3E5__1_3;
			NullCheck(L_36);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
			L_37 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_36, NULL);
			TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_38 = __this->___U3CpdbU3E5__2_4;
			NullCheck(L_38);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
			L_39 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_38, NULL);
			Assembly_t* L_40;
			L_40 = Assembly_Load_mAE493D99239E2456319BA641A32236E6FE2B4E31(L_37, L_39, NULL);
			__this->___U3CassU3E5__3_5 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassU3E5__3_5), (void*)L_40);
			// Type game = ass.GetType("PostMainland.Game");
			Assembly_t* L_41 = __this->___U3CassU3E5__3_5;
			NullCheck(L_41);
			Type_t* L_42;
			L_42 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(19 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_41, _stringLiteralAE002B7FD7F0E5A229F68220E59B1BB11488731A);
			__this->___U3CgameU3E5__4_6 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameU3E5__4_6), (void*)L_42);
			// MethodInfo miStart = game.GetMethod("Start");
			Type_t* L_43 = __this->___U3CgameU3E5__4_6;
			NullCheck(L_43);
			MethodInfo_t* L_44;
			L_44 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_43, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
			__this->___U3CmiStartU3E5__5_7 = L_44;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiStartU3E5__5_7), (void*)L_44);
			// MethodInfo miUpdate = game.GetMethod("Update");
			Type_t* L_45 = __this->___U3CgameU3E5__4_6;
			NullCheck(L_45);
			MethodInfo_t* L_46;
			L_46 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_45, _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6, NULL);
			__this->___U3CmiUpdateU3E5__6_8 = L_46;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiUpdateU3E5__6_8), (void*)L_46);
			// MethodInfo miFixedUpdate = game.GetMethod("FixedUpdate");
			Type_t* L_47 = __this->___U3CgameU3E5__4_6;
			NullCheck(L_47);
			MethodInfo_t* L_48;
			L_48 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_47, _stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8, NULL);
			__this->___U3CmiFixedUpdateU3E5__7_9 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiFixedUpdateU3E5__7_9), (void*)L_48);
			// MethodInfo miLateUpdate = game.GetMethod("LateUpdate");
			Type_t* L_49 = __this->___U3CgameU3E5__4_6;
			NullCheck(L_49);
			MethodInfo_t* L_50;
			L_50 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_49, _stringLiteral1F0904794AA225B058D09D9F44679550F3014728, NULL);
			__this->___U3CmiLateUpdateU3E5__8_10 = L_50;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiLateUpdateU3E5__8_10), (void*)L_50);
			// MethodInfo miOnApplicationQuit = game.GetMethod("OnApplicationQuit");
			Type_t* L_51 = __this->___U3CgameU3E5__4_6;
			NullCheck(L_51);
			MethodInfo_t* L_52;
			L_52 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_51, _stringLiteral17F9087F18DF346F81A42DDF3E29BE4EB3DC674E, NULL);
			__this->___U3CmiOnApplicationQuitU3E5__9_11 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiOnApplicationQuitU3E5__9_11), (void*)L_52);
			// Action start = (Action)miStart?.CreateDelegate(typeof(Action));
			MethodInfo_t* L_53 = __this->___U3CmiStartU3E5__5_7;
			MethodInfo_t* L_54 = L_53;
			G_B16_0 = L_54;
			G_B16_1 = __this;
			if (L_54)
			{
				G_B17_0 = L_54;
				G_B17_1 = __this;
				goto IL_0259_1;
			}
		}
		{
			G_B18_0 = ((Delegate_t*)(NULL));
			G_B18_1 = G_B16_1;
			goto IL_0268_1;
		}

IL_0259_1:
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_56;
			L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
			NullCheck(G_B17_0);
			Delegate_t* L_57;
			L_57 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, G_B17_0, L_56);
			G_B18_0 = L_57;
			G_B18_1 = G_B17_1;
		}

IL_0268_1:
		{
			NullCheck(G_B18_1);
			G_B18_1->___U3CstartU3E5__10_12 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B18_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B18_1->___U3CstartU3E5__10_12), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B18_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// _game_Update = (Action)miUpdate?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_58 = __this->___U3CU3E4__this_2;
			MethodInfo_t* L_59 = __this->___U3CmiUpdateU3E5__6_8;
			MethodInfo_t* L_60 = L_59;
			G_B19_0 = L_60;
			G_B19_1 = L_58;
			if (L_60)
			{
				G_B20_0 = L_60;
				G_B20_1 = L_58;
				goto IL_0285_1;
			}
		}
		{
			G_B21_0 = ((Delegate_t*)(NULL));
			G_B21_1 = G_B19_1;
			goto IL_0294_1;
		}

IL_0285_1:
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_62;
			L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
			NullCheck(G_B20_0);
			Delegate_t* L_63;
			L_63 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, G_B20_0, L_62);
			G_B21_0 = L_63;
			G_B21_1 = G_B20_1;
		}

IL_0294_1:
		{
			NullCheck(G_B21_1);
			G_B21_1->____game_Update_4 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B21_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B21_1->____game_Update_4), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B21_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// _game_FixedUpdate = (Action)miFixedUpdate?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_64 = __this->___U3CU3E4__this_2;
			MethodInfo_t* L_65 = __this->___U3CmiFixedUpdateU3E5__7_9;
			MethodInfo_t* L_66 = L_65;
			G_B22_0 = L_66;
			G_B22_1 = L_64;
			if (L_66)
			{
				G_B23_0 = L_66;
				G_B23_1 = L_64;
				goto IL_02b1_1;
			}
		}
		{
			G_B24_0 = ((Delegate_t*)(NULL));
			G_B24_1 = G_B22_1;
			goto IL_02c0_1;
		}

IL_02b1_1:
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_68;
			L_68 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_67, NULL);
			NullCheck(G_B23_0);
			Delegate_t* L_69;
			L_69 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, G_B23_0, L_68);
			G_B24_0 = L_69;
			G_B24_1 = G_B23_1;
		}

IL_02c0_1:
		{
			NullCheck(G_B24_1);
			G_B24_1->____game_FixedUpdate_5 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B24_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B24_1->____game_FixedUpdate_5), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B24_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// _game_LateUpdate = (Action)miLateUpdate?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_70 = __this->___U3CU3E4__this_2;
			MethodInfo_t* L_71 = __this->___U3CmiLateUpdateU3E5__8_10;
			MethodInfo_t* L_72 = L_71;
			G_B25_0 = L_72;
			G_B25_1 = L_70;
			if (L_72)
			{
				G_B26_0 = L_72;
				G_B26_1 = L_70;
				goto IL_02dd_1;
			}
		}
		{
			G_B27_0 = ((Delegate_t*)(NULL));
			G_B27_1 = G_B25_1;
			goto IL_02ec_1;
		}

IL_02dd_1:
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_74;
			L_74 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_73, NULL);
			NullCheck(G_B26_0);
			Delegate_t* L_75;
			L_75 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, G_B26_0, L_74);
			G_B27_0 = L_75;
			G_B27_1 = G_B26_1;
		}

IL_02ec_1:
		{
			NullCheck(G_B27_1);
			G_B27_1->____game_LateUpdate_6 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B27_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B27_1->____game_LateUpdate_6), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B27_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// _game_OnApplicationQuit = (Action)miOnApplicationQuit?.CreateDelegate(typeof(Action));
			Main_t96A05F9E310A709E4C455D4220374621BA5FAC36* L_76 = __this->___U3CU3E4__this_2;
			MethodInfo_t* L_77 = __this->___U3CmiOnApplicationQuitU3E5__9_11;
			MethodInfo_t* L_78 = L_77;
			G_B28_0 = L_78;
			G_B28_1 = L_76;
			if (L_78)
			{
				G_B29_0 = L_78;
				G_B29_1 = L_76;
				goto IL_0309_1;
			}
		}
		{
			G_B30_0 = ((Delegate_t*)(NULL));
			G_B30_1 = G_B28_1;
			goto IL_0318_1;
		}

IL_0309_1:
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_80;
			L_80 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_79, NULL);
			NullCheck(G_B29_0);
			Delegate_t* L_81;
			L_81 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(46 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, G_B29_0, L_80);
			G_B30_0 = L_81;
			G_B30_1 = G_B29_1;
		}

IL_0318_1:
		{
			NullCheck(G_B30_1);
			G_B30_1->____game_OnApplicationQuit_7 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B30_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&G_B30_1->____game_OnApplicationQuit_7), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)G_B30_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			// start();
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_82 = __this->___U3CstartU3E5__10_12;
			NullCheck(L_82);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_82, NULL);
			goto IL_0390;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0330;
		}
		throw e;
	}

CATCH_0330:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdllU3E5__1_3 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllU3E5__1_3), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
		__this->___U3CpdbU3E5__2_4 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpdbU3E5__2_4), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
		__this->___U3CassU3E5__3_5 = (Assembly_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassU3E5__3_5), (void*)(Assembly_t*)NULL);
		__this->___U3CgameU3E5__4_6 = (Type_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameU3E5__4_6), (void*)(Type_t*)NULL);
		__this->___U3CmiStartU3E5__5_7 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiStartU3E5__5_7), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiUpdateU3E5__6_8 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiUpdateU3E5__6_8), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiFixedUpdateU3E5__7_9 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiFixedUpdateU3E5__7_9), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiLateUpdateU3E5__8_10 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiLateUpdateU3E5__8_10), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiOnApplicationQuitU3E5__9_11 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiOnApplicationQuitU3E5__9_11), (void*)(MethodInfo_t*)NULL);
		__this->___U3CstartU3E5__10_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstartU3E5__10_12), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_83 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_84 = V_7;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_83, L_84, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03ea;
	}// end catch (depth: 1)

IL_0390:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdllU3E5__1_3 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdllU3E5__1_3), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
		__this->___U3CpdbU3E5__2_4 = (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpdbU3E5__2_4), (void*)(TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)NULL);
		__this->___U3CassU3E5__3_5 = (Assembly_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassU3E5__3_5), (void*)(Assembly_t*)NULL);
		__this->___U3CgameU3E5__4_6 = (Type_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameU3E5__4_6), (void*)(Type_t*)NULL);
		__this->___U3CmiStartU3E5__5_7 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiStartU3E5__5_7), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiUpdateU3E5__6_8 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiUpdateU3E5__6_8), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiFixedUpdateU3E5__7_9 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiFixedUpdateU3E5__7_9), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiLateUpdateU3E5__8_10 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiLateUpdateU3E5__8_10), (void*)(MethodInfo_t*)NULL);
		__this->___U3CmiOnApplicationQuitU3E5__9_11 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiOnApplicationQuitU3E5__9_11), (void*)(MethodInfo_t*)NULL);
		__this->___U3CstartU3E5__10_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstartU3E5__10_12), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_85 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_85, NULL);
	}

IL_03ea:
	{
		return;
	}
}
// System.Void PostMainland.Main/<Start>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_SetStateMachine_mCEFA57BC87E6190D8C7378BF900A3445B8959DFC (U3CStartU3Ed__4_tBDD7F541DCCF69165C5408B2E8AE3F0140D42988* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// UnityEngine.Component PostMainland.UnityExtensions::GetOrAddComponent(UnityEngine.GameObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* UnityExtensions_GetOrAddComponent_mC3FF90BF56DDBEBFD522094C3C7D148E3D04C52B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, Type_t* ___type1, const RuntimeMethod* method) 
{
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
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
			goto IL_0013;
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

IL_0013:
	{
		V_0 = G_B2_0;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7 = V_0;
		return L_7;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* V_0 = NULL;
	{
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_0 = (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378*)il2cpp_codegen_object_new(U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ed__3__ctor_mF9C78DAC5B2E40C397D34A4F4EC166A8238B80E8(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_1 = V_0;
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_2;
		L_2 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___debuggingId_2), (void*)NULL);
		#endif
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_5 = V_0;
		NullCheck(L_5);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_inline(L_6, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_mBF2F7BF313943A9E8F86578EB86A323942093E49_RuntimeMethod_var);
		U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* L_7 = V_0;
		NullCheck(L_7);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_8 = (&L_7->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9;
		L_9 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_8, NULL);
		return L_9;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* V_0 = NULL;
	{
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_0 = (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18*)il2cpp_codegen_object_new(U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadRawFileBytesAsyncU3Ed__6__ctor_mB5B9D7E3C34F21902060E8028D6CD18D6B7B778F(L_0, NULL);
		V_0 = L_0;
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_1 = V_0;
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 L_2;
		L_2 = AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_inline(AsyncUniTaskMethodBuilder_1_Create_m2043D809676465EA4759E502AE508EA030C261B9_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___result_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___debuggingId_3), (void*)NULL);
		#endif
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_4 = V_0;
		String_t* L_5 = ___location0;
		NullCheck(L_4);
		L_4->___location_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___location_2), (void*)L_5);
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_7 = V_0;
		NullCheck(L_7);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_inline(L_8, (&V_0), AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_mBC3C0E55945B7661B55C5BC08831F96B47545C86_RuntimeMethod_var);
		U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* L_9 = V_0;
		NullCheck(L_9);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_10 = (&L_9->___U3CU3Et__builder_1);
		UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E L_11;
		L_11 = AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_inline(L_10, AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_RuntimeMethod_var);
		return L_11;
	}
}
// Cysharp.Threading.Tasks.UniTask PostMainland.YooAssetsManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 YooAssetsManager_LoadSceneAsync_m08FE9C2E6A9AA3C2BB123177CF14162174D4A8EF (YooAssetsManager_tAB024480AEB7AEE26D5CFE6DA80EF7DDA7340278* __this, String_t* ___location0, int32_t ___sceneMode1, bool ___activateOnLoad2, int32_t ___priority3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* V_0 = NULL;
	{
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_0 = (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4*)il2cpp_codegen_object_new(U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneAsyncU3Ed__7__ctor_mB8311BB16C71599FF01A045FC42FA1264CEACA30(L_0, NULL);
		V_0 = L_0;
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_1 = V_0;
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_2;
		L_2 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___debuggingId_2), (void*)NULL);
		#endif
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_6), (void*)__this);
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_4 = V_0;
		String_t* L_5 = ___location0;
		NullCheck(L_4);
		L_4->___location_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___location_2), (void*)L_5);
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_6 = V_0;
		int32_t L_7 = ___sceneMode1;
		NullCheck(L_6);
		L_6->___sceneMode_3 = L_7;
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_8 = V_0;
		bool L_9 = ___activateOnLoad2;
		NullCheck(L_8);
		L_8->___activateOnLoad_4 = L_9;
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_10 = V_0;
		int32_t L_11 = ___priority3;
		NullCheck(L_10);
		L_10->___priority_5 = L_11;
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_12 = V_0;
		NullCheck(L_12);
		L_12->___U3CU3E1__state_0 = (-1);
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_13 = V_0;
		NullCheck(L_13);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_14 = (&L_13->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_inline(L_14, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_mD15BA6FDD8B96FA7BF9FB75B9ED91C1B2781A592_RuntimeMethod_var);
		U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* L_15 = V_0;
		NullCheck(L_15);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (&L_15->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_17;
		L_17 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_16, NULL);
		return L_17;
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
// System.Void PostMainland.YooAssetsManager/<Initialize>d__3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__3__ctor_mF9C78DAC5B2E40C397D34A4F4EC166A8238B80E8 (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
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
	U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* V_2 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00af_1;
		}

IL_0011_1:
		{
			// var initParameters = new YooAssets.HostPlayModeParameters();
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_2 = (HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B*)il2cpp_codegen_object_new(HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			HostPlayModeParameters__ctor_mD35D77EC62EA77A9D67038C3F62692BA200371B9(L_2, NULL);
			__this->___U3CinitParametersU3E5__1_3 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitParametersU3E5__1_3), (void*)L_2);
			// initParameters.LocationServices = new AddressLocationServices();
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_3 = __this->___U3CinitParametersU3E5__1_3;
			AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619* L_4 = (AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619*)il2cpp_codegen_object_new(AddressLocationServices_t37F670BB589BFE92A6131DD309D5359174CA2619_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			AddressLocationServices__ctor_mB0E43B397A437F46B481E32DFDD1B774ADE99462(L_4, NULL);
			NullCheck(L_3);
			((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_3)->___LocationServices_1 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_3)->___LocationServices_1), (void*)L_4);
			// initParameters.DecryptionServices = null;
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_5 = __this->___U3CinitParametersU3E5__1_3;
			NullCheck(L_5);
			((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_5)->___DecryptionServices_2 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((InitializeParameters_tB219E684ACB04328C85009A6A8D0654A6DDF2CBE*)L_5)->___DecryptionServices_2), (void*)(RuntimeObject*)NULL);
			// initParameters.ClearCacheWhenDirty = false;
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_6 = __this->___U3CinitParametersU3E5__1_3;
			NullCheck(L_6);
			L_6->___ClearCacheWhenDirty_7 = (bool)0;
			// initParameters.DefaultHostServer = "http://127.0.0.1:8088/Bundles/StandaloneWindows64/1/";
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_7 = __this->___U3CinitParametersU3E5__1_3;
			NullCheck(L_7);
			L_7->___DefaultHostServer_5 = _stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___DefaultHostServer_5), (void*)_stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747);
			// initParameters.FallbackHostServer = "http://127.0.0.1:8088/Bundles/StandaloneWindows64/1/";
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_8 = __this->___U3CinitParametersU3E5__1_3;
			NullCheck(L_8);
			L_8->___FallbackHostServer_6 = _stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747;
			Il2CppCodeGenWriteBarrier((void**)(&L_8->___FallbackHostServer_6), (void*)_stringLiteralAE396A43FFCE110A76D12F97235FDF02B4CD8747);
			// initParameters.VerifyLevel = EVerifyLevel.High;
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_9 = __this->___U3CinitParametersU3E5__1_3;
			NullCheck(L_9);
			L_9->___VerifyLevel_9 = 1;
			// await YooAssets.InitializeAsync(initParameters);
			HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B* L_10 = __this->___U3CinitParametersU3E5__1_3;
			il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
			InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_11;
			L_11 = YooAssets_InitializeAsync_mC9FEFFCFD61AC4A38830A6D1BFBFCD378C1E2759(L_10, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12;
			L_12 = EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D(L_11, EnumeratorAsyncExtensions_GetAwaiter_TisInitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F_m627A5EC6EE4588B1A72FBC94065567AF7BFD512D_RuntimeMethod_var);
			V_1 = L_12;
			bool L_13;
			L_13 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_13)
			{
				goto IL_00cb_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15 = V_1;
			__this->___U3CU3Eu__1_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			V_2 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_inline(L_16, (&V_1), (&V_2), AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378_m5B45E607C5DE25C79442669FD306D63BC84EA068_RuntimeMethod_var);
			goto IL_010f;
		}

IL_00af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = __this->___U3CU3Eu__1_4;
			V_1 = L_17;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_18 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_00cb_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			goto IL_00f4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinitParametersU3E5__1_3 = (HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitParametersU3E5__1_3), (void*)(HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_3;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010f;
	}// end catch (depth: 1)

IL_00f4:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinitParametersU3E5__1_3 = (HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitParametersU3E5__1_3), (void*)(HostPlayModeParameters_tC0E72AF20E8AF2AA12E27A36C59BA97E4CECEB9B*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_22 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_22, NULL);
	}

IL_010f:
	{
		return;
	}
}
// System.Void PostMainland.YooAssetsManager/<Initialize>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__3_SetStateMachine_m3E1C4268E1C7C928EF597295A026A698EC656C43 (U3CInitializeU3Ed__3_tD8BCECF7E02C4C0BE934708A55506DA8E966F378* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadRawFileBytesAsyncU3Ed__6__ctor_mB5B9D7E3C34F21902060E8028D6CD18D6B7B778F (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
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
	U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_005f_1;
		}

IL_000e_1:
		{
			// var handle = YooAssets.GetRawFileAsync(location);
			String_t* L_2 = __this->___location_2;
			il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
			RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* L_3;
			L_3 = YooAssets_GetRawFileAsync_m59D986EC97A2793858678A6E52CD527E8FA324AB(L_2, (String_t*)NULL, NULL);
			__this->___U3ChandleU3E5__1_4 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__1_4), (void*)L_3);
			// await handle.Task;
			RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* L_4 = __this->___U3ChandleU3E5__1_4;
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
				goto IL_007b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_5 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_inline(L_10, (&V_2), (&V_3), AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18_m53985F28C6E0AED53C5B7CC68FE1F6FF042C7478_RuntimeMethod_var);
			goto IL_00ce;
		}

IL_005f_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_5;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_007b_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// return handle.LoadFileData();
			RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6* L_14 = __this->___U3ChandleU3E5__1_4;
			NullCheck(L_14);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
			L_15 = RawFileOperation_LoadFileData_m703E814C436B47F1E57A263303E46A5FFAAB71D1(L_14, NULL);
			V_1 = L_15;
			goto IL_00b2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ChandleU3E5__1_4 = (RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__1_4), (void*)(RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_inline(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ce;
	}// end catch (depth: 1)

IL_00b2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ChandleU3E5__1_4 = (RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandleU3E5__1_4), (void*)(RawFileOperation_tD80A1C93D2699CDC334504BF795313656BBEF2B6*)NULL);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_18 = (&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_inline(L_18, L_19, AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var);
	}

IL_00ce:
	{
		return;
	}
}
// System.Void PostMainland.YooAssetsManager/<LoadRawFileBytesAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadRawFileBytesAsyncU3Ed__6_SetStateMachine_m182CBA2D554B3B483D91003DB4D4607E9404C439 (U3CLoadRawFileBytesAsyncU3Ed__6_tF8DD3201CDEE9D6B326941B61DFB7A0749F1BE18* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__7__ctor_mB8311BB16C71599FF01A045FC42FA1264CEACA30 (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
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
	U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* V_2 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_005f_1;
		}

IL_000e_1:
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
				goto IL_007b_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_10 = V_1;
			__this->___U3CU3Eu__1_7 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_7))->___task_0))->___source_0), (void*)NULL);
			V_2 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_inline(L_11, (&V_1), (&V_2), AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4_m6E0DDC1EB5F1AEB005A33005143FAAB826F75D93_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_005f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = __this->___U3CU3Eu__1_7;
			V_1 = L_12;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_13 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_13, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_007b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			goto IL_009d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0085;
		}
		throw e;
	}

CATCH_0085:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_15 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_16 = V_3;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_15, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	}// end catch (depth: 1)

IL_009d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_17 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_17, NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.Void PostMainland.YooAssetsManager/<LoadSceneAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__7_SetStateMachine_m35E73FD0547F96A7DB5F20E4071C26CC5B2A1780 (U3CLoadSceneAsyncU3Ed__7_tBFF87E142F4DD033B93B0C9DC21C22231F3E6DF4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m413D9C4A48FA01808326C9051EC89958C4605D35 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
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
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
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
		((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_StaticFields*)il2cpp_codegen_static_fields_for(LoadDll_tBAFDA7F1D3D708CFB06159898772AA58FDD52C5C_il2cpp_TypeInfo_var))->___U3CAssemblyAssetBundleU3Ek__BackingField_10), (void*)L_0);
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
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return L_3;
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
	bool V_0 = false;
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (task.source == null) return;
		goto IL_0031;
	}

IL_0015:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_5 = (&__this->___task_0);
		int16_t L_6 = L_5->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_6);
	}

IL_0031:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Awaiter(this);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return task.result;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_4 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_6 = V_0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_7 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		RuntimeObject* L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisRuntimeObject_mB47A7ED4A1E8E03B2C64A9071007BD0BD052D831_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine.MoveNext();
		RuntimeObject** L_0 = ___stateMachine0;
		NullCheck((RuntimeObject*)(*L_0));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Runtime.CompilerServices.IAsyncStateMachine::MoveNext() */, IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_0));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF AsyncUniTaskMethodBuilder_1_Create_m3C3532D6852355DB15DB2854C207462C3F580CBC_gshared_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF));
		AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF L_1 = V_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisRuntimeObject_m8EBBE5A86840E812B495F028DBD7D2EF0E535906_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine.MoveNext();
		RuntimeObject** L_0 = ___stateMachine0;
		NullCheck((RuntimeObject*)(*L_0));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Runtime.CompilerServices.IAsyncStateMachine::MoveNext() */, IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_0));
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
	bool V_0 = false;
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_2 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_2);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::get_Task() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2);
		V_1 = L_3;
		goto IL_0048;
	}

IL_001d:
	{
		// else if (ex != null)
		Exception_t* L_4 = (Exception_t*)__this->___ex_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// return UniTask.FromException<T>(ex);
		Exception_t* L_6 = (Exception_t*)__this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_7;
		L_7 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = L_7;
		goto IL_0048;
	}

IL_0039:
	{
		// return UniTask.FromResult(result);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___result_2;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_9;
		L_9 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_1 = L_9;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_10 = V_1;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisRuntimeObject_m2BC330657051AF9851E7A4061D3643D229FA216D_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (RuntimeObject**, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6;
		L_6 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_5);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_4, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_m96A80853F2F4735B517D6017C3F51CD617BC4129_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (RuntimeObject**, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6;
		L_6 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::get_MoveNext() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_5);
		TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7(L_4, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
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
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___exception0;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::SetException(System.Exception) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3, L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.result = result;
		RuntimeObject* L_2 = ___result0;
		__this->___result_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___result_2), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		RuntimeObject* L_4 = ___result0;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::SetResult(T) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3, L_4);
	}

IL_0028:
	{
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
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		V_1 = 1;
		goto IL_0026;
	}

IL_0012:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_2 = __this->___source_0;
		int16_t L_3 = __this->___token_1;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
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
	bool V_0 = false;
	{
		// if (task.source == null)
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___continuation0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		goto IL_0042;
	}

IL_001e:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		RuntimeObject* L_5 = L_4->___source_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___continuation0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_8 = (&__this->___task_0);
		int16_t L_9 = L_8->___token_1;
		NullCheck(L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_9);
	}

IL_0042:
	{
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
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
