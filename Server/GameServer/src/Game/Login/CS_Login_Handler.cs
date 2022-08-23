using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PostMainland
{

    public class CS_Login_Handler : RequestHandler<C2S_Login, S2C_Login>
    {
        public async override UniTask Execute(INetworkSession service, C2S_Login request, S2C_Login response, Action reply)
        {
            response.Name = "服务器改了一下名字";
            Console.WriteLine($"收到了{request.Account}  {request.Password} 11");
            service.Send(new S2C_Notify() { Message = "测试111", MessageType = TouchSocket.Core.Log.LogType.Error });
            service.Send(new S2C_Notify() { Message = "测试222", MessageType = TouchSocket.Core.Log.LogType.Warning });
            service.Send(new S2C_Notify() { Message = "测试333", MessageType = TouchSocket.Core.Log.LogType.Message });
            reply();
            await UniTask.CompletedTask;
        }
    }
}
