using System.Threading;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class Game
    {
        private readonly IContainer _container = Global.Container;
        private readonly ServerType _serverType;

        public Game(ServerType serverType)
        {
            _serverType = serverType;
        }
        public void Start()
        {
            _container.RegisterSingleton<ServerType>(_serverType);
            IGameServerInitializer initializer = null;
            Log.Message($"初始化{_serverType}");
            switch (_serverType)
            {
                case ServerType.Login:
                    initializer = new GameServerInitializer();
                    break;
                case ServerType.Realm:
                    initializer = new GameServerInitializer();
                    break;
                case ServerType.Gate:
                    initializer = new GameServerInitializer();
                    break;
                case ServerType.World:
                    initializer = new GameServerInitializer();
                    break;
                case ServerType.Solcial:
                    initializer = new GameServerInitializer();
                    break;
                case ServerType.Battle:
                    initializer = new GameServerInitializer();
                    break;
                case ServerType.GM:
                    break;
                default:
                    break;
            }
            initializer?.Initialize(_serverType, _container);
        }
    }
}