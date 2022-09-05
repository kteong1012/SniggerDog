using Nino.Serialization;

namespace PostMainland
{
    public partial class ProtocalId
    {
        public const uint S2C_NOTIFY = 1000001;
        public const uint C2L_LOGIN = 1000002;
        public const uint L2C_LOGIN = 1000003;
    }

    [NinoSerialize]
    [Protocal(ProtocalId.S2C_NOTIFY)]
    public partial class S2C_Notify : IProtocal
    {
        [NinoMember(92)]
        public System.String Message { get; set; }
        [NinoMember(1)]
        public TouchSocket.Core.Log.LogType MessageType { get; set; }
        public override string ToString()
        {
            return $"[S2C_Notify:[Message:\"{ Message }\";MessageType:\"{ MessageType }\"]]";
        }
    }
    [NinoSerialize]
    [Protocal(ProtocalId.C2L_LOGIN)]
    public partial class C2L_Login : IRequest<L2C_Login>
    {
        [NinoMember(1)]
        public System.String Account { get; set; }
        [NinoMember(2)]
        public System.String Password { get; set; }
        [NinoMember(3)]
        public System.Int32 SectionId { get; set; }
        [NinoMember(90)]
        public System.Int32 RpcId { get; set; }
        public override string ToString()
        {
            return $"[C2L_Login:[Account:\"{ Account }\";Password:\"{ Password }\";SectionId:\"{ SectionId }\";RpcId:\"{ RpcId }\"]]";
        }
    }
    [NinoSerialize]
    [Protocal(ProtocalId.L2C_LOGIN)]
    public partial class L2C_Login : IResponse
    {
        [NinoMember(1)]
        public System.String Name { get; set; }
        [NinoMember(90)]
        public System.Int32 RpcId { get; set; }
        [NinoMember(91)]
        public System.Int32 Error { get; set; }
        [NinoMember(92)]
        public System.String Message { get; set; }
        public override string ToString()
        {
            return $"[L2C_Login:[Name:\"{ Name }\";RpcId:\"{ RpcId }\";Error:\"{ Error }\";Message:\"{ Message }\"]]";
        }
    }
}