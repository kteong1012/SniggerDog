using Cysharp.Threading.Tasks;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;
using UnityEngine;

namespace PostMainland
{
    public static class Game
    {
        static ThreadSynchronizationContext ThreadSynchronizationContext = ThreadSynchronizationContext.Instance;
        static TimeInfo TimeInfo = TimeInfo.Instance;
        public static async void Start()
        {
            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
            Log.SetLogs(new UnityLogger());
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>();

            var assMgr = Global.Container.Resolve<IAssemblyManager>();
            assMgr.AddTypes(typeof(Game).Assembly.GetTypes());

            //TcpC2SSession session = new TcpC2SSession(new IPHost("127.0.0.1:10005"));
            //var ack = await session.Request<S2C_Login, C2S_Login>(new C2S_Login() { Account = "baoyu" });
            //Log.Message(ack.Name);
            FGUI.Instance.OpenAsync<UILoginPanel>().Forget();
        }

        public static void Update()
        {
            ThreadSynchronizationContext.Update();
            TimeInfo.Update();
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
    }
}