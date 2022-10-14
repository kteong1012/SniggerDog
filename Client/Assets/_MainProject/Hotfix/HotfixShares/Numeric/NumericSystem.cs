using Cfg;
using Leopotam.EcsLite;

namespace PostMainland
{
    public class NumericSystem : EcsSystem
    {

        protected override void OnInit(IEcsSystems systems)
        {
            var setCommandFilter = _world.Filter<Numeric>().Inc<SetNumericDataCommand>().End();
            var delCommandFilter = _world.Filter<Numeric>().Inc<DelNumericDataCommand>().End();
            var numericComponentPool = _world.GetPool<NumericComponent>();
            var setCommandPool = _world.GetPool<SetNumericDataCommand>();
            var delCommandPool = _world.GetPool<DelNumericDataCommand>();
            setCommandFilter.AddEventListener(new SetNumericDataCommandilterEvenet(numericComponentPool, setCommandPool));
            delCommandFilter.AddEventListener(new DelNumericDataCommandilterEvenet(numericComponentPool, delCommandPool));
        }
    }
    public class SetNumericDataCommandilterEvenet : IEcsFilterEventListener
    {
        private readonly EcsPool<NumericComponent> _numericPool;
        private readonly EcsPool<SetNumericDataCommand> _commandPool;

        public SetNumericDataCommandilterEvenet(EcsPool<NumericComponent> numericPool, EcsPool<SetNumericDataCommand> commandPool)
        {
            _numericPool = numericPool;
            _commandPool = commandPool;
        }
        public void OnEntityAdded(int entity)
        {
            var setComponent = _commandPool.GetAndDel(entity);
            while (setComponent.Commands.Count > 0)
            {
                var command = setComponent.Commands.SafelyDequeue();
                var numericId = command.NumericId;
                if (numericId == Numeric.None)
                {
                    Log.Error($"添加numeric失败,data的NumericId为None，{numericId}");
                    continue;
                }
                ref var numericComponent = ref _numericPool.Get(entity);
                numericComponent.Dict[numericId] = command.Data;
            }
        }

        public void OnEntityRemoved(int entity)
        {
        }
    }
    public class DelNumericDataCommandilterEvenet : IEcsFilterEventListener
    {
        private readonly EcsPool<NumericComponent> _numericPool;
        private readonly EcsPool<DelNumericDataCommand> _commandPool;

        public DelNumericDataCommandilterEvenet(EcsPool<NumericComponent> numericPool, EcsPool<DelNumericDataCommand> commandPool)
        {
            _numericPool = numericPool;
            _commandPool = commandPool;
        }
        public void OnEntityAdded(int entity)
        {
            var delComponent = _commandPool.GetAndDel(entity);
            while (delComponent.Commands.Count > 0)
            {
                var numericId = delComponent.Commands.SafelyDequeue();
                if (numericId == Numeric.None)
                {
                    Log.Error($"添加numeric失败,data的NumericId为None，{numericId}");
                    continue;
                }
                ref var numericComponent = ref _numericPool.Get(entity);
                numericComponent.Dict.SafelyRemove(numericId);
            }
        }

        public void OnEntityRemoved(int entity)
        {
        }
    }
}