using Nino.Serialization;
using TouchSocket.Core.Log;

namespace PostMainland
{
    [NinoSerialize]
    [Protocal(ProtocalId.SC_Notify)]

    public partial class SC_Notify : IProtocal
    {
        [NinoMember(1)]
        public LogType MessageType;
        [NinoMember(2)]
        public string Message;
    }
}