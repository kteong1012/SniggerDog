using Cysharp.Threading.Tasks;
using Sirenix.OdinInspector;
using System;
using System.Reflection;
using UnityEngine;
using YooAsset;

namespace PostMainland
{
    public class Main : MonoBehaviour
    {
        public static Main Instance { get; private set; }
        [LabelText("资源服务器地址")] public string hotfixResUrl;
        [LabelText("版本号")] public string version;

        public YooAssets.EPlayMode playMode;

        public static event Action update;
        public static event Action fixedUpdate;
        public static event Action lateUpdate;

        private void Awake()
        {
            Instance = this; 
            DontDestroyOnLoad(gameObject);
        }

        private async void Start()
        {
#if !UNITY_EDITOR
            playMode = YooAssets.EPlayMode.HostPlayMode;
#endif
            await YooAssetsManager.Instance.Initialize(playMode);
             await LoadHotfixDll();
        }


        public async UniTask LoadHotfixDll()
        {
            LoadDll loadDll = new LoadDll();
            Assembly _gameAss = await loadDll.StartLoad();
            if (_gameAss == null)
            {
                UnityEngine.Debug.LogError("dll未加载");
                return;
            }
            var appType = _gameAss.GetType("App");
            var mainMethod = appType.GetMethod("Main");
            mainMethod.Invoke(null, null);
        }

        private void Update()
        {
            update?.Invoke();
        }
        private void FixedUpdate()
        {
            fixedUpdate?.Invoke();
        }
        private void LateUpdate()
        {
            lateUpdate?.Invoke();
        }
    }
}