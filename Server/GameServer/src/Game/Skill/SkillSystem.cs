using Cfg;
using Leopotam.EcsLite;

namespace PostMainland
{
    public class SkillSystem : EcsSystem, IEcsRunSystem
    {
        public void Run(IEcsSystems systems)
        {
            var castSkillFilter = _world.Filter<AT_CastSkill>().End();
            foreach (var castSkillEntity in castSkillFilter)
            {
                ref var castSkill = ref _world.Get<AT_CastSkill>(castSkillEntity);
                var skill = TbSkill.Instance.Get(castSkill.SkillId);
                foreach (var target in castSkill.Targets)
                {
                    Log.Info($"{castSkill.Caster}对{target}施放了技能{skill.Name}");
                    foreach (var buff in skill.Buffs_Ref)
                    {
                        _world.NewEntityWith<AT_AttachBuff>(out _) = new AT_AttachBuff() { CasterEntity = castSkill.Caster, CfgId = buff.Id, TargetEntity = target };
                    }
                }
                _world.DelEntity(castSkillEntity);
            }
        }
    }
}
