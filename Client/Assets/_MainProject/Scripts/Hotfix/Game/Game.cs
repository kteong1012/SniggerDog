using Cysharp.Threading.Tasks;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;
using UnityEngine;

namespace PostMainland
{
    public class Game
    {
        public static async void Start()
        {
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>();

            var assMgr = Global.Container.Resolve<IAssemblyManager>();
            assMgr.AddTypes(typeof(SC_Notify_Handler).Assembly.GetTypes());

            TcpClientSession session = new TcpClientSession(new IPHost("127.0.0.1:10005"));
            var ack = await session.Request<SC_LoginAck, CS_Login>(new CS_Login() { Account = "baoyu" });
            Debug.Log(ack.Name);
        }

        public static async void Update()
        {
            while (true)
            {
                await UniTask.NextFrame();
            }
        }
    }
}