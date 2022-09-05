using Cfg;
using Cysharp.Threading.Tasks;
using System.Linq;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class Login
    {
        private static IPHost _loginIpHost;
        static Login()
        {
            var loginServerCfg = TbStartProcess.Instance.DataList.FirstOrDefault(x => x.ServerType == "Login");
            Log.Message(loginServerCfg);
            _loginIpHost = new IPHost(StringUtils.ToIPAddress(loginServerCfg.Host, loginServerCfg.Port));
        }
        public static async UniTask<ErrorCode> StartLogin(string accountName, string password)
        {
            TcpC2SSession session = new TcpC2SSession(_loginIpHost);
            var response = await session.Request<L2C_Login, C2L_Login>(new C2L_Login() { Account = accountName, Password = password });
            if(!response.Success(out var errorCode))
            {
                return errorCode;
            }
            return ErrorCode.Success;
        }
    }
}
