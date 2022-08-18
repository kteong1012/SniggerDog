using Nino.Serialization;

namespace PostMainland
{

    [NinoSerialize]
    [Protocal(ProtocalId.C2S_Connect)]
    public partial class C2S_Connect : IRequest<S2C_ConnectAck>
    {
        [NinoMember(1)]
        public byte Empty { get; set; }
    }
    [NinoSerialize]
    [Protocal(ProtocalId.S2C_ConnectAck)]
    public partial class S2C_ConnectAck : IResponse
    {
        [NinoMember(91)]
        public int Status { get; set; }
        [NinoMember(92)]
        public int Error { get; set; }
        [NinoMember(93)]
        public string Message { get; set; }
    }
    [NinoSerialize]
    [Protocal(ProtocalId.C2S_Disconnect)]
    public partial class C2S_Disconnect : IRequest<S2C_DisconnectAck>
    {

        [NinoMember(1)]
        public byte Empty { get; set; }
    }
    [NinoSerialize]
    [Protocal(ProtocalId.S2C_Disconnect)]
    public partial class S2C_DisconnectAck : IResponse
    {
        [NinoMember(91)]
        public int Status { get; set; }
        [NinoMember(92)]
        public int Error { get; set; }
        [NinoMember(93)]
        public string Message { get; set; }
    }

}