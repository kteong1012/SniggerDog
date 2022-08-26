using Cfg;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class LoginServerInitializer : IGameServerInitializer
    {
        private readonly ServerType _serverType;

        public LoginServerInitializer(ServerType serverType)
        {
            _serverType = serverType;
        }
        public void Initialize(IContainer container)
        {
            container
                .RegisterSingleton<IAssemblyManager, AssemblyManager>()
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterSingleton<TcpServerService, TcpServerService>();

            var processCfg = TbStartProcess.Instance.GetOrDefault((int)_serverType);
            if (processCfg != null)
            {
                if (processCfg.Host.NotEmpty() && processCfg.Port > 0)
                {
                    var service = container.Resolve<TcpServerService>();
                    service.Start(processCfg.Host, processCfg.Port);
                }
                if (processCfg.DatabaseName.NotEmpty())
                {
                    var dbCfg = TbDatabase.Instance.GetOrDefault(processCfg.DatabaseName);
                    if (dbCfg != null)
                    {
                        var mongoDb = new MongoDBContext(dbCfg.ConnectString, dbCfg.Name);
                        container.RegisterSingleton<MongoDBContext>(mongoDb);
                    }
                }
            }
        }
    }
}