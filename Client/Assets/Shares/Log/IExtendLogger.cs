using System;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public interface IExtendLogger : ILog
    {
        void Assert(object source, string message, Exception exception);

        void Assert(object source, string message);
    }
}
