namespace JimboA.EcsLite.ECB
{
    internal interface IEcbPool
    {
        void AddToSourceEntity(int bufferEntity, int sourceEntity);
        void SetToSourceEntity(int bufferEntity, int sourceEntity);
        void SetOrAddToSourceEntity(int bufferEntity, int sourceEntity);
        void Del(int sourceEntity);
    }
}