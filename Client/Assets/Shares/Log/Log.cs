using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class Log
    {
        private static LoggerGroup _loggerGroup;
        private static List<IExtendLogger> _extendLoggers;
        public static void SetLogs(params ILog[] logs)
        {
            _loggerGroup = new LoggerGroup(logs);
            _extendLoggers = logs.Where(x => x is IExtendLogger).Select(x => x as IExtendLogger).ToList();
        }
        public static void AppendExtendLogs(params IExtendLogger[] logs)
        {
            _extendLoggers.AddRange(logs);
        }

        public static void LogByType(LogType logType, object obj, Exception e = null)
        {
            _loggerGroup.Log(logType, null, ObjectToString(obj), e);
        }
        public static void Trace(object obj, Exception e = null)
        {
            _loggerGroup.Log(LogType.Trace, null, ObjectToString(obj, true), e);
        }
        public static void Debug(object obj, Exception e = null)
        {
            _loggerGroup.Log(LogType.Debug, null, ObjectToString(obj, true), e);
        }
        public static void Info(object obj, Exception e = null)
        {
            _loggerGroup.Log(LogType.Information, null, ObjectToString(obj), e);
        }
        public static void Warning(object obj, Exception e = null)
        {
            _loggerGroup.Log(LogType.Warning, null, ObjectToString(obj), e);
        }
        public static void Error(object obj, Exception e = null)
        {
            _loggerGroup.Log(LogType.Error, null, ObjectToString(obj, true), e);
        }
        public static void Critical(object obj, Exception e = null)
        {
            _loggerGroup.Log(LogType.Critical, null, ObjectToString(obj, true), e);
        }
        public static void Assert(object obj, Exception e = null)
        {
            _extendLoggers.ForEach(x =>
            {
                x.Log(LogType.Error, null, ObjectToString(obj), e);
                x.Assert(null, ObjectToString(obj), e);
            });
        }
        private static string ObjectToString(object obj, bool trace = false)
        {
            if (trace)
            {
                return $"{obj?.ToString()}{new StackTrace()}";
            }
            else
            {
                return $"{obj?.ToString()}";
            }
        }
    }
}
