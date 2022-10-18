using Cysharp.Threading.Tasks;
using Sirenix.OdinInspector;
using System;
using System.Reflection;
using System.Threading;
using TouchSocket.Core.Dependency;
using UnityEngine;
using YooAsset;

namespace PostMainland
{
    public enum LoadDllMode
    {
        Editor,
        FromYooAssets
    }
    public class Main : MonoBehaviour
    {
        public static Main Instance { get; private set; }
        [LabelText("资源服务器地址")] public string hotfixResUrl;
        [LabelText("版本号")] public string version;

        public YooAssets.EPlayMode playMode;
        public LoadDllMode loadDllMode;

        public static event Action update;
        public static event Action fixedUpdate;
        public static event Action lateUpdate;

        private ThreadSynchronizationContext _threadSynchronizationContext = ThreadSynchronizationContext.Instance;
        private TimeInfo _timeInfo = TimeInfo.Instance;
        private void Awake()
        {
            Application.runInBackground = true;
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }

        private void Start()
        {
#if !UNITY_EDITOR
            playMode = YooAssets.EPlayMode.HostPlayMode;
            loadDllMode = LoadDllMode.FromYooAssets;
#endif
            Init().Forget();
        }

        public async UniTask Init()
        {
            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
            Log.SetLogs(new UnityLogger() { LogType = (TouchSocket.Core.Log.LogType)63 });
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>();
            var assMgr = Global.Container.Resolve<IAssemblyManager>();
            assMgr.AddTypes(typeof(Main).Assembly.GetTypes());
            if (playMode == YooAssets.EPlayMode.HostPlayMode)
            {
                await FGUI.Instance.OpenAsync<UIResUpdatePanel>();
            }
            await YooAssetsManager.Instance.Initialize(playMode);
            await LoadHotfixDll();
        }
        public async UniTask LoadHotfixDll()
        {
            LoadDll loadDll = new LoadDll(loadDllMode);
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
            _threadSynchronizationContext?.Update();
            _timeInfo?.Update();
            update?.Invoke();
            AsyncLockManager.Instance.Update();
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