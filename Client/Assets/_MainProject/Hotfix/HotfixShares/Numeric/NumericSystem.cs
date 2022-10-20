using Cfg;
using Leopotam.EcsLite;

namespace PostMainland
{
    public class NumericSystem : EcsSystem, IEcsRunSystem
    {
        public void Run(IEcsSystems systems)
        {
            RunSetNumeric();
        }
        private void RunSetNumeric()
        {
            var setNumericFilter = _world.Filter<AT_SetNumericData>().End();
            foreach (var setEntity in setNumericFilter)
            {
                ref var set = ref _world.Get<AT_SetNumericData>(setEntity);
                var copy = set;
                _world.DelEntity(setEntity);
                var pool = _world.GetPool<NumericComponent>();
                var numericId = copy.NumericId;
                if (numericId == Numeric.None)
                {
                    Log.Error($"添加numeric失败,data的NumericId为None，{numericId}");
                    return;
                }
                ref var numericComponent = ref pool.Get(copy.Entity);
                numericComponent.Dict[numericId] = copy.Data;
            }
        }
    }
}