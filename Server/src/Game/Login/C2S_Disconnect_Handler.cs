using Cysharp.Threading.Tasks;

namespace PostMainland
{
    public class C2S_Disconnect_Handler : RequestHandler<C2S_Disconnect, S2C_DisconnectAck>
    {
        public override async UniTask Execute(INetworkSession service, C2S_Disconnect request, S2C_DisconnectAck response, Action reply)
        {
            Console.WriteLine("收到了断开的请求");
            response.Message = "断开成功惹";
            reply();
            await UniTask.CompletedTask;
        }
    }
    public class C2S_Connect_Handler : RequestHandler<C2S_Connect, S2C_ConnectAck>
    {
        public override async UniTask Execute(INetworkSession service, C2S_Connect request, S2C_ConnectAck response, Action reply)
        {
            Console.WriteLine("收到了已连接的确认消息");
            response.Message = "服务器回复:已经连接成功惹，快开始发消息吧";
            service.Send(new SC_Notify() { Message = "abc" });
            reply();
            await UniTask.CompletedTask;
        }
    }
}
