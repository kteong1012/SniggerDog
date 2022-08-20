using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class Game
    {
        IContainer _container;
        public void Start()
        {
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterTransient<TcpServerService, TcpServerService>();

            _container = Global.Container;
            _container.Resolve<TcpServerService>();
        }
    }
}