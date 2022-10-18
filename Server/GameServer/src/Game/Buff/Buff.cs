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
            Reset();
        }
        public void Reset()
        {
            Layer = Config.AddLayer;
        }
        public int AddUp(int times = 1)
        {
            int timerMs = 0;
            switch (Config.AddType)
            {
                case BuffAddType.Replace:
                    Reset();
                    break;
                case BuffAddType.AddTime:
                    timerMs = Config.DurationMs * times;
                    break;
                case BuffAddType.AddLayer1:
                    Layer += Config.AddLayer * times;
                    break;
                case BuffAddType.AddLayer2:
                    timerMs = Config.DurationMs * times;
                    Layer += Config.AddLayer * times;
                    break;
                default:
                    break;
            }
            return timerMs;
        }
    }
}
