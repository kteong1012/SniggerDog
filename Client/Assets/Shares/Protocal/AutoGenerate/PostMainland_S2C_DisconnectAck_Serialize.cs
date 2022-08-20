/* this is generated by nino */
namespace PostMainland
{
    public partial class S2C_DisconnectAck
    {
        public static S2C_DisconnectAck.SerializationHelper NinoSerializationHelper = new S2C_DisconnectAck.SerializationHelper();
        public class SerializationHelper: Nino.Serialization.NinoWrapperBase<S2C_DisconnectAck>
        {
            #region NINO_CODEGEN
            public override void Serialize(S2C_DisconnectAck value, Nino.Serialization.Writer writer)
            {
                writer.CompressAndWrite(value.RpcId);
                writer.CompressAndWrite(value.Error);
                writer.Write(value.Message);
            }

            public override S2C_DisconnectAck Deserialize(Nino.Serialization.Reader reader)
            {
                S2C_DisconnectAck value = new S2C_DisconnectAck();
                value.RpcId =  (System.Int32)reader.DecompressAndReadNumber();
                value.Error =  (System.Int32)reader.DecompressAndReadNumber();
                value.Message = reader.ReadString();
                return value;
            }
            #endregion
        }
    }
}