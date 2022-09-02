
using CommandLine;
using System.IO;

namespace PostMainland
{
    public class ProcessLauncherOptions
    {
        [Option('t', "server_type", Required = true, HelpText = "服务器类型")]
        public string ServerType { get; set; }
        [Option('h', "host", Required = false, HelpText = "监听地址")]
        public string Host { get; set; }
        [Option("port", Required = false, HelpText = "监听端口")]
        public int Port { get; set; }
        [Option('g', "is_game_server", Required = false, HelpText = "是否是业务服务器")]
        public bool IsGameServer { get; set; } = false;
        [Option('1', "one_process", Required = false, HelpText = "所有服务器都在一个进程启动")]
        public bool OneProcess { get; set; } = false;

        public override string ToString()
        {
            return $"GameServer.dll --server_type {ServerType} --host {Host} --port {Port} --is_game_server {IsGameServer} --one_process {OneProcess}";
        }
    }
}