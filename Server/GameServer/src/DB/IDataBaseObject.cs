using MongoDB.Bson.Serialization.Attributes;

namespace PostMainland
{
    public interface IDataBaseObject
    {
#pragma warning disable IDE1006
        long _id { get; set; }
    }
    [BsonSerializer]
    public class DataBaseObject : IDataBaseObject
    {
        public long _id { get; set; }
        public void WithId(long dbid)
        {
            _id = dbid;
        }
        public void GenerateId()
        {
            _id = DBIDGenerator.NextID();
        }
    }
}
