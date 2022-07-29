using Nino.Serialization;

namespace PostMainland
{
    [NinoSerialize]
    [Protocal(ProtocalId.CS_Login)]
    public partial class CS_Login : IRequest
    {
        [NinoMember(1)]
        public string Account;
        [NinoMember(2)]
        public string Password;
    }
}