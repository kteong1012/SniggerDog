using Nino.Serialization;

namespace PostMainland
{

    [NinoSerialize]
    [Protocal(ProtocalId.C2S_Disconnect)]
    public partial class C2S_Disconnect : IRequest
    {
        [NinoMember(93)]
        public int Id { get; set; }
    }
    [NinoSerialize]
    [Protocal(ProtocalId.S2C_Disconnect)]
    public partial class S2C_DisconnectAck : IResponse
    {
        [NinoMember(90)]
        public int Status { get; set; }
        [NinoMember(91)]
        public int Error { get; set; }
        [NinoMember(92)]
        public string Message { get; set; }
    }

}