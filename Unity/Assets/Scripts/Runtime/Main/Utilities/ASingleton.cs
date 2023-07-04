namespace SniggerDog
{
    public abstract class ASingleton<T> where T : ASingleton<T>, new()
    {
        private static object _lockObj = new object();
        private static T _instance;

        public static T Instance
        {
            get
            {
                lock (_lockObj)
                {
                    if (_instance == null)
                    {
                        _instance = new T();
                    }
                }
                return _instance;
            }
        }
    }
}