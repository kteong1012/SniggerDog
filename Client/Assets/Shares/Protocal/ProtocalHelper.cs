using Cysharp.Threading.Tasks;
using Nino.Serialization;
using System;

namespace PostMainland
{
    public class ProtocalHelper
    {

        public async UniTask Handle(byte[] buffer)
        {
            var (type, id, protocal) = GetProtocal(buffer);
        }

        private (ProtocalType type, ProtocalId id, IProtocal protocal) GetProtocal(Span<byte> bytes)
        {
            byte typeUINT8 = bytes[0];
            ProtocalType pType = (ProtocalType)typeUINT8;
            uint idUINT32 = BitConverter.ToUInt32(bytes.Slice(1, 5));
            ProtocalId id = (ProtocalId)idUINT32;
            Type type = ProtocalCollector.Ins.GetProtocalTypeById(id);
            IProtocal protocal = Desrialize(Activator.CreateInstance(type) as IProtocal, bytes.Slice(5));
            return (pType, id, protocal);
        }
        private T Desrialize<T>(T protocal, Span<byte> bytes) where T : IProtocal
        {
            return Deserializer.Deserialize<T>(bytes.ToArray());
        }
    }
}