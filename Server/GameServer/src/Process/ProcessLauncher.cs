using CommandLine;
using System.Diagnostics;
using System.IO;

namespace PostMainland
{
    public enum ServerType
    {
        Main,       //入口，用来启动服务器进程的
        Login,      //登陆服务器，登陆、账号管理相关
        Gate,       //网关，和客户端保持联系
        World,      //主世界服务器
        Solcial,    //社交、匹配服务器
        Battle,     //战斗服务器
        GM,         //GM服务器
    }
    public class ProcessLauncher
    {
        private readonly ProcessLauncherOptions _options;
        private Process _process;
        public ProcessLauncher(ProcessLauncherOptions options)
        {
            _options = options;
        }

        public void Launch()
        {
            if (_process != null)
            {
                _process.Close();
            }
            _process = new Process();
            _process.StartInfo.FileName = "dotnet";
            _process.StartInfo.WorkingDirectory = _options.WorkPlace;
            _process.StartInfo.Arguments = _options.ToString();
            _process.Start();
            Log.Message($"{_process.ProcessName}启动成功");
        }
        public void CheckAlive()
        {
            //TODO 重启
        }

        public void Close()
        {
            if (_process != null)
            {
                _process.Close();
            }
        }
    }
}