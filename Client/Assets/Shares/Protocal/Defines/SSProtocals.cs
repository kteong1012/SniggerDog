using Nino.Serialization;

namespace PostMainland
{
    public partial class ProtocalId
    {
        public const uint S2G_TEST = 1000001;
    }

    [NinoSerialize]
    [Protocal(ProtocalId.S2G_TEST)]
    public partial class S2G_Test : IProtocal
    {
        [NinoMember(92)]
        public string Message { get; set; }
        public override string ToString()
        {
            return $"[S2G_Test:[Message:\"{ Message }\"]]";
        }
    }
}