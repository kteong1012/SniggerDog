using System;

namespace PostMainland
{
    public abstract class Singleton<T> where T : Singleton<T>, new()
    {
        private static T _instance;
        public static T Ins
        {
            get
            {
                if (_instance == null)
                {
                    _instance = new T();
                    _instance.Initialize();
                }
                return _instance;
            }
        }

        protected virtual void Initialize() { }
    }
}
