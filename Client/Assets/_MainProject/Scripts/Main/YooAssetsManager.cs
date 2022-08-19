using Cysharp.Threading.Tasks;
using UnityEngine.SceneManagement;
using YooAsset;

namespace PostMainland
{
    public class YooAssetsManager
    {
        private static YooAssetsManager _instace = new YooAssetsManager();
        public static YooAssetsManager Instace => _instace;

        public async UniTask Initialize()
        {
            var initParameters = new YooAssets.EditorSimulateModeParameters();
            initParameters.LocationServices = new DefaultLocationServices("");
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
