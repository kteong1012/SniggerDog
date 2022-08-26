using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public interface IGameServerInitializer
    {
        void Initialize(IContainer globalContainer);
    }
}