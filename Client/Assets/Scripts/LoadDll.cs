using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.Networking;
using YooAsset;

namespace PostMainland
{
    public class LoadDll
    {
        private static Dictionary<string, byte[]> _abBytes = new Dictionary<string, byte[]>();
        public async UniTask<Assembly> StartLoad()
        {
            Application.runInBackground = true;
            return await DownLoadDlls();
        }


        public static byte[] GetAbBytes(string dllName)
        {
            return _abBytes[dllName];
        }

        private string GetWebRequestPath(string asset)
        {
            var path = $"{Application.streamingAssetsPath}/{asset}";
            if (!path.Contains("://"))
            {
                path = "file://" + path;
            }
            return path;
        }

        private async UniTask<Assembly> DownLoadDlls()
        {
            var abs = new string[]
            {
                "common",
            };
            foreach (var ab in abs)
            {
                string dllPath = GetWebRequestPath(ab);
                Debug.Log($"start download ab:{ab}");
                UnityWebRequest www = UnityWebRequest.Get(dllPath);
                await www.SendWebRequest().ToUniTask();

#if UNITY_2020_1_OR_NEWER
                if (www.result != UnityWebRequest.Result.Success)
                {
                    Debug.Log(www.error);
                }
#else
            if (www.isHttpError || www.isNetworkError)
            {
                Debug.Log(www.error);
            }
#endif
                else
                {
                    //Or retrieve results as binary data
                    byte[] abBytes = www.downloadHandler.data;
                    Debug.Log($"dll:{ab}  size:{abBytes.Length}");
                    _abBytes[ab] = abBytes;
                }
            }
            return LoadGameDll();
        }


        public static AssetBundle AssemblyAssetBundle { get; private set; }

        private Assembly LoadGameDll()
        {
            Assembly gameAss = null;
            AssetBundle dllAB = AssemblyAssetBundle = AssetBundle.LoadFromMemory(GetAbBytes("common"));
#if !UNITY_EDITOR
            TextAsset dllBytes = dllAB.LoadAsset<TextAsset>("Hotfix.dll.bytes");
            gameAss = System.Reflection.Assembly.Load(dllBytes.bytes);
#else
            Debug.Log(AppDomain.CurrentDomain.GetAssemblies().Count());
            gameAss = AppDomain.CurrentDomain.GetAssemblies().First(assembly => assembly.GetName().Name == "Hotfix");
#endif
            return gameAss;
        }
    }
}