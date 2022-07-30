using Cysharp.Threading.Tasks;

namespace PostMainland
{
    public class C2S_Disconnect_Handler : RequestHandler<C2S_Disconnect, S2C_DisconnectAck>
    {
        public override async UniTask Execute(INetContext context, C2S_Disconnect request, S2C_DisconnectAck response, Func<UniTask> reply)
        {
            Console.WriteLine("收到了断开的请求");
            response.Message = "断开成功惹";
            await reply();
            await context.DisconnectAsync();
        }
    }
}
