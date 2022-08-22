using PostMainland;
using System;

namespace PostMainland
{
    public interface IProtocalManagerService
    {
        IMessageHandler GetMessageHandler(uint protcalId);
        IRequestHandler GetRequestHandler(uint protcalId);
        IProtocal CreateProtocal(uint protcalId);
        Type GetProtocalType(uint protcalId);
    }
}