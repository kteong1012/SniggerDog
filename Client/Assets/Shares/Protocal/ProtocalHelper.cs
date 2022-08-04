using Cysharp.Threading.Tasks;
using Nino.Serialization;
using System;
using System.Data;
using System.Linq;
using System.Reflection;
using System.Text;

namespace PostMainland
{
    public interface INetContext
    {
        UniTask SendMessage(IMessage message);
        UniTask SendAsync(byte[] data);
        UniTask DisconnectAsync();
    }
    public class ProtocalHelper
    {
        private static MethodInfo _serializerMI;
        private static MethodInfo _deserializerMI;
        private static CompressOption _compressOption = CompressOption.NoCompression;
        private static Encoding _encoding = Encoding.UTF8;

        static ProtocalHelper()
        {
            _serializerMI = typeof(Serializer).GetMethod("Serialize");
            _deserializerMI = typeof(Deserializer).GetMethod("Deserialize");
        }
        public static void Handle(INetContext context, Span<byte> buffer, Action<long, IResponse> respCallback)
        {
            PrintBytes("【收到的】", buffer);
            var (type, id, msgId, protocal) = DeserializeProtocal(buffer);
            Print($"{type} {id}  {msgId}");
            switch (type)
            {
                case ProtocalType.Message:
                    {
                        var handler = Services.Get<AssemblyCollection>().Get<ProtocalHandlerCollector>().GetMessageHandler(id);
                        handler.Handle(context, protocal as IMessage).Forget();
                    }
                    break;
                case ProtocalType.Request:
                    {
                        var handler = Services.Get<AssemblyCollection>().Get<ProtocalHandlerCollector>().GetRequestHandler(id);
                        ProtocalId respId = handler.GetResponseId();
                        Type respType = Services.Get<AssemblyCollection>().Get<ProtocalCollector>().GetProtocalTypeById(respId);
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
            BaseProtocal pack = new BaseProtocal();
            pack.Type = type;
            pack.Id = id;
            pack.MessageId = msgId;
            Type t = Services.Get<AssemblyCollection>().Get<ProtocalCollector>().GetProtocalTypeById(id);
            var mi = _serializerMI.MakeGenericMethod(t);
            byte[] bytes = (byte[])mi.Invoke(null, new object[] { protocal, _encoding, _compressOption });
            pack.Body = bytes;
            byte[] buffer = Serializer.Serialize(pack, _encoding, _compressOption);

            PrintBytes($"【{id}序列化结果】", buffer);
            return buffer;
        }
        private static (ProtocalType type, ProtocalId id, long msgId, IProtocal protocal) DeserializeProtocal(Span<byte> buffer)
        {
            BaseProtocal pack = Deserializer.Deserialize<BaseProtocal>(buffer.ToArray(), _encoding, _compressOption);
            Type t = Services.Get<AssemblyCollection>().Get<ProtocalCollector>().GetProtocalTypeById(pack.Id);
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

        private static void PrintBytes(string title, Span<byte> bytes)
        {
            string str = string.Join(',', bytes.ToArray());
            Print(title + str);
        }

        private static void Print(string str)
        {
#if NOT_UNITY
            Console.WriteLine(str);
#else
            UnityEngine.Debug.Log(str);
#endif
        }
    }
}