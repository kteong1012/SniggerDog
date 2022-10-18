using Cfg;
using Leopotam.EcsLite;

namespace PostMainland
{
    public class NumericSystem : EcsSystem,IEcsDestroySystem
    {

        protected override void OnInit(IEcsSystems systems)
        {
            var setCommandFilter = _world.Filter<Numeric>().Inc<SetNumericDataEvent>().End();
            _gameEvent.AddEvent<SetNumericDataEvent>(SetNumeric);
        }
        public void Destroy(IEcsSystems systems)
        {
            _gameEvent.RemoveEvent<SetNumericDataEvent>(SetNumeric);
        }
        private void SetNumeric(SetNumericDataEvent e)
        {
            var pool = _world.GetPool<NumericComponent>();
            var numericId = e.NumericId;
            if (numericId == Numeric.None)
            {
                Log.Error($"添加numeric失败,data的NumericId为None，{numericId}");
                return;
            }
            ref var numericComponent = ref pool.Get(e.Entity);
            numericComponent.Dict[numericId] = e.Data;
        }
    }
}