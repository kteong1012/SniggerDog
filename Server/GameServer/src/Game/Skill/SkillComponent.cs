using Leopotam.EcsLite;
using System.Collections.Generic;

namespace PostMainland
{
    public struct SkillsComponent : IEcsAutoReset<SkillsComponent>
    {
        public int ConfigId { get; set; }

        public void AutoReset(ref SkillsComponent c)
        {
            //TODO
        }
    }
    public struct SkillCasterCommand
    {
        public List<Unit> Targets { get; set; }
    }
}
