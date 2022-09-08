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
        private readonly LoadDllMode _loadDllMode;

        public async UniTask<Assembly> StartLoad()
        {
            return await LoadGameDll();
        }


        public static AssetBundle AssemblyAssetBundle { get; private set; }

        private async UniTask<Assembly> LoadGameDll()
        {
            Assembly gameAss = null;
            if (_loadDllMode == LoadDllMode.FromYooAssets)
            {
                var ab = "common";
                string hotfixDllLocation = $"HotfixDll_{ab}";
                //Or retrieve results as binary data
                byte[] abBytes = await YooAssetsManager.Instance.LoadRawFileBytesAsync(hotfixDllLocation);
                AssetBundle dllAB = AssemblyAssetBundle = await AssetBundle.LoadFromMemoryAsync(abBytes);
                TextAsset dllBytes = dllAB.LoadAsset<TextAsset>("Hotfix.dll.bytes");
                gameAss = System.Reflection.Assembly.Load(dllBytes.bytes);
            }
            else
            {
                gameAss = AppDomain.CurrentDomain.GetAssemblies().First(assembly => assembly.GetName().Name == "Hotfix");
            }
            return gameAss;
        }
    }
}