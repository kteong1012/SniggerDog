using System;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class UnityLogger : ILog
    {
        public void Debug(LogType logType, object source, string message, Exception exception)
        {
            switch (logType)
            {
                case LogType.Message:
                    UnityEngine.Debug.Log(message);
                    break;
                case LogType.Warning:
                    UnityEngine.Debug.LogWarning(message);
                    break;
                case LogType.Error:
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

        public void Debug(LogType logType, object source, string message)
        {
            Debug(logType, source, message, null);
        }
    }
}
