using Cfg;
using Leopotam.EcsLite;
using System;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class WorldServerInitializer : GameServerInitializer
    {
        public override void Initialize(ServerType serverType, IContainer container)
        {
            base.Initialize(serverType, container);
            StartWorld();
        }

        private void StartWorld()
        {
            EcsWorld world = new EcsWorld();
            EcsSystems systems = new EcsSystems(world);
            systems.Add(new BuffComponentSystem())
                .Add(new BuffTickSystem())
                .Init();
            Program.UpdateEvent += () => systems.Run();
            int caster = world.NewEntity();
            int target = world.NewEntity();

            ref var numeric = ref world.Add<NumericComponent>(target);
            ref var numeric2 = ref world.Add<NumericComponent>(caster);
            numeric2[Numeric.Attack] += 100;
            ref var unit = ref world.Add<Unit>(target);
            ref var uni2t = ref world.Add<Unit>(caster);
            world.Add<BuffStatesComponent>(target);
            world.NewEntityWith<AT_SetNumericData>(out _) = new AT_SetNumericData() { Entity = target, NumericId = Numeric.HP, AddValue = 1000};
            world.NewEntityWith<AT_AttachBuff>(out _) = new AT_AttachBuff() { CfgId = 10000001, CasterEntity = caster, TargetEntity = target };
            world.NewEntityWith<AT_AttachBuff>(out _) = new AT_AttachBuff() { CfgId = 10000101, CasterEntity = caster, TargetEntity = target };
            world.NewEntityWith<AT_AttachBuff>(out _) = new AT_AttachBuff() { CfgId = 10000201, CasterEntity = caster, TargetEntity = target };
            UniTaskHelper.Wait(800, () =>
            {
                world.NewEntityWith<AT_AttachBuff>(out _) = new AT_AttachBuff() { CfgId = 10000201, CasterEntity = caster, TargetEntity = target };
            }).Forget();
        }
    }
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
            StartServerService(true);
        }

        public void AddAssemblyManager()
        {
            container.RegisterSingleton<IAssemblyManager, AssemblyManager>();
        }
        public void AddProtocalManager()
        {
            container.RegisterSingleton<IProtocalManagerService, ProtocalManager>();
        }
        public void StartServerService(bool connectDb = true)
        {
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