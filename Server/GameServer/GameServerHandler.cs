
using Cysharp.Threading.Tasks;
using DotNetty.Buffers;
using DotNetty.Transport.Channels;
using DotNetty.Transport.Channels.Sockets;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Text;

namespace PostMainland
{
    public class GatewayService
    {
        private static ConcurrentDictionary<string, ISocketChannel> _dict = new ConcurrentDictionary<string, ISocketChannel>();
        public static ConcurrentDictionary<string, ISocketChannel> Dict => _dict;

        public static void AddGatewayChannel(string id, ISocketChannel gateway_channel)
        {
            _dict.TryAdd(id, gateway_channel);
        }

        public static ISocketChannel GetGatewayChannel(string id)
        {
            if (_dict.TryGetValue(id, out var channel))
            {
                return channel;
            }
            return default(ISocketChannel);
        }

        public static void RemoveGatewayChannel(string id)
        {
            _dict.Remove(id, out var _);
        }
    }
    public partial class GameServerHandler
    {
        private IChannelHandlerContext _context;

        Dictionary<long, UniTaskCompletionSource<IResponse>> _waittingRequests = new Dictionary<long, UniTaskCompletionSource<IResponse>>();
        private void ResponseCallback(long msgId, IResponse response)
        {
            if (_waittingRequests.TryGetValue(msgId, out var source))
            {
                source.TrySetResult(response);
            }
        }
        public async UniTask SendMessage(IMessage message)
        {
            byte[] buffer = ProtocalHelper.SerializeProtocal(message, 0);
            await SendAsync(buffer);
        }
        public async UniTask SendAsync(byte[] bytes)
        {
            var channel = GatewayService.GetGatewayChannel(_context.Channel.Id.AsLongText());
            if (channel != null)
            {
                await channel.WriteAndFlushAsync(Unpooled.CopiedBuffer(bytes));
            }
        }
        public async UniTask DisconnectAsync()
        {
            ChannelUnregistered(_context);
            await UniTask.CompletedTask;
        }

    }
    public partial class GameServerHandler : ChannelHandlerAdapter, INetContext
    {
        /*
        * Channel的生命周期
        * 1.ChannelRegistered 先注册
        * 2.ChannelActive 再被激活
        * 3.ChannelRead 客户端与服务端建立连接之后的会话（数据 交互）
        * 4.ChannelReadComplete 读取客户端发送的消息完成之后
        * error. ExceptionCaught 如果在会话过程当中出现dotnetty框架内部异常都会通过Caught方法返回给开发者
        * 5.ChannelInactive 使当前频道处于未激活状态
        * 6.ChannelUnregistered 取消注册
        */

        /// <summary>
        /// 频道注册
        /// </summary>
        /// <param name="context"></param>
        public override void ChannelRegistered(IChannelHandlerContext context)
        {
            base.ChannelRegistered(context);
            _context = context;
            Console.WriteLine($"{context.Name}注册");
        }

        /// <summary>
        /// socket client 连接到服务端的时候channel被激活的回调函数
        /// </summary>
        /// <param name="context"></param>
        public override void ChannelActive(IChannelHandlerContext context)
        {
            //一般可用来记录连接对象信息
            base.ChannelActive(context);
            Console.WriteLine($"{context.Name}激活");
            string uuid = context.Channel.Id.AsLongText();
            GatewayService.AddGatewayChannel(uuid, context.Channel as ISocketChannel);
        }

        /// <summary>
        /// socket接收消息方法具体的实现
        /// </summary>
        /// <param name="context">当前频道的句柄，可使用发送和接收方法</param>
        /// <param name="message">接收到的客户端发送的内容</param>
        public override void ChannelRead(IChannelHandlerContext context, object message)
        {
            Console.WriteLine($"{context.Name}接收");
            var buffer = message as IByteBuffer;
            if (buffer != null)
            {
                ProtocalHelper.Handle(this, buffer.GetIoBuffer().ToArray(), ResponseCallback);
            }
        }

        /// <summary>
        /// 该次会话读取完成后回调函数
        /// </summary>
        /// <param name="context"></param>
        public override void ChannelReadComplete(IChannelHandlerContext context)
        {
            Console.WriteLine($"{context.Name}接受完成");
            context.Flush();//将WriteAsync写入的数据流缓存发送出去
        }

        /// <summary>
        /// 异常捕获
        /// </summary>
        /// <param name="context"></param>
        /// <param name="exception"></param>
        public override void ExceptionCaught(IChannelHandlerContext context, Exception exception)
        {
            Console.WriteLine("Exception: " + exception);
            context.CloseAsync();
            Console.WriteLine($"{context.Name}异常");
        }

        /// <summary>
        /// 当前频道未激活状态
        /// </summary>
        /// <param name="context"></param>
        public override void ChannelInactive(IChannelHandlerContext context)
        {
            base.ChannelInactive(context);
            Console.WriteLine($"{context.Name}未激活");
            GatewayService.RemoveGatewayChannel(context.Channel.Id.AsLongText());
        }

        /// <summary>
        /// 取消注册当前频道，可理解为销毁当前频道
        /// </summary>
        /// <param name="context"></param>
        public override void ChannelUnregistered(IChannelHandlerContext context)
        {
            base.ChannelUnregistered(context);
            Console.WriteLine($"{context.Name}注销");
        }
    }
}