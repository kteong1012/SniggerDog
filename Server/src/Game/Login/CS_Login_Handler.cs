using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PostMainland
{

    public class CS_Login_Handler : RequestHandler<CS_Login, SC_LoginAck>
    {
        public async override UniTask Execute(INetworkSession service, CS_Login request, SC_LoginAck response, Action reply)
        {
            response.Name = "服务器改了一下名字";
            Console.WriteLine($"收到了{request.Account}  {request.Password} 11");
            service.Send(new SC_Notify() { Message = "测试111", MessageType = TouchSocket.Core.Log.LogType.Error });
            service.Send(new SC_Notify() { Message = "测试222", MessageType = TouchSocket.Core.Log.LogType.Warning });
            service.Send(new SC_Notify() { Message = "测试333", MessageType = TouchSocket.Core.Log.LogType.Message });
            reply();
            await UniTask.CompletedTask;
        }
    }
}
