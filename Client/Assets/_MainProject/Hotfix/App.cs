using PostMainland;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

struct MyValue
{
    public int x;
    public float y;
    public string s;
}

enum LoadImageErrorCode
{
    OK = 0,
	BAD_IMAGE, // dll 不合法
	NOT_IMPLEMENT, // 不支持的元数据特性
	AOT_ASSEMBLY_NOT_FIND, // 对应的AOT assembly未找到
	HOMOLOGOUS_ONLY_SUPPORT_AOT_ASSEMBLY, // 不能给解释器assembly补充元数据
	HOMOLOGOUS_ASSEMBLY_HAS_LOADED, // 已经补充过了，不能再次补充
};

public class App
{
    public static int Main()
    {
        if(PostMainland.Main.Instance.loadDllMode == LoadDllMode.FromYooAssets)
        {
            LoadMetadataForAOTAssembly();
        }
        Debug.Log("hello, HybridCLR");

        Game.Start();
        return 0;
    }


    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    public static unsafe void LoadMetadataForAOTAssembly()
    {
        // 可以加载任意aot assembly的对应的dll。但要求dll必须与unity build过程中生成的裁剪后的dll一致，而不能直接使用原始dll。
        // 我们在BuildProcessor_xxx里添加了处理代码，这些裁剪后的dll在打包时自动被复制到 {项目目录}/HybridCLRData/AssembliesPostIl2CppStrip/{Target} 目录。

        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        List<string> aotDllList = new List<string>
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll", // 如果使用了Linq，需要这个

            //
            // 注意！修改这个列表请同步修改 BuildConfig_Custom文件中的 AOTMetaAssemblies 列表。
            // 两者需要完全一致
            //
            // "Newtonsoft.Json.dll",
            // "protobuf-net.dll",
            // "Google.Protobuf.dll",
            // "MongoDB.Bson.dll",
            // "DOTween.Modules.dll",
             "UniTask.dll",
             "PostMainland.Shares.dll",
        };

        AssetBundle dllAB = LoadDll.AssemblyAssetBundle;
        foreach (var aotDllName in aotDllList)
        {
            byte[] dllBytes = dllAB.LoadAsset<TextAsset>(aotDllName).bytes;
            fixed (byte* ptr = dllBytes)
            {
                // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
                LoadImageErrorCode err = (LoadImageErrorCode)HybridCLR.RuntimeApi.LoadMetadataForAOTAssembly((IntPtr)ptr, dllBytes.Length);
                Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. ret:{err}");
            }
        }
    }



}
