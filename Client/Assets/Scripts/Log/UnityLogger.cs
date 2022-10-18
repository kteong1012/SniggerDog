using System;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class UnityLogger : LoggerBase
    {
        protected override void WriteLog(LogType logType, object source, string message, Exception exception)
        {
            switch (logType)
            {
                case LogType.Information:
                case LogType.Debug:
                case LogType.Trace:
                    UnityEngine.Debug.Log(message);
                    break;
                case LogType.Warning:
                    UnityEngine.Debug.LogWarning(message);
                    break;
                case LogType.Error:
                case LogType.Critical:
                    UnityEngine.Debug.LogError(message);
                    break;
                default:
                    break;
            }
            if (exception != null)
            {
                UnityEngine.Debug.LogException(exception);
            }
        }
    }
}
