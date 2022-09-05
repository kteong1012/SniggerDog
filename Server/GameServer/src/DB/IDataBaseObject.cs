using MongoDB.Bson.Serialization.Attributes;

namespace PostMainland
{
    public interface IDataBaseObject
    {
#pragma warning disable IDE1006
        long Dbid { get; set; }
    }
    [BsonSerializer]
    public class DataBaseObject : IDataBaseObject
    {
        [BsonId]
        public long Dbid { get; set; }
        public void WithId(long dbid)
        {
            Dbid = dbid;
        }
        public void GenerateId()
        {
            Dbid = DBIDGenerator.NextID();
        }
    }
}
