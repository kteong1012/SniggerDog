
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class Entry
    {
        IContainer _container;
        public void Start()
        {
            _container = new Container();
        }
    }
}