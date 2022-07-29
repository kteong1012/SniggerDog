using Nino.Serialization;

namespace PostMainland
{
    [NinoSerialize]
    public partial class BaseProtocal
    {
        [NinoMember(1)]
        public ProtocalType Type { get; set; }
        [NinoMember(2)]
        public ProtocalId Id{ get; set; }
        [NinoMember(3)]
        public long MessageId { get; set; }
        [NinoMember(4)]
        public byte[] Body { get; set; }

    }


}