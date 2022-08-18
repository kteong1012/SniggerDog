using Nino.Serialization;
using System;
using System.Collections.Generic;
using System.Linq;
using TouchSocket.Core;

namespace PostMainland
{
    public class BufferWriter : IDisposable
    {
        private List<byte> _buffer = new List<byte>();
        public int WriterIndex => _buffer.Count;
        public byte[] Buffer => _buffer.ToArray();
        public void Write(int i)
        {
            _buffer.AddRange(TouchSocketBitConverter.BigEndian.GetBytes(i));
        }
        public void Write(uint i)
        {
            _buffer.AddRange(TouchSocketBitConverter.BigEndian.GetBytes(i));
        }
        public void Write(bool i)
        {
            _buffer.AddRange(TouchSocketBitConverter.BigEndian.GetBytes(i));
        }
        public void Write(long i)
        {
            _buffer.AddRange(TouchSocketBitConverter.BigEndian.GetBytes(i));
        }
        public void Write(byte i)
        {
            _buffer.Add(i);
        }
        public void WriteBuffer(byte[] buffer)
        {
            _buffer.AddRange(buffer);
        }
        public void Dispose()
        {
            _buffer.Clear();
            _buffer = null;
        }
    }
    public class BufferReader : IDisposable
    {
        private byte[] _buffer;
        public int ReaderIndex;
        public BufferReader(byte[] buffer)
        {
            this._buffer = buffer;
            ReaderIndex = 0;
        }

        public byte ReadByte()
        {
            CheckSize(ReaderIndex, sizeof(byte));
            byte ret = _buffer[ReaderIndex];
            ReaderIndex += sizeof(byte);
            return ret;
        }
        public uint ReadUInt32()
        {
            CheckSize(ReaderIndex, sizeof(uint));
            uint ret = TouchSocketBitConverter.BigEndian.ToUInt32(_buffer, ReaderIndex);
            ReaderIndex += sizeof(uint);
            return ret;
        }
        public long ReadInt64()
        {
            CheckSize(ReaderIndex, sizeof(long));
            long ret = TouchSocketBitConverter.BigEndian.ToInt64(_buffer, ReaderIndex);
            ReaderIndex += sizeof(long);
            return ret;
        }
        public int ReadInt32()
        {
            CheckSize(ReaderIndex, sizeof(int));
            int ret = TouchSocketBitConverter.BigEndian.ToInt32(_buffer, ReaderIndex);
            ReaderIndex += sizeof(int);
            return ret;
        }
        public byte[] ReadBuffer(int length)
        {
            CheckSize(ReaderIndex, length);
            byte[] ret = _buffer.Skip(ReaderIndex).Take(length).ToArray();
            ReaderIndex += length;
            return ret;
        }

        private bool CheckSize(int offset, int size)
        {
            if (_buffer.Length < offset + size)
            {
                throw new Exception("read exception");
            }
            return true;
        }

        public void Dispose()
        {
            this._buffer = null;
        }
    }
}