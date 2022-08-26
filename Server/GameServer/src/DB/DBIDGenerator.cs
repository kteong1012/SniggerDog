using TouchSocket.Core;

namespace PostMainland
{
    public class DBIDGenerator
    {
        private static SnowflakeIDGenerator _generator = new SnowflakeIDGenerator(4);
        public static long NextID()
        {
            return _generator.NextID();
        }
    }
}
