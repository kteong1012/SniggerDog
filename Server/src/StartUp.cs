using TouchSocket.Core.Dependency;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class StartUp
    {
        IContainer _container;
        ThreadSynchronizationContext ThreadSynchronizationContext = ThreadSynchronizationContext.Instance;
        public void Start()
        {
            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
            Console.WriteLine(Directory.GetCurrentDirectory());
            Log.SetLogs(new FileLogger(), new ConsoleLogger(LogType.Warning, LogType.Error));
            Global.Container = new Container()
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterTransient<TcpServerService, TcpServerService>();

            _container = Global.Container;
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
            ThreadSynchronizationContext.Update();
        }

        private void Update()
        {

        }
    }
}