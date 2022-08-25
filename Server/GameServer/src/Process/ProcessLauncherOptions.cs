
using CommandLine;
using System.IO;

namespace PostMainland
{
    public class ProcessLauncherOptions
    {
        [Option('w', "work_place", Required = true, HelpText = "工作区根目录")]
        public string WorkPlace { get; set; }
        [Option('p', "process_path", Required = true, HelpText = "启动程序的相对路径")]
        public string ProcessPath { get; set; }
        [Option('t', "server_type", Required = true, HelpText = "服务器类型")]
        public string ServerType { get; set; }
        [Option('h', "host", Required = true, HelpText = "监听地址")]
        public string Host { get; set; }
        [Option("port", Required = true, HelpText = "监听端口")]
        public string Port { get; set; }

        public override string ToString()
        {
            return $"{Path.Combine(WorkPlace, ProcessPath)} --work_place {WorkPlace} --process_path {ProcessPath} --server_type {ServerType} --host {Host} --port {Port}";
        }
    }
}