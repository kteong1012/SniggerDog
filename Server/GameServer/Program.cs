using Cysharp.Threading.Tasks;
using DotNetty.Codecs;
using DotNetty.Handlers.Logging;
using DotNetty.Transport.Bootstrapping;
using DotNetty.Transport.Channels;
using DotNetty.Transport.Channels.Sockets;

namespace PostMainland
{
    public class Program
    {
        static async Task RunServerAsync()
        {
            IEventLoopGroup bossGroup = new MultithreadEventLoopGroup(1);
            IEventLoopGroup workerGroup = new MultithreadEventLoopGroup();

            var bootstrap = new ServerBootstrap();
            bootstrap.Group(bossGroup, workerGroup);
            bootstrap.Channel<TcpServerSocketChannel>();
            bootstrap
                .Option(ChannelOption.SoBacklog, 100)
                .Option(ChannelOption.SoReuseport, true)
                .Handler(new LoggingHandler("SRV_LSTN"))
                .ChildHandler(new ActionChannelInitializer<IChannel>(channel =>
                {
                    IChannelPipeline pipeline = channel.Pipeline;
                    pipeline.AddLast(new LoggingHandler("SRV_CONN"));
                    //pipeline.AddLast("framing-enc", new LengthFieldPrepender(2));
                    //pipeline.AddLast("framing-dec", new LengthFieldBasedFrameDecoder(short.MaxValue, 0, 2, 0, 2));
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
            AssemblyCollection.Ins.RegisterCollector(ProtocalCollector.Ins);
            AssemblyCollection.Ins.RegisterCollector(ProtocalHandlerCollector.Ins.LoadHandlers(typeof(Program)));


            RunServerAsync().Wait();
        }

    }
}