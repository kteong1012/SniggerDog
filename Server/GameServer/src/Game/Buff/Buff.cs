using Cfg;
using Leopotam.EcsLite;

namespace PostMainland
{
    public class Buff
    {
        public EC_Buff Config { get; }
        public int CfgId { get; }
        public int Layer { get; private set; }
        public Buff(int buffId)
        {
            CfgId = buffId;
            Config = TbBuff.Instance.Get(buffId);
        }
        public (bool replaceTime, int addTimerMs) AddUp(int times = 1)
        {
            bool replaceTime = false;
            int timerMs = 0;
            switch (Config.AddType)
            {
                case BuffAddType.Replace:
                    replaceTime = true;
                    timerMs = Config.DurationMs;
                    Layer = Config.AddLayer;
                    break;
                case BuffAddType.AddTime:
                    replaceTime = false;
                    timerMs = Config.DurationMs * times;
                    break;
                case BuffAddType.AddLayer1:
                    replaceTime = true;
                    timerMs = Config.DurationMs;
                    Layer += Config.AddLayer * times;
                    break;
                case BuffAddType.AddLayer2:
                    replaceTime = false;
                    timerMs = Config.DurationMs * times;
                    Layer += Config.AddLayer * times;
                    break;
                default:
                    break;
            }
            return (replaceTime, timerMs);
        }
    }
}
