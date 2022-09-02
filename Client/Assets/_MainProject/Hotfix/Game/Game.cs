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
            //TcpC2SSession session = new TcpC2SSession(new IPHost("127.0.0.1:10005"));
            //var ack = await session.Request<S2C_Login, C2S_Login>(new C2S_Login() { Account = "baoyu" });
            //Log.Message(ack.Name);
            var panel = await FGUI.Instance.OpenAsync<UILoginPanel>();

            panel.txtAccount.text = TbGlobal.Instance.LoginServerAddress;
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
            await YooAssetsManager.Instance.Initialize(LoadDll.PlayMode);

        }
    }
}