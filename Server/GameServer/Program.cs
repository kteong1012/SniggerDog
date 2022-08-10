using Cysharp.Threading.Tasks;
using DotNetty.Codecs;
using DotNetty.Common.Internal.Logging;
using DotNetty.Handlers.Logging;
using DotNetty.Transport.Bootstrapping;
using DotNetty.Transport.Channels;
using DotNetty.Transport.Channels.Sockets;

namespace PostMainland
{
    public class Program
    {
        static void Main()
        {
            var asc = Services.AddWithouInit(new AssemblyCollection());
            asc.Add(new ProtocalCollector(), typeof(ProtocalAssemblyPivotClass).Assembly);
            asc.Add(new ProtocalHandlerCollector(), typeof(Program).Assembly);

        }

    }
}