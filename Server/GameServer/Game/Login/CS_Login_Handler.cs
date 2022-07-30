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
        public override async UniTask Execute(INetContext context, CS_Login request, SC_LoginAck response, Func<UniTask> reply)
        {
            Console.WriteLine($"收到了{request.Account}  {request.Password}");
            response.Name = "宝鱼";
            await reply();
            await UniTask.CompletedTask;
        }
    }
}
