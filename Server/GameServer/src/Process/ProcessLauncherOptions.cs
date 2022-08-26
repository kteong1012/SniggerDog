
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
        public string Port { get; set; }

        public override string ToString()
        {
            return $"GameServer.dll --server_type {ServerType} --host {Host} --port {Port}";
        }
    }
}