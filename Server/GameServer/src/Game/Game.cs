using System.Threading;
using TouchSocket.Core.Dependency;

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
            _container.RegisterSingleton<ServerType>(_serverType);
            switch (_serverType)
            {
                case ServerType.Main:
                    break;
                case ServerType.Login:
                    new LoginServerInitializer(_serverType).Initialize(_container);
                    break;
                case ServerType.Gate:
                    break;
                case ServerType.World:
                    break;
                case ServerType.Solcial:
                    break;
                case ServerType.Battle:
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