using CommandLine;

namespace PostMainland
{
    public class Options
    {
        [Option("temp", Required = true, HelpText = "模板路径")]
        public string TemplatePath { get; set; }
        [Option("out", Required = true, HelpText = "输出路径")]
        public string OutputPath { get; set; }
        [Option("type", Required = true, HelpText = "'CS'或者'SS',大小写不敏感")]
        public string Type { get; set; }
        [Option("start", Required = true, HelpText = "起始协议Id")]
        public int StartIndex { get; set; }
    }

}