using Cysharp.Threading.Tasks;
using UnityEngine;

namespace PostMainland
{

    public class Game
#if UNITY_EDITOR 
        : MonoBehaviour
#endif
    {
        public void Start()
        {
            Services.Add(new Network());
            Services.AddWithouInit(new AssemblyCollection());


            var asc = Services.Get<AssemblyCollection>();
            asc.Add(new ProtocalCollector(), typeof(ProtocalAssemblyPivotClass).Assembly);
            asc.Add(new ProtocalHandlerCollector(), this.GetType().Assembly);
        }

        public void Update()
        {
        }

        public void Destory()
        {

        }

        public void T1()
        {
            Services.Get<Network>().Connect().Forget();

        }
        public async void T2()
        {
            var ack = await Services.Get<Network>().RequestAsync<SC_LoginAck>(new CS_Login() { Account = "baoyu" });
            Debug.Log(ack.Name);

        }
        public async void T3()
        {
            var ack = await Services.Get<Network>().RequestAsync<S2C_DisconnectAck>(new C2S_Disconnect());
            Debug.Log(ack.Message);
            Services.Get<Network>().Disconnect();
        }
    }

}