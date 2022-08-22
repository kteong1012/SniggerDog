using Scriban;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;

namespace PostMainland
{
    public class ProtocalRenderer
    {
        public string RenderProtocal(List<ProtocalTypeInfo> types, string templatePath, int startIndex)
        {
            string txt = File.ReadAllText(templatePath);
            var tpl = Template.Parse(txt);
            return tpl.Render(new
            {
                Types = types,
                Index = startIndex,
            });
        }
    }
}
