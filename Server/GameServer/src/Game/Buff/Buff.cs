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
        public int GetDurationMs(int times = 1)
        {
            return Config.DurationMs * times;
        }
    }
}
