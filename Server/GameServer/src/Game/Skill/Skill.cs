using Cfg;
using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PostMainland
{
    public class Skill
    {
        public Unit Caster { get; }
        public int ConfigId { get; }
        public NumericComponent NumericComponent { get; set; }

        //TODO 配置

        public Skill(Unit caster, int configId)
        {
            Caster = caster;
            ConfigId = configId;
            NumericComponent = new NumericComponent();
        }
    }
}
