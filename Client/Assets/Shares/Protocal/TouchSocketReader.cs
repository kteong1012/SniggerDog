//using Nino.Serialization;
//using System;
//using System.Linq;
//using TouchSocket.Core;

//namespace PostMainland
//{
//    public class TouchSocketReader:IDisposable
//    {
//        private byte[] _buffer;
//        public int ReaderIndex;
//        public TouchSocketReader(byte[] buffer)
//        {
//            this._buffer = buffer;
//            ReaderIndex = 0;
//        }

//        public byte ReadByte()
//        {
//            CheckSize(ReaderIndex, sizeof(byte));
//            byte ret = _buffer[ReaderIndex];
//            ReaderIndex += sizeof(byte);
//            return ret;
//        }
//        public uint ReadUint32()
//        {
//            CheckSize(ReaderIndex,sizeof(uint));
//            uint ret = TouchSocketBitConverter.BigEndian.ToUInt32(_buffer, ReaderIndex);
//            ReaderIndex += sizeof(uint);
//            return ret;
//        }
//        public int ReadInt32()
//        {
//            CheckSize(ReaderIndex, sizeof(int));
//            int ret = TouchSocketBitConverter.BigEndian.ToInt32(_buffer, ReaderIndex);
//            ReaderIndex += sizeof(int);
//            return ret;
//        }
//        public byte[] ReadBytes(int length)
//        {
//            CheckSize(ReaderIndex, length);
//            byte[] ret = _buffer.Skip(ReaderIndex).Take(length).ToArray();
//            Reader reader = new Reader();
//            reader.Init(this._buffer,)
//        }

//        private bool CheckSize(int offset, int size)
//        {
//            if (_buffer.Length < offset + size)
//            {
//                throw new Exception("read exception");
//            }
//            return true;
//        }

//        public void Dispose()
//        {
//            this._buffer = null;
//        }
//    }
//}