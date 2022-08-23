using System;
using System.IO;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Core.Log;

namespace PostMainland // Note: actual namespace depends on the project name.
{
    public class Program
    {

        static IContainer _container;
        static ThreadSynchronizationContext ThreadSynchronizationContext = ThreadSynchronizationContext.Instance;
        static TimeInfo TimeInfo = TimeInfo.Instance;
        static void Main(string[] args)
        {

            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
            Console.WriteLine(Directory.GetCurrentDirectory());
            Log.SetLogs(new FileLogger(), new ConsoleLogger(LogType.Warning, LogType.Error));
            Global.Container = new Container()
                .RegisterSingleton<IConfigLoader, ConfigLoader>()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterTransient<TcpServerService, TcpServerService>();

            _container = Global.Container;
            _container.Resolve<IConfigLoader>();
            _container.Resolve<TcpServerService>();

            while (true)
            {
                try
                {
                    Thread.Sleep(1);
                    Update();
                    LateUpdate();
                }
                catch (Exception e)
                {
                    Log.Error(e);
                }
            }
        }
    }
}