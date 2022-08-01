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
        public static ServerBootstrap bootstrap;
        static async Task RunServerAsync()
        {
            ConsoleLog.SetConsoleLogger();
            IEventLoopGroup bossGroup = new MultithreadEventLoopGroup(1);
            IEventLoopGroup workerGroup = new MultithreadEventLoopGroup();

            bootstrap = new ServerBootstrap();
            bootstrap.Group(bossGroup, workerGroup);
            bootstrap.Channel<TcpServerSocketChannel>();
            bootstrap
                .Option(ChannelOption.SoBacklog, 128)
                .Handler(new LoggingHandler("SRV-LSTN", LogLevel.DEBUG))
                .ChildHandler(new ActionChannelInitializer<IChannel>(channel =>
                {
                    IChannelPipeline pipeline = channel.Pipeline;
                    pipeline.AddLast("log", new LoggingHandler("SRV-CONN", LogLevel.DEBUG));
                    pipeline.AddLast("game", new GameServerHandler());
                }));
            IChannel boundChannel = await bootstrap.BindAsync(40001);

            while (true)
            {
                string str = Console.ReadLine();
                if (str == "close")
                {
                    break;
                }
            }

            await boundChannel.CloseAsync();

            await Task.WhenAll(
                bossGroup.ShutdownGracefullyAsync(TimeSpan.FromMilliseconds(100), TimeSpan.FromSeconds(1)),
                workerGroup.ShutdownGracefullyAsync(TimeSpan.FromMilliseconds(100), TimeSpan.FromSeconds(1))
                );
        }

        static void Main()
        {
            var asc = Services.AddWithouInit(new AssemblyCollection());
            asc.Add(new ProtocalCollector(), typeof(ProtocalAssemblyPivotClass).Assembly);
            asc.Add(new ProtocalHandlerCollector(), typeof(Program).Assembly);


            RunServerAsync().Wait();
        }

    }
}