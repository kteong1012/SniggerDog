using Bright.Serialization;
using Cfg;
using Cysharp.Threading.Tasks;
using System.IO;

namespace PostMainland
{
    public class ConfigLoader : IConfigLoader
    {
        public ConfigLoader()
        {
            LoadAll();
        }
        public ByteBuf DataLoader(string path)
        {
            var bytes = File.ReadAllBytes($"../Server/ConfigBin/Data/{path}.bytes");
            return new ByteBuf(bytes);
        }

        public ByteBuf IndexLoader(string path)
        {
            var bytes = File.ReadAllBytes($"../Server/ConfigBin/Index/{path}.bytes");
            return new ByteBuf(bytes);
        }

        public void LoadAll()
        {
            new Tables(IndexLoader, DataLoader);
        }
    }
}
