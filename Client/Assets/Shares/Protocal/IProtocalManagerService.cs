using PostMainland;
using System;

namespace PostMainland
{
    public interface IProtocalManagerService
    {
        IMessageHandler GetMessageHandler(ProtocalId protcalId);
        IRequestHandler GetRequestHandler(ProtocalId protcalId);
        IProtocal CreateProtocal(ProtocalId protcalId);
        Type GetProtocalType(ProtocalId protcalId);
    }
}