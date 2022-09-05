using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public interface IGameServerInitializer
    {
        void Initialize(ServerType serverType, IContainer globalContainer);
    }
}