using Bright.Serialization;
using Cfg;
using Cysharp.Threading.Tasks;
using System.IO;

namespace PostMainland
{
    public class Luban : IConfigLoader
    {
        public Luban()
        {
            LoadAll();
        }
        public ByteBuf DataLoader(string path)
        {
            var bytes = File.ReadAllBytes($"../ConfigBin/Datas/{path}.bytes");
            return new ByteBuf(bytes);
        }

        public ByteBuf IndexLoader(string path)
        {
            var bytes = File.ReadAllBytes($"../ConfigBin/Indexes/{path}.bytes");
            return new ByteBuf(bytes);
        }

        public void LoadAll()
        {
            new Tables(IndexLoader, DataLoader);
        }
    }
}
