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
        private readonly IContainer _container = Global.Container;
        private readonly ThreadSynchronizationContext _threadSynchronizationContext = ThreadSynchronizationContext.Instance;
        private readonly TimeInfo _timeInfo = TimeInfo.Instance;
        private readonly ServerType _serverType;

        public Game(ServerType serverType)
        {
            _serverType = serverType;
        }
        public void Start()
        {
            _container
                .RegisterSingleton<ServerType>(_serverType)
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterTransient<TcpServerService, TcpServerService>();

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
            _timeInfo.Update();
            _threadSynchronizationContext.Update();
        }
    }
}