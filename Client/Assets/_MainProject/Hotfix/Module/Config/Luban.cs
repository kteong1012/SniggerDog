using Bright.Serialization;
using Cfg;
using UnityEngine;

namespace PostMainland
{
    public class Luban : IConfigLoader
    {
        public Luban()
        {
            LoadAll();
        }
        public void LoadAll()
        {
            new Tables(IndexLoader, DataLoader);
        }

        public ByteBuf DataLoader(string path)
        {
            var bytes = YooAssetsManager.Instance.Load<TextAsset>($"Datas_{path}").bytes;
            return new ByteBuf(bytes);
        }

        public ByteBuf IndexLoader(string path)
        {
            var bytes = YooAssetsManager.Instance.Load<TextAsset>($"Indexes_{path}").bytes;
            return new ByteBuf(bytes);
        }

    }
}
