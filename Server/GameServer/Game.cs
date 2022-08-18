using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class Game
    {
        public void Start()
        {
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager,AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService,ProtocalManager>();
            ServerTcpService service = new ServerTcpService();
        }
    }
}