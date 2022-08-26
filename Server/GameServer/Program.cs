using Cfg;
using CommandLine;
using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class Program
    {
        private const string _pidLogFile = "../.record.gameserver_pid";
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
            new Luban();
            Global.Container = new Container();


            var pid = Process.GetCurrentProcess().Id;
            Log.Message($"{serverType}启动,pid:{pid}");
            try
            {
                switch (serverType)
                {
                    case ServerType.Main:
                        KillAllServers();
                        RecordPid(pid);
                        StartAllServers();
                        break;
                    case ServerType.Login:
                    case ServerType.Gate:
                    case ServerType.World:
                    case ServerType.Solcial:
                    case ServerType.Battle:
                        RecordPid(pid);
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
        private static void RecordPid(int pid)
        {
            File.AppendAllLines(_pidLogFile, new string[] { pid.ToString() });
        }
        private static void KillAllServers()
        {
            if (!File.Exists(_pidLogFile))
            {
                return;
            }
            var text = File.ReadAllLines(_pidLogFile);
            if (text.IsNullOrEmpty())
            {
                return;
            }
            var pids = text.Select(s => int.Parse(s));
            foreach (var pid in pids)
            {
                try
                {
                    var process = Process.GetProcessById(pid);
                    if (process == null)
                    {
                        continue;
                    }
                    if (process.HasExited)
                    {
                        continue;
                    }
                    var name = process.ProcessName;
                    var id = process.Id;
                    process.Kill();
                    process.Close();
                    Log.Message($"Kill process {name} {id}");

                }
                catch (Exception e)
                {
                    Log.Error(e);
                }
            }
            File.WriteAllText(_pidLogFile, string.Empty);

        }
        private static void StartAllServers()
        {
            var launchers = new List<ProcessLauncher>();
            foreach (var serverInfo in TbStartProcess.Instance.DataList)
            {
                ProcessLauncherOptions options = new ProcessLauncherOptions();
                options.Host = serverInfo.Host;
                options.Port = serverInfo.Port;
                options.ServerType = serverInfo.ServerType;

                ProcessLauncher launcher = new ProcessLauncher(options);
                launcher.Launch();
                launchers.Add(launcher);
            }

            while (true)
            {
                Thread.Sleep(100);
                launchers.ForEach(launcher => launcher.CheckAlive());
            }
        }
    }
}