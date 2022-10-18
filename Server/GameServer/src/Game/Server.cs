using System.Collections.Generic;
using System.Threading;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class ServerCollection
    {
        private static ServerCollection _instance = new ServerCollection();
        public static ServerCollection Servers => _instance;
        private readonly Dictionary<ServerType, Server> _servers = new Dictionary<ServerType, Server>();
        public Server this[ServerType serverType]
        {
            get
            {
                return _servers[serverType];
            }
            set
            {
                _servers[serverType] = value;
            }
        }
        public IContainer GetContainer(ServerType serverType)
        {
            return this[serverType].Container;
        }
    }
    public class Server
    {
        private readonly IContainer _container;
        private readonly ServerType _serverType;
        public IContainer Container => _container;
        public Server(ServerType serverType)
        {
            _serverType = serverType;
            _container = new Container()
                .RegisterSingleton<ServerType>(serverType)
                .RegisterSingleton<Server>(this);
            ServerCollection.Servers[serverType] = this;
        }
        public void Start()
        {
            IGameServerInitializer initializer = null;
            Log.Info($"初始化{_serverType}");
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

        public bool CheckServerType(ServerType serverType, bool logError = true)
        {
            bool meet = _serverType == serverType;
            if (!meet && logError)
            {
                Log.Error($"输入服务器类型{serverType}与当前服务器类型{_serverType}不匹配.");
            }
            return meet;
        }
    }
}