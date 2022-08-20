using TouchSocket.Core.Log;

namespace PostMainland
{
    public class ConsoleLogger : ILog
    {
        private readonly ConsoleColor m_consoleForegroundColor;
        private readonly ConsoleColor m_consoleBackgroundColor;

        private readonly LogType[] logTypes;

        public ConsoleLogger(params LogType[] logTypes)
        {
            this.logTypes = logTypes;
            this.m_consoleForegroundColor = Console.ForegroundColor;
            this.m_consoleBackgroundColor = Console.BackgroundColor;
        }
        public void Debug(LogType logType, object source, string message, Exception exception)
        {
            if (!logTypes.Contains(logType))
            {
                return;
            }
            lock (typeof(ConsoleLogger))
            {
                Console.Write(DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss ffff"));
                Console.Write(" | ");
                switch (logType)
                {
                    case LogType.Warning:
                        Console.ForegroundColor = ConsoleColor.Yellow;
                        break;

                    case LogType.Error:
                        Console.ForegroundColor = ConsoleColor.Red;
                        break;

                    case LogType.Message:
                    default:
                        Console.ForegroundColor = this.m_consoleForegroundColor;
                        break;
                }
                Console.Write(logType.ToString());
                Console.ForegroundColor = this.m_consoleForegroundColor;
                Console.Write(" | ");
                Console.Write(message);

                if (exception != null)
                {
                    Console.Write(" | ");
                    Console.Write($"【堆栈】：{(exception == null ? "未知" : exception.StackTrace)}");
                }
                Console.WriteLine();

                Console.ForegroundColor = this.m_consoleForegroundColor;
                Console.BackgroundColor = this.m_consoleBackgroundColor;
            }
        }

        public void Debug(LogType logType, object source, string message)
        {
            Debug(logType, source, message, null);
        }
    }
}
