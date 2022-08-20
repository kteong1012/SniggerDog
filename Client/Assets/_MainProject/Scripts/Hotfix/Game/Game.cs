using Cysharp.Threading.Tasks;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;
using UnityEngine;

namespace PostMainland
{
    public class Game
    {
        public static async void Start()
        {
            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
            Log.SetLogs(new UnityLogger());
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>();
            


            var assMgr = Global.Container.Resolve<IAssemblyManager>();
            assMgr.AddTypes(typeof(SC_Notify_Handler).Assembly.GetTypes());

            TcpC2SSession session = new TcpC2SSession(new IPHost("127.0.0.1:10005"));
            var ack = await session.Request<SC_LoginAck, CS_Login>(new CS_Login() { Account = "baoyu" });
            Log.Message(ack.Name);   
        }

        public static void Update()
        {
            ThreadSynchronizationContext.Instance.Update();
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