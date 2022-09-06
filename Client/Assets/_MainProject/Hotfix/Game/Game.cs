using Cfg;
using Cysharp.Threading.Tasks;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;
using UnityEngine;

namespace PostMainland
{
    public static class Game
    {
        static ThreadSynchronizationContext _threadSynchronizationContext = ThreadSynchronizationContext.Instance;
        static TimeInfo _timeInfo = TimeInfo.Instance;
        public static void Start()
        {
            DoStart();
            Main.update += Update;
            Main.fixedUpdate += FixedUpdate;
            Main.lateUpdate += LateUpdate;
        }

        private static async void DoStart()
        {
            await CheckHotfixResources();
            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
            Log.SetLogs(new UnityLogger());
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterSingleton<IConfigLoader, Luban>();


            Global.Container.Resolve<IConfigLoader>();
            var assMgr = Global.Container.Resolve<IAssemblyManager>();
            assMgr.AddTypes(typeof(Game).Assembly.GetTypes());

            FGUI.Instance.OpenAsync<UILoginPanel>().Forget();
        }

        public static void Update()
        {
            _threadSynchronizationContext?.Update();
            _timeInfo?.Update();
        }

        public static void LateUpdate()
        {

        }

        public static void FixedUpdate()
        {

        }
        public static void OnApplicationQuit()
        {

        }

        private static async UniTask CheckHotfixResources()
        {
            await YooAssetsManager.Instance.Initialize(Main.Instance.playMode);

        }
    }
}