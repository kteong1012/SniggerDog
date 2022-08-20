using Bright.Serialization;
using Nino.Serialization;
using System;
using System.Linq;
using System.Text;
using TouchSocket.Core;
using TouchSocket.Core.Data;
using TouchSocket.Sockets;

namespace PostMainland
{
    /// <summary>
    /// byte            =>      UseCrc16<<7 | Type      (1)
    /// uint            =>      Id                      (4)
    /// int             =>      Length                  (4)
    /// uint * length   =>      Body                    (n*4)
    /// byte[2]         =>      CRCCheckout             (2)
    /// </summary>

    public class ProtocalRequestHeaderHandlingAdapter : CustomFixedHeaderDataHandlingAdapter<ProtocalRequest>
    {
        public override int HeaderLength => ProtocalRequest.HeaderLength;

        public override bool CanSendRequestInfo => false;

        protected override ProtocalRequest GetInstance()
        {
            return new ProtocalRequest();
        }

        protected override void PreviewSend(IRequestInfo requestInfo, bool isAsync)
        {

        }
    }
    public class ProtocalRequest : IFixedHeaderRequestInfo
    {
        public static readonly int HeaderLength = sizeof(byte) + sizeof(uint) + sizeof(int);//1+8+4+4 = 17
        private ProtocalType _type;
        private bool _useCrc16;
        private ProtocalId _id;
        private int _bodyLength;
        private byte[] _body;
        public ProtocalType Type => _type;
        public bool UseCrc16 => _useCrc16;
        public ProtocalId Id => _id;
        public int BodyLength => _bodyLength;
        public byte[] Body => _body;
        public static ProtocalRequest FromProtocal<T>(T protocal, bool useCrc16) where T : IProtocal
        {
            Type t = typeof(T);
            ProtocalType type = ProtocalHelper.GetProtocalType(protocal);
            ProtocalId id = ProtocalHelper.GetProtocalId(protocal);
            byte[] body = ProtocalHelper.SerializeProtocal<T>(protocal);
            ProtocalRequest requestInfo = new ProtocalRequest();
            requestInfo._type = type;
            requestInfo._useCrc16 = useCrc16;
            requestInfo._id = id;
            requestInfo._bodyLength = body.Length;
            if (useCrc16)
            {
                requestInfo._bodyLength += 2;
            }
            requestInfo._body = body;
            return requestInfo;
        }
        public byte[] ToBytes()
        {
            using (BufferWriter writer = new BufferWriter())
            {
                writer.Write(ToFirstByte(Type, UseCrc16));
                writer.Write((uint)Id);
                writer.Write(BodyLength);
                writer.WriteBuffer(Body);
                if (UseCrc16)
                {
                    writer.WriteBuffer(Crc.Crc16(Body));
                }
                return writer.Buffer;
            }
        }
        public bool OnParsingBody(byte[] body)
        {
            if (body.Length == this._bodyLength)
            {
                using (BufferReader reader = new BufferReader(body))
                {
                    if (_useCrc16)
                    {
                        _body = reader.ReadBuffer(_bodyLength - 2);
                        byte[] crc = reader.ReadBuffer(2);
                        byte[] crc_checker = Crc.Crc16(Body);
                        if (Enumerable.SequenceEqual(crc, crc_checker))
                        {
                            return true;
                        }
                    }
                    else
                    {
                        _body = reader.ReadBuffer(BodyLength);
                        return true;
                    }
                }
            }
            return false;
        }

        public bool OnParsingHeader(byte[] header)
        {
            if (header.Length != HeaderLength)
            {
                return false;
            }
            using (BufferReader reader = new BufferReader(header))
            {
                (_type, _useCrc16) = FromFirstByte(reader.ReadByte());
                _id = (ProtocalId)reader.ReadUInt32();
                int bodyLength = reader.ReadInt32();
                if (UseCrc16)
                {
                    _bodyLength = bodyLength + 2;
                }
                else
                {
                    _bodyLength = bodyLength;
                }
            }
            return true;
        }
        private byte ToFirstByte(ProtocalType type, bool useCrc16)
        {
            byte useCrc16Byte = (byte)(useCrc16 ? 1 : 0);
            return (byte)((byte)type | (useCrc16Byte << 7));
        }
        private (ProtocalType type, bool useCrc) FromFirstByte(byte b)
        {
            byte typeB = (byte)(b & 0b01111111);
            bool useCrc16 = (b & 0b10000000) != 0;
            return ((ProtocalType)typeB, useCrc16);
        }
    }
}