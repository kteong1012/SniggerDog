using System;
using System.Linq;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class ConsoleLogger : LoggerBase
    {
        private readonly ConsoleColor _consoleForegroundColor;
        private readonly ConsoleColor _consoleBackgroundColor;
        public ConsoleLogger()
        {
            this._consoleForegroundColor = Console.ForegroundColor;
            this._consoleBackgroundColor = Console.BackgroundColor;
        }
        protected override void WriteLog(LogType logType, object source, string message, Exception exception)
        {
            lock (typeof(ConsoleLogger))
            {
                Console.Write(DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss ffff"));
                Console.Write(" | ");
                switch (logType)
                {
                    case LogType.Debug:
                        Console.ForegroundColor = ConsoleColor.Green;
                        break;
                    case LogType.Warning:
                        Console.ForegroundColor = ConsoleColor.Yellow;
                        break;
                    case LogType.Error:
                    case LogType.Critical:
                        Console.ForegroundColor = ConsoleColor.Red;
                        break;

                    case LogType.Information:
                    default:
                        Console.ForegroundColor = this._consoleForegroundColor;
                        break;
                }
                Console.Write(logType.ToString());
                Console.ForegroundColor = this._consoleForegroundColor;
                Console.Write(" | ");
                Console.Write(message);

                if (exception != null)
                {
                    Console.Write(" | ");
                    Console.Write($"【堆栈】：{(exception == null ? "未知" : exception.StackTrace)}");
                }
                Console.WriteLine();

                Console.ForegroundColor = this._consoleForegroundColor;
                Console.BackgroundColor = this._consoleBackgroundColor;
            }
        }
    }
}
