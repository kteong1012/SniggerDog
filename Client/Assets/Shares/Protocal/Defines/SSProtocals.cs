using Nino.Serialization;

namespace PostMainland
{
    public partial class ProtocalId
    {
        public const uint S2G_Test = 1000001;
    }

    [NinoSerialize]
    [Protocal(ProtocalId.S2G_Test)]
    public partial class S2G_Test : IProtocal
    {
        [NinoMember(92)]
        public string Message { get; set; }
    }
}