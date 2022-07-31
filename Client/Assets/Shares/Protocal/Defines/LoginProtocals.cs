using Nino.Serialization;

namespace PostMainland
{
    [NinoSerialize]
    [Protocal(ProtocalId.CS_Login)]
    public partial class CS_Login : IRequest
    {
        [NinoMember(1)]
        public string Account { get; set; }
        [NinoMember(2)]
        public string Password { get; set; }
        [NinoMember(3)]
        public byte[] b { get; set; }
    }

    [NinoSerialize]
    [Protocal(ProtocalId.SC_LoginAck)]
    public partial class SC_LoginAck : IResponse
    {
        [NinoMember(1)]
        public string Account { get; set; }
        [NinoMember(2)]
        public string Name { get; set; }
        [NinoMember(90)]
        public int Status { get; set; }
        [NinoMember(91)]
        public int Error { get; set; }
        [NinoMember(92)]
        public string Message { get; set; }

    }

}