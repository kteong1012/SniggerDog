using Cfg;
using System;
using System.IO;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class Game
    {

        IContainer _container;
        ThreadSynchronizationContext ThreadSynchronizationContext = ThreadSynchronizationContext.Instance;
        TimeInfo TimeInfo = TimeInfo.Instance;
        public void Start()
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

        private void LateUpdate()
        {
        }

        private void Update()
        {
            TimeInfo.Update();
            ThreadSynchronizationContext.Update();
        }
    }
}