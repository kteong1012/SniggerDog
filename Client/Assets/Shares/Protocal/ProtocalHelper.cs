using Cysharp.Threading.Tasks;
using Nino.Serialization;
using System;
using System.Linq;
using System.Reflection;
using System.Text;

namespace PostMainland
{
    public interface INetContext
    {
        UniTask SendAsync(byte[] data);
        UniTask DisconnectAsync();
    }
    public class ProtocalHelper
    {
        private static MethodInfo _serializerMI;
        private static MethodInfo _deserializerMI;
        private static CompressOption _compressOption = CompressOption.Zlib;
        private static Encoding _encoding = Encoding.UTF8;

        static ProtocalHelper()
        {
            _serializerMI = typeof(Serializer).GetMethod("Serialize");
            _deserializerMI = typeof(Deserializer).GetMethod("Deserialize");
        }
        public static void Handle(INetContext context, byte[] buffer, Action<long, IResponse> respCallback)
        {
            var (type, id, msgId, protocal) = DeserializeProtocal(buffer);
            switch (type)
            {
                case ProtocalType.Message:
                    {
                        var handler = ProtocalHandlerCollector.Ins.GetMessageHandler(id);
                        handler.Handle(protocal as IMessage).Forget();
                    }
                    break;
                case ProtocalType.Request:
                    {
                        var handler = ProtocalHandlerCollector.Ins.GetRequestHandler(id);
                        ProtocalId respId = handler.GetResponseId();
                        Type respType = ProtocalCollector.Ins.GetProtocalTypeById(respId);
                        IResponse response = Activator.CreateInstance(respType) as IResponse;
                        ProtocalAttribute protocalAttr = respType.GetCustomAttribute<ProtocalAttribute>(false);
                        handler.Handle(context, protocal as IRequest, response, Reply).Forget();
                        async UniTask Reply()
                        {
                            await context.SendAsync(SerializeProtocal(response, msgId, ProtocalType.Response, respId));
                        }
                    }
                    break;
                case ProtocalType.Response:
                    {
                        respCallback?.Invoke(msgId, protocal as IResponse);
                    }
                    break;
                default:
                    break;
            }
        }
        public static byte[] SerializeProtocal(IProtocal protocal, long msgId)
        {
            ProtocalId id = GetProtocalId(protocal);
            if (id == ProtocalId.InvalidId)
            {
                throw new Exception($"{protocal.GetType()}的Id定义错误");
            }
            ProtocalType type = protocal switch
            {
                IMessage _ => ProtocalType.Message,
                IRequest _ => ProtocalType.Request,
                IResponse _ => ProtocalType.Response,
                _ => ProtocalType.InValid
            };
            return SerializeProtocal(protocal, msgId, type, id);
        }

        public static byte[] SerializeProtocal(IProtocal protocal, long msgId, ProtocalType type, ProtocalId id)
        {
            Writer writer = new Writer();
            writer.Init(_encoding, _compressOption);
            BaseProtocal pack = new BaseProtocal();
            pack.Type = type;
            pack.Id = id;
            pack.MessageId = msgId;
            Type t = ProtocalCollector.Ins.GetProtocalTypeById(id);
            var mi = _serializerMI.MakeGenericMethod(t);
            byte[] bytes = (byte[])mi.Invoke(null, new object[] { protocal, _encoding, _compressOption });
            pack.Body = bytes;
            BaseProtocal.NinoSerializationHelper.Serialize(pack, writer);
            return writer.ToBytes();

        }
        private static (ProtocalType type, ProtocalId id, long msgId, IProtocal protocal) DeserializeProtocal(Span<byte> bytes)
        {
            Reader reader = new Reader();
            reader.Init(bytes.ToArray(), bytes.Length, _encoding, _compressOption);
            BaseProtocal pack = BaseProtocal.NinoSerializationHelper.Deserialize(reader);
            Type t = ProtocalCollector.Ins.GetProtocalTypeById(pack.Id);
            var mi = _deserializerMI.MakeGenericMethod(t);
            IProtocal protocal = (IProtocal)mi.Invoke(null, new object[] { pack.Body, _encoding, _compressOption });
            return (pack.Type, pack.Id, pack.MessageId, protocal);
        }
        private static ProtocalId GetProtocalId(IProtocal protocal)
        {
            ProtocalAttribute protocalAttr = protocal.GetType().GetCustomAttribute<ProtocalAttribute>();
            if (protocalAttr != null)
            {
                return protocalAttr.Id;
            }
            return ProtocalId.InvalidId;
        }
    }
}