using Bright.Serialization;
using System;

namespace PostMainland
{
    public struct PacketParser
    {
        private readonly byte[] buffer;
        private int sizeBufferLength;

        public PacketParser(byte[] buffer)
        {
            sizeBufferLength = 4;
            this.buffer = buffer;
        }

        public bool Parse(out byte[] ret)
        {
            ret = null;
            if (buffer.Length < sizeBufferLength)
            {
                return false;
            }
            int packetSize = BitConverter.ToInt32(buffer, 0);
            if (buffer.Length < packetSize + 4)
            {
                return false;
            }
            ret = new byte[packetSize];
            Array.Copy(buffer, 4, ret, 0, packetSize);
            return true;
        }
    }
}