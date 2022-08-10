using Cysharp.Threading.Tasks;
using System.Threading;
using UnityEngine;

namespace PostMainland
{

    public class Game
    {
        public void Start()
        {
            SynchronizationContext.SetSynchronizationContext(SynchronizationContext.Current);
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
    }

}