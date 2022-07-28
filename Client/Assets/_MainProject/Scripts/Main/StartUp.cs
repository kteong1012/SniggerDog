using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PostMainland
{

    public class StartUp : MonoBehaviour
    {
        private NetClient _netClient;

        void Start()
        {
            _netClient = new NetClient();
            _netClient.Connect(ServerConfig.Host, ServerConfig.Port);
        }

        public void Send()
        {
            _netClient.SendString("≤‚ ‘");
        }
    }

}