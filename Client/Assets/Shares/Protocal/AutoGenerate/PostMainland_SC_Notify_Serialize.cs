/* this is generated by nino */
namespace PostMainland
{
    public partial class SC_Notify
    {
        public static SC_Notify.SerializationHelper NinoSerializationHelper = new SC_Notify.SerializationHelper();
        public class SerializationHelper: Nino.Serialization.NinoWrapperBase<SC_Notify>
        {
            #region NINO_CODEGEN
            public override void Serialize(SC_Notify value, Nino.Serialization.Writer writer)
            {
                writer.CompressAndWrite(value.MessageType);
                writer.Write(value.Message);
            }

            public override SC_Notify Deserialize(Nino.Serialization.Reader reader)
            {
                SC_Notify value = new SC_Notify();
                value.MessageType =  (System.Int32)reader.DecompressAndReadNumber();
                value.Message = reader.ReadString();
                return value;
            }
            #endregion
        }
    }
}