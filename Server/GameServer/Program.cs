using Cfg;
using CommandLine;
using System;
using System.Collections.Generic;
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
            if (!Enum.TryParse(options.ServerType, out ServerType serverType))
            {
                Log.Error($"参数{options.ServerType}错误，没有这个服务器类型");
                return;
            }

            Log.SetLogs(new FileLogger(), new ConsoleLogger(LogType.Warning, LogType.Error));
            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);

            Global.Options = options;
            Global.WorkPlace = new System.IO.DirectoryInfo(options.WorkPlace);
            new Luban();
            Global.Container = new Container();
            try
            {
                switch (serverType)
                {
                    case ServerType.Main:
                        StartAllServers();
                        break;
                    case ServerType.Login:
                    case ServerType.Gate:
                    case ServerType.World:
                    case ServerType.Solcial:
                    case ServerType.Battle:
                        Game game = new Game(serverType);
                        game.Start();
                        break;
                    case ServerType.GM:
                        break;
                    default:
                        break;
                }
            }
            catch (Exception e)
            {
                Log.Error(e.Message);
            }



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
            List<ProcessLauncher> launchers = new List<ProcessLauncher>();
            foreach (var serverInfo in TbStartProcess.Instance.DataList)
            {
                ProcessLauncherOptions options = new ProcessLauncherOptions();
                options.Host = serverInfo.Host;
                options.Port = serverInfo.Port;
                options.ServerType = serverInfo.ServerType;
                options.WorkPlace = Global.WorkPlace.FullName;
                options.ProcessPath = serverInfo.ProcessPath;

                ProcessLauncher launcher = new ProcessLauncher(options);
                launcher.Launch();
                launchers.Add(launcher);
            }

            while (true)
            {
                Thread.Sleep(5000);
                launchers.ForEach(launcher => launcher.CheckAlive());
            }
        }
    }
}