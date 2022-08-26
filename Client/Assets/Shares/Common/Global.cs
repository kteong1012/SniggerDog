using System.IO;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class Global
    {
        public static IContainer Container { get; set; }
        public static DirectoryInfo WorkPlace { get; set; }
#if NOT_UNITY
        public static ProcessLauncherOptions Options { get; set; }
#endif
    }
}