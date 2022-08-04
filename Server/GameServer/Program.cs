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
                    //pipeline.AddLast("framing-dec", new LengthFieldBasedFrameDecoder(ushort.MaxValue, 0, 2, 0, 2));//Dotnetty自带的解码器，将接受到的内容进行解码然后根据内容对应到业务逻辑当中
                    //pipeline.AddLast("framing-enc", new LengthFieldPrepender(2));//Dotnetty自带的编码器，将要发送的内容进行编码然后发送
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