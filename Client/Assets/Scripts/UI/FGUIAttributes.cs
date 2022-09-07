using System;

namespace PostMainland
{

    [AttributeUsage(AttributeTargets.Field)]
    public class FGUIFieldAttribute : Attribute
    {
        public string path = null;
        public string name = null;
        public FGUIFieldAttribute(string path = null, string name = null)
        {
            this.name = name;
            this.path = path;
        }
    }

    [AttributeUsage(AttributeTargets.Field)]
    public class FGUICustomTypeAttribute : Attribute
    {
        public string path = null;
        public string name = null;
        public FGUICustomTypeAttribute(string path = null, string name = null)
        {
            this.name = name;
            this.path = path;
        }
    }
    [AttributeUsage(AttributeTargets.Class)]
    public class FGUIWrapperAttribute : Attribute
    {
        public readonly string packageName;
        public readonly string resName;
        public readonly string url;

        public FGUIWrapperAttribute(string packageName,string resName,string url)
        {
            this.packageName = packageName;
            this.resName = resName;
            this.url = url;
        }
    }
    [AttributeUsage(AttributeTargets.Class)]
    public class FGUILocalLoadAttribute : Attribute
    {
    }
}