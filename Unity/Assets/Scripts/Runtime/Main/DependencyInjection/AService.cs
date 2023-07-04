using UnityEngine;

namespace SniggerDog
{
    public abstract class AService : IService
    {
        public bool Resolved
        {
            get;
            set;
        }
        public AService()
        {

        }
        public virtual void Start()
        {
        }
        public virtual void OnDestroy()
        {
        }

    }
}