using Cfg;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class GameServerInitializer : IGameServerInitializer
    {
        protected IContainer container;
        protected ServerType serverType;
        public virtual void Initialize(ServerType serverType, IContainer container)
        {
            this.container = container;
            this.serverType = serverType;

            AddAssemblyManager();
            AddProtocalManager();
            AddServerService(true);
        }

        public void AddAssemblyManager()
        {
            container.RegisterSingleton<IAssemblyManager, AssemblyManager>();
        }
        public void AddProtocalManager()
        {
            container.RegisterSingleton<IProtocalManagerService, ProtocalManager>();
        }
        public void AddServerService(bool connectDb = true)
        {
            container.RegisterSingleton<TcpServerService, TcpServerService>();
            var processCfg = TbStartProcess.Instance.GetOrDefault((int)serverType);
            if (processCfg != null)
            {
                if (processCfg.Host.NotEmpty() && processCfg.Port > 0)
                {
                    var service = container.Resolve<TcpServerService>();
                    service.Start(processCfg.Host, processCfg.Port);
                }
                if (connectDb && processCfg.DatabaseName.NotEmpty())
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