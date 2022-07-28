using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

namespace PostMainland
{
    public class ServerConfig
    {
        public static string Host => "localhost";
        public static int Port => 40001;
    }
    public class NetClient
    {
        public bool IsConnected { get; private set; }


        private TcpClient _tcpClient;
        private NetworkStream _stream;
        private byte[] _buffer = new byte[8192];
        public async void Connect(string host, int port)
        {
            if (IsConnected)
            {
                return;
            }

            _tcpClient = new TcpClient();
            await _tcpClient.ConnectAsync(host, port);
            _stream = _tcpClient.GetStream();
            IsConnected = true;
        }
        public async void SendString(string message)
        {
            byte[] bytes = Encoding.UTF8.GetBytes(message);
            await _stream.WriteAsync(bytes, 0, bytes.Length);
            int length = await _stream.ReadAsync(_buffer, 0, _buffer.Length);
            if (length > 0)
            {
                string str = Encoding.UTF8.GetString(_buffer, 0, length);
                Debug.Log(str);
            }
        }
    }

}