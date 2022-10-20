using Cfg;
using Leopotam.EcsLite;
using System.Collections.Generic;

namespace PostMainland
{
    public struct SkillsComponent : IEcsAutoReset<SkillsComponent>
    {
        public List<int> Skills { get; set; }

        public void AutoReset(ref SkillsComponent c)
        {
            c.Skills = new List<int>();
        }
    }
}
