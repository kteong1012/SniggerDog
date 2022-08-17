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
    /// byte            =>     Type         (1)
    /// uint            =>     Id           (4)
    /// long            =>     MessageId    (8)
    /// int             =>     Length       (4)
    /// uint * length   =>     Body         (n*4)
    /// byte[2]         =>     CRCCheckout  (2)
    /// </summary>

    public class RequestInfoHeaderHandlingAdapter : CustomFixedHeaderDataHandlingAdapter<RequestInfo>
    {
        public override int HeaderLength => RequestInfo.HeaderLength;

        public override bool CanSendRequestInfo => false;

        protected override RequestInfo GetInstance()
        {
            return new RequestInfo();
        }

        protected override void PreviewSend(IRequestInfo requestInfo, bool isAsync)
        {

        }
    }
    public class RequestInfo : IFixedHeaderRequestInfo
    {
        public static readonly int HeaderLength = sizeof(byte) + sizeof(uint) + sizeof(long) + sizeof(int);//1+4+8+4 = 17
        private ProtocalType _type;
        private ProtocalId _id;
        private long _msgId;
        private int _bodyLength;
        private byte[] _body;
        public ProtocalType Type => _type;
        public ProtocalId Id => _id;
        public long MessageId => _msgId;
        public int BodyLength => _bodyLength;
        public byte[] Body => _body;
        public static RequestInfo FromProtocal<T>(T protocal, long msgId) where T : IProtocal
        {
            ProtocalType type = ProtocalHelper.GetProtocalType(protocal);
            ProtocalId id = ProtocalHelper.GetProtocalId(protocal);
            byte[] body = ProtocalHelper.SerializeProtocal(protocal);
            RequestInfo requestInfo = new RequestInfo();
            requestInfo._type = type;
            requestInfo._id = id;
            requestInfo._msgId = msgId;
            requestInfo._bodyLength = body.Length + 2;
            requestInfo._body = body;
            return requestInfo;
        }
        public byte[] ToBytes()
        {
            Writer writer = new Writer();
            writer.Init(ProtocalHelper.Encoding, ProtocalHelper.CompressOption);
            writer.Write((byte)Type);
            writer.Write((uint)Id);
            writer.Write(MessageId);
            writer.Write(BodyLength);
            writer.Write(Body);
            writer.Write(Crc.Crc16(Body));
            return writer.ToBytes();
        }
        public bool OnParsingBody(byte[] body)
        {
            if (body.Length == this._bodyLength)
            {
                Reader reader = new Reader();
                reader.Init(body, body.Length, ProtocalHelper.Encoding, ProtocalHelper.CompressOption);
                _body = reader.ReadBytes(_bodyLength - 2);
                byte[] crc = reader.ReadBytes(2);
                byte[] crc_checker = Crc.Crc16(Body);
                if (Enumerable.SequenceEqual(crc, crc_checker))
                {
                    return true;
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
            Reader reader = new Reader();
            reader.Init(header, header.Length, Encoding.UTF8, CompressOption.NoCompression);
            _type = (ProtocalType)reader.ReadByte();
            _id = (ProtocalId)reader.ReadUInt32();
            _msgId = reader.ReadInt64();
            _bodyLength = reader.ReadInt32() + 2;
            return true;
        }
    }
}