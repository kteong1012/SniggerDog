namespace SniggerDog
{
    public interface IService
    {
        bool Resolved { get; set; }

        void Start();

        void OnDestroy();
    }

    public interface IUpdateService : IService
    {
        void Update();
    }

    public interface ILateUpdateService : IService
    {
        void LateUpdate();
    }

    public interface IFixedUpdateService : IService
    {
        void FixedUpdate();
    }
}