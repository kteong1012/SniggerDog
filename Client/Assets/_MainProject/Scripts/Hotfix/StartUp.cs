using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PostMainland
{

    public class StartUp : MonoBehaviour
    {
        void Awake()
        {
            AssemblyCollection.Ins.RegisterCollector(ProtocalCollector.Ins);
            AssemblyCollection.Ins.RegisterCollector(ProtocalHandlerCollector.Ins.LoadAssemblies(this.GetType()));
        }

        public async void TestConnect()
        {
            await Network.Ins.Connect(ServerConfig.Host, ServerConfig.Port);
        }

        public void TestSendMessage()
        {

        }
    }

}