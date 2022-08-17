using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class Game
    {
        public static Container Container { get; private set; }
        static Game()
        {
            Container = new Container();
            Container
                .RegisterSingleton<ClientTcpService>(new ClientTcpService(Container))
                .RegisterSingleton<IProtocalCollector>(new ProtocalCollector(typeof(ProtocalAssemblyPivotClass).Assembly))
                .RegisterSingleton<IProtocalCollector>(new ProtocalHandlerCollector(typeof(Game).Assembly));
        }
    }
}