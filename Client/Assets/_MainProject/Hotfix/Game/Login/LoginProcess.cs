using Cfg;
using Cysharp.Threading.Tasks;
using System;
using System.Linq;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class LoginProcess : IDisposable
    {
        private IPHost _loginIpHost;
        private TcpC2SSession _session;

        public LoginProcess()
        {
            var loginServerCfg = TbStartProcess.Instance.DataList.FirstOrDefault(x => x.ServerType == "Login");
            Log.Info(loginServerCfg);
            _loginIpHost = new IPHost(StringUtils.ToIPAddress(loginServerCfg.Host, loginServerCfg.Port));
        }
        public async UniTask<(bool, string)> ConnectLoginServer()
        {
            try
            {
                _session = await TcpC2SSession.GetSession(_loginIpHost);
                return (true, "连接成功");
            }
            catch (Exception e)
            {
                Log.Assert("登陆失败", e);
                return (false, e.Message);
            }
        }
        public async UniTask<ErrorCode> StartLogin(string accountName, string password)
        {
            var response = await _session.Request<L2C_Login, C2L_Login>(new C2L_Login() { Account = accountName, Password = password });
            if (!response.Success(out var errorCode))
            {
                return errorCode;
            }
            return ErrorCode.Success;
        }

        public void Dispose()
        {
            _session?.Dispose();
        }
    }
}
