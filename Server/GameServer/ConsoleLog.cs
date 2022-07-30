using DotNetty.Common.Internal.Logging;
using Microsoft.Extensions.Logging;

namespace PostMainland
{
    public class ConsoleLog
    {
        public static void SetConsoleLogger() => InternalLoggerFactory.DefaultFactory = LoggerFactory.Create(builder => builder.AddConsole());
    }
}