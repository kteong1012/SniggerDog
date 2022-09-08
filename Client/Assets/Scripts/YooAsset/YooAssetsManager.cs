using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset;

namespace PostMainland
{
    public class YooAssetsManager
    {
        private static YooAssetsManager _instance = new YooAssetsManager();
        public static YooAssetsManager Instance => _instance;

        public bool IsInitialized => YooAssets.IsInitialized;
        public async UniTask Initialize(YooAssets.EPlayMode playMode)
        {
#if !UNITY_EDITOR
            playMode = YooAssets.EPlayMode.HostPlayMode;
#endif
            UniTaskCompletionSource uniTaskCompletionSource = new UniTaskCompletionSource();
            switch (playMode)
            {
                case YooAssets.EPlayMode.EditorSimulateMode:
                    {
                        var initParameters = new YooAssets.EditorSimulateModeParameters();
                        initParameters.LocationServices = new AddressLocationServices();
                        YooAssets.InitializeAsync(initParameters).Completed +=
                            _ => uniTaskCompletionSource.TrySetResult();
                    }
                    break;
                case YooAssets.EPlayMode.OfflinePlayMode:
                    {
                        var initParameters = new YooAssets.OfflinePlayModeParameters();
                        initParameters.LocationServices = new AddressLocationServices();
                        YooAssets.InitializeAsync(initParameters).Completed +=
                            _ => uniTaskCompletionSource.TrySetResult();
                    }
                    break;
                case YooAssets.EPlayMode.HostPlayMode:
                    {
                        var initParameters = new YooAssets.HostPlayModeParameters();
                        initParameters.LocationServices = new AddressLocationServices();
                        initParameters.DecryptionServices = null;
                        initParameters.ClearCacheWhenDirty = false;
                        initParameters.DefaultHostServer = GetHostServerURL();
                        initParameters.FallbackHostServer = GetHostServerURL();
                        YooAssets.InitializeAsync(initParameters).Completed +=
                            _ => PatchUpdater.Run(uniTaskCompletionSource);// 运行补丁流程
                    }
                    break;
                default:
                    break;
            }
            await uniTaskCompletionSource.Task;
        }
        private string GetHostServerURL()
        {
            string hostServerIP = Main.Instance.hotfixResUrl;
            string gameVersion = Main.Instance.version;

#if UNITY_EDITOR
            if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
                return $"{hostServerIP}/Android/{gameVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
                return $"{hostServerIP}/IPhone/{gameVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
                return $"{hostServerIP}/WebGL/{gameVersion}";
            else
                return $"{hostServerIP}/StandaloneWindows64/{gameVersion}";
#else
            if (Application.platform == RuntimePlatform.Android)
                return $"{hostServerIP}/Android/{gameVersion}";
            else if (Application.platform == RuntimePlatform.IPhonePlayer)
                return $"{hostServerIP}/IPhone/{gameVersion}";
            else if (Application.platform == RuntimePlatform.WebGLPlayer)
                return $"{hostServerIP}/WebGL/{gameVersion}";
            else
                return $"{hostServerIP}/StandaloneWindows64/{gameVersion}";
#endif
        }
        public async UniTask<T> LoadAsync<T>(string location) where T : UnityEngine.Object
        {
            var handle = YooAssets.LoadAssetAsync<T>(location);
            await handle.ToUniTask();
            T result = handle.AssetObject as T;
            handle.Release();
            return result;
        }
        public async UniTask<UnityEngine.Object> LoadAsync(Type type, string location)
        {
            var handle = YooAssets.LoadAssetAsync(location, type);
            await handle.ToUniTask();
            var result = handle.AssetObject;
            handle.Release();
            return result;
        }
        public T Load<T>(string location) where T : UnityEngine.Object
        {
            var handle = YooAssets.LoadAssetSync<T>(location);
            return handle.AssetObject as T;

        }
        public async UniTask<byte[]> LoadRawFileBytesAsync(string location)
        {
            var handle = YooAssets.GetRawFileAsync(location);
            await handle.ToUniTask();
            return handle.LoadFileData();
        }
        public async UniTask LoadSceneAsync(string location, LoadSceneMode sceneMode = LoadSceneMode.Single, bool activateOnLoad = true, int priority = 100)
        {
            await YooAssets.LoadSceneAsync(location, sceneMode, activateOnLoad, priority);
        }
    }
}
