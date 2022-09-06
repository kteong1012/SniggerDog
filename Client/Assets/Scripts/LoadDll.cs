using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;

namespace PostMainland
{
    public class LoadDll
    {
        public LoadDll(LoadDllMode loadDllMode)
        {
            _loadDllMode = loadDllMode;
        }
        private static Dictionary<string, byte[]> _abBytes = new Dictionary<string, byte[]>();
        private readonly LoadDllMode _loadDllMode;

        public async UniTask<Assembly> StartLoad()
        {
            return await DownLoadDlls();
        }


        public static byte[] GetAbBytes(string dllName)
        {
            return _abBytes[dllName];
        }

        private async UniTask<Assembly> DownLoadDlls()
        {
            if (_loadDllMode == LoadDllMode.Editor)
            {
                var dllBytes = await File.ReadAllBytesAsync("Temp/Bin/Debug/Hotfix.dll");
                var pdbBytes = await File.ReadAllBytesAsync("Temp/Bin/Debug/Hotfix.pdb");
                return Assembly.Load(dllBytes, pdbBytes);
            }
            else
            {
                var ab = "common";
                string location = $"HotfixDll_{ab}";
                Debug.Log($"start download ab:{ab}");
                //Or retrieve results as binary data
                byte[] abBytes = await YooAssetsManager.Instance.LoadRawFileBytesAsync(location);
                Debug.Log($"dll:{ab}  size:{abBytes.Length}");
                _abBytes[ab] = abBytes;
                return await LoadGameDll();
            }
        }


        public static AssetBundle AssemblyAssetBundle { get; private set; }

        private async UniTask<Assembly> LoadGameDll()
        {
            var ab = "common";
            Assembly gameAss = null;
            AssetBundle dllAB = AssemblyAssetBundle = await AssetBundle.LoadFromMemoryAsync(_abBytes[ab]);
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