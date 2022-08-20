using TouchSocket.Core.Dependency;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class StartUp
    {
        IContainer _container;
        public void Start()
        {
            Log.SetLogs(new FileLogger(), new ConsoleLogger(LogType.Warning, LogType.Error));
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterTransient<TcpServerService, TcpServerService>();

            _container = Global.Container;
            _container.Resolve<TcpServerService>();
        }
    }
}