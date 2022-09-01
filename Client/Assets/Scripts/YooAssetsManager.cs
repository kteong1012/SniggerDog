using Cysharp.Threading.Tasks;
using System.Collections;
using UnityEngine.SceneManagement;
using YooAsset;

namespace PostMainland
{
    public class YooAssetsManager
    {
        private static YooAssetsManager _instance = new YooAssetsManager();
        public static YooAssetsManager Instance => _instance;

        public async UniTask Initialize()
        {
#if !UNITY_EDITOR
            var initParameters = new YooAssets.EditorSimulateModeParameters();
            initParameters.LocationServices = new AddressLocationServices();
#else
            var initParameters = new YooAssets.HostPlayModeParameters();
            initParameters.LocationServices = new AddressLocationServices();
            initParameters.DecryptionServices = null;
            initParameters.ClearCacheWhenDirty = false;
            initParameters.DefaultHostServer = "http://127.0.0.1:8088/Bundles/StandaloneWindows64/1/";
            initParameters.FallbackHostServer = "http://127.0.0.1:8088/Bundles/StandaloneWindows64/1/";
            initParameters.VerifyLevel = EVerifyLevel.High;
#endif
            await YooAssets.InitializeAsync(initParameters);
        }
        public async UniTask<T> LoadAsync<T>(string location) where T : UnityEngine.Object
        {
            var handle = YooAssets.LoadAssetAsync<T>(location);
            await handle.Task;
            T result = handle.AssetObject as T;
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
            await handle.Task;
            return handle.LoadFileData();
        }
        public async UniTask LoadSceneAsync(string location, LoadSceneMode sceneMode = LoadSceneMode.Single, bool activateOnLoad = true, int priority = 100)
        {
            await YooAssets.LoadSceneAsync(location, sceneMode, activateOnLoad, priority);
        }
    }
}
