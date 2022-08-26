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
            switch (_serverType)
            {
                case ServerType.Login:
                case ServerType.Gate:
                case ServerType.World:
                case ServerType.Solcial:
                case ServerType.Battle:
                    _container
                        .RegisterSingleton<ServerType>(_serverType)
                        .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                        .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                        .RegisterTransient<TcpServerService, TcpServerService>();

                    _container.Resolve<TcpServerService>();
                    break;
                case ServerType.GM:
                    break;
                default:
                    break;
            }

            while (true)
            {
                Thread.Sleep(1);
                Update();
                LateUpdate();
            }
        }

        public void LateUpdate()
        {
        }

        public void Update()
        {
            _timeInfo.Update();
            _threadSynchronizationContext.Update();
        }
    }
}