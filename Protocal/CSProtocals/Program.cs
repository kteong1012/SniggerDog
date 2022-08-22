using CommandLine;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;

namespace PostMainland
{
    public partial class Program
    {
        static void Main(string[] args)
        {
            var parse = Parser.Default.ParseArguments<Options>(args).WithParsed(Run);
        }

        private static void Run(Options option)
        {
            ProtocalRenderer render = new ProtocalRenderer();
            List<ProtocalTypeInfo> types = null;
            switch (option.Type.ToLower())
            {
                case "cs":
                    types = CodeGenerater.GetProtocalTypeInfos(typeof(ProtocalDefine.CSProtocal).Assembly);
                    break;
                default:
                    throw new ArgumentException($"Type空白或错误,请填写'cs'");
            }
            string str = render.RenderProtocal(types, option.TemplatePath, option.StartIndex);
            FileInfo fi = new FileInfo(option.OutputPath);
            if (!fi.Directory.Exists)
            {
                fi.Directory.Create();
            }
            File.WriteAllText(option.OutputPath, str);
        }
    }
}