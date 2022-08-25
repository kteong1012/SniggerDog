using Cfg;
using CommandLine;
using System;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class Program
    {
        static void Main(string[] args)
        {
            Parser.Default.ParseArguments<ProcessLauncherOptions>(args).WithParsed(StartUp);
        }

        private static void StartUp(ProcessLauncherOptions options)
        {
            if (Enum.TryParse(options.ServerType, out ServerType serverType))
            {
                Log.Error($"参数{options.ServerType}错误，没有这个服务器类型");
                return;
            }

            Log.SetLogs(new FileLogger(), new ConsoleLogger(LogType.Warning, LogType.Error));
            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);

            Global.Options = options;
            Global.WorkPlace = new System.IO.DirectoryInfo(options.WorkPlace);
            new ConfigLoader();
            Global.Container = new Container();

            switch (serverType)
            {
                case ServerType.Main:
                    StartAllServers();
                    break;
                case ServerType.Login:
                    break;
                case ServerType.Gate:
                    break;
                case ServerType.World:
                    break;
                case ServerType.Solcial:
                    break;
                case ServerType.Battle:
                    break;
                case ServerType.GM:
                    break;
                default:
                    break;
            }

            Game game = new Game();
            game.Start();



            while (true)
            {
                var lineStr = Console.ReadLine();
                if (lineStr == "Close")
                {
                    break;
                }
            }
        }

        private static void StartAllServers()
        {
            foreach (var serverInfo in TbStartProcess.Instance.DataList)
            {
                ProcessLauncherOptions options = new ProcessLauncherOptions();
                options.Host = serverInfo.Host;
                options.Port = serverInfo.Port;
                options.ServerType = serverInfo.ServerType;
                options.WorkPlace = Global.Options.WorkPlace;
                options.ProcessPath = serverInfo.ProcessPath;

                ProcessLauncher launcher = new ProcessLauncher(options);
                launcher.Launch();
                //TODO 启动保活监听
            }
        }
    }
}