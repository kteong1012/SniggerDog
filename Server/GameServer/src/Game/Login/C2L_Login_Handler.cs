using Cfg;
using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class C2L_Login_Handler : RequestHandler<C2L_Login, L2C_Login>
    {
        public async override UniTask Execute(INetworkSession session, IContainer serverContainer, C2L_Login request, L2C_Login response, Action reply)
        {
            var game = serverContainer.Resolve<Server>();
            if (!game.CheckServerType(ServerType.Login))
            {
                return;
            }
            //验证
            var db = serverContainer.Resolve<MongoDBContext>();
            var account = await db.Query<Db_Account>(x => x.Account == request.Account && x.SectionId == request.SectionId);
            if (account == null)
            {
                //账号不存在，现在先暂时直接注册
                //response.SetErrorCode(ErrorCode.AccountNotExists);
                //reply();
                //return;
                account = new Db_Account();
                account.GenerateId();
                account.SectionId = request.SectionId;
                account.Account = request.Account;
                account.Password = request.Password;
                await db.Save(account);
            }
            if (request.Password.Equals(account.Password))
            {
                response.SetErrorCode(ErrorCode.PasswordError);
                reply();
                return;
            }
            reply();
            await UniTask.CompletedTask;
        }
    }
}
