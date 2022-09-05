using MongoDB.Bson.Serialization.Attributes;

namespace PostMainland
{
    public interface IDataBaseObject
    {
        long Dbid { get; set; }
    }
    [BsonSerializer]
    public class DataBaseObject : IDataBaseObject
    {
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
