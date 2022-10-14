using Cfg;
using Cysharp.Threading.Tasks;
using Leopotam.EcsLite;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PostMainland
{
    public struct SkillComponent : IEcsAutoReset<SkillComponent>
    {
        public int ConfigId { get; set; }

        public void AutoReset(ref SkillComponent c)
        {
            //TODO
        }
    }
    public struct SkillCasterCommand
    {
        public List<Unit> Targets { get; set; }
    }
}
