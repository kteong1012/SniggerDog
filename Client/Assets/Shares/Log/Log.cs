using System;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class Log
    {
        private static LoggerGroup _loggerGroup;
        public static void SetLogs(params ILog[] logs)
        {
            _loggerGroup = new LoggerGroup(logs);
        }

        public static void LogByType(LogType logType, object obj, Exception e = null)
        {
            _loggerGroup.Debug(logType, null, ObjectToString(obj), e);
        }
        public static void LogByType<T>(LogType logType, object obj, Exception e = null) where T : ILog
        {
            _loggerGroup.Debug<T>(logType, null, ObjectToString(obj), e);
        }
        public static void Message(object obj, Exception e = null)
        {
            _loggerGroup.Debug(LogType.Message, null, ObjectToString(obj), e);
        }
        public static void Warning(object obj, Exception e = null)
        {
            _loggerGroup.Debug(LogType.Warning, null, ObjectToString(obj), e);
        }
        public static void Error(object obj, Exception e = null)
        {
            _loggerGroup.Debug(LogType.Error, null, ObjectToString(obj), e);
        }
        public static void Message<T>(object obj, Exception e = null) where T : ILog
        {
            _loggerGroup.Debug<T>(LogType.Message, null, ObjectToString(obj), e);
        }
        public static void Warning<T>(object obj, Exception e = null) where T : ILog
        {
            _loggerGroup.Debug(LogType.Warning, null, ObjectToString(obj), e);
        }
        public static void Error<T>(object obj, Exception e = null) where T : ILog
        {
            _loggerGroup.Debug<T>(LogType.Error, null, ObjectToString(obj), e);
        }

        private static string ObjectToString(object obj)
        {
            return obj?.ToString();
        }
    }
}
