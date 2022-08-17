using Cysharp.Threading.Tasks;
using Nino.Serialization;
using System;
using System.Data;
using System.Linq;
using System.Reflection;
using System.Text;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class ProtocalHelper
    {
        private static MethodInfo _serializerMI;
        private static MethodInfo _deserializerMI;
        public static CompressOption CompressOption = CompressOption.NoCompression;
        public static Encoding Encoding = Encoding.UTF8;
        private static IContainer _container;

        public ProtocalHelper(IContainer container)
        {
            _serializerMI = typeof(Serializer).GetMethod("Serialize");
            _deserializerMI = typeof(Deserializer).GetMethod("Deserialize");
            _container = container;
        }
        public static byte[] SerializeProtocal<T>(T protocal) where T : IProtocal
        {
            byte[] buffer = Serializer.Serialize(protocal);
            return buffer;
        }
        public static IProtocal DeserializeProtocal(Type type, byte[] body)
        {
            var mi = _deserializerMI.MakeGenericMethod(type);
            IProtocal protocal = (IProtocal)mi.Invoke(null, new object[] { body, Encoding, CompressOption });
            return protocal;
        }
        public static ProtocalId GetProtocalId(IProtocal protocal)
        {
            ProtocalAttribute protocalAttr = protocal.GetType().GetCustomAttribute<ProtocalAttribute>();
            if (protocalAttr != null)
            {
                return protocalAttr.Id;
            }
            return ProtocalId.InvalidId;
        }
        public static ProtocalType GetProtocalType(IProtocal protocal)
        {
            return protocal switch
            {
                IRequest _ => ProtocalType.Response,
                IResponse _ => ProtocalType.Response,
                IProtocal _ => ProtocalType.Protocal,
                _ => ProtocalType.InValid
            };
        }
    }
}