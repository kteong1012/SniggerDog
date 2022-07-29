using Nino.Serialization;

namespace PostMainland
{
    [NinoSerialize]
    [Protocal(ProtocalId.SC_Notify)]

    public partial class SC_Notify : IMessage
    {
        [NinoMember(1)]
        public int MessageType;
        [NinoMember(2)]
        public string Message;
    }
}