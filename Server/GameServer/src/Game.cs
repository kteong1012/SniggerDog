using Cfg;
using System;
using System.IO;
using System.Threading;
using TouchSocket.Core.Dependency;
using TouchSocket.Core.Log;

namespace PostMainland
{
    public class Game
    {
        public void Start()
        {
        }

        private void LateUpdate()
        {
        }

        private void Update()
        {
            TimeInfo.Update();
            ThreadSynchronizationContext.Update();
        }
    }
}