using Cysharp.Threading.Tasks;
using System;

namespace PostMainland
{
    public class MessageBoxLogger : UnityLogger, IExtendLogger
    {
        public void Assert(object source, string message, Exception exception)
        {
            string exceptionDetail = null;
#if DEBUG
            if(exception != null)
            {
                exceptionDetail = exception.Message + exception.StackTrace;
            }
#endif
            MessageBox.ShowConfirm($"{message}\r\n{exceptionDetail}", "警告").Forget();
        }

        public void Assert(object source, string message)
        {
            MessageBox.ShowConfirm($"{message}", "警告").Forget();
        }
    }
}
