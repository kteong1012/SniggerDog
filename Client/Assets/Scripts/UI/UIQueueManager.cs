using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace PostMainland
{
    public enum UIQueuePriority
    {
        N3 = -3,
        N2 = -2,
        N1 = -1,
        P0 = 0,
        P1 = 1,
        P2 = 2,
        P3 = 3,
    }
    public class UIQueueManager
    {
        private static UIQueueManager _ins = new UIQueueManager();
        public static UIQueueManager Instance => _ins;
        private Dictionary<UIQueuePriority, Queue<UIQueueInfo>> _queues = new Dictionary<UIQueuePriority, Queue<UIQueueInfo>>();
        IEnumerable<UIQueuePriority> _enums;
        private UIQueueManager()
        {
            UIQueuePriority[] temp = (UIQueuePriority[])Enum.GetValues(typeof(UIQueuePriority));
            _enums = temp.OrderByDescending(x => x);
            StartUpdate().Forget();
        }

        private async UniTask StartUpdate()
        {
            while (true)
            {
                try
                {
                    foreach (var priority in _enums)
                    {
                        if (_queues.TryGetValue(priority, out var queue))
                        {
                            var info = queue.SafelyDequeue();
                            if (info != null)
                            {
                                var ui = await FGUI.Instance.OpenAsyncWithParams(info.type, info.layer, null, false, info.args);
                                await ui.WaitClose();
                                break;
                            }
                        }
                    }
                }
                catch (Exception e)
                {
                    Log.Error(null, e);
                }

                await UniTask.Yield();
            }
        }
        /// <summary>
        /// 
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="priority">优先级从高到低依次显示</param>
        /// <param name="args"></param>
        public void DequeueUI<T>(FGUILayer layer = FGUILayer.Panel, UIQueuePriority priority = UIQueuePriority.P0, IWrapperParams args = null) where T : class
        {
            if (!_queues.TryGetValue(priority, out var queue))
            {
                queue = new Queue<UIQueueInfo>();
                _queues[priority] = queue;
            }
            var info = new UIQueueInfo()
            {
                type = typeof(T),
                layer = layer,
                args = args
            };
            queue.Enqueue(info);
        }

        private class UIQueueInfo
        {
            public Type type;
            public FGUILayer layer;
            public IWrapperParams args;
        }
    }
}
