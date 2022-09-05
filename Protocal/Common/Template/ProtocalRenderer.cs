using Scriban;
using Scriban.Runtime;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;

namespace PostMainland
{
    public class TemplateExtends : ScriptObject
    {
        public static string ToUpperCase(string src)
        {
            return src.ToUpper();
        }
        public static string ToLowerCase(string src)
        {
            return src.ToLower();
        }
    }
    public class ProtocalRenderer
    {
        public string RenderProtocal(List<ProtocalTypeInfo> types, string templatePath, int startIndex)
        {
            var ctx = new TemplateContext();
            var env = new TemplateExtends()
            {
                ["types"] = types,
                ["index"] = startIndex,
            };
            ctx.PushGlobal(env);
            string txt = File.ReadAllText(templatePath);
            var tpl = Template.Parse(txt);
            return tpl.Render(ctx);
        }
    }
}
