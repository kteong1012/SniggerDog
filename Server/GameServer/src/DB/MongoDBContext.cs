using Cysharp.Threading.Tasks;
using MongoDB.Driver;
using System;
using System.Collections.Generic;
using System.Linq.Expressions;

namespace PostMainland
{
    public class MongoDBContext
    {
        private MongoClient _client;
        private IMongoDatabase _db;

        public MongoDBContext(string connectStr, string dbName)
        {
            _client = new MongoClient(connectStr);
            _db = _client.GetDatabase(dbName);
        }

        public async UniTask<T> Query<T>(long dbid, string name = null) where T : IDataBaseObject
        {
            var cursor = await GetCollection<T>(name).FindAsync(x => x.Dbid == dbid);
            return await cursor.FirstOrDefaultAsync();
        }
        public async UniTask<List<T>> QueryMany<T>(Expression<Func<T, bool>> filter, string name = null)
        where T : IDataBaseObject
        {
            var cursor = await GetCollection<T>(name).FindAsync(filter);
            return await cursor.ToListAsync();
        }
        public async UniTask<T> Query<T>(Expression<Func<T, bool>> filter, string name = null)
        where T : IDataBaseObject
        {
            var cursor = await GetCollection<T>(name).FindAsync(filter);
            return await cursor.FirstOrDefaultAsync();
        }

        public async UniTask Save<T>(T obj, string name = null) where T : IDataBaseObject
        {
            var collection = GetCollection<T>(name);
            await collection.ReplaceOneAsync(d => d.Dbid == obj.Dbid, obj, new ReplaceOptions() { IsUpsert = true });
        }

        private IMongoCollection<T> GetCollection<T>(string name)
        {
            if (name.IsNullOrEmpty())
            {
                name = typeof(T).Name;
            }
            return _db.GetCollection<T>(name);
        }

    }
}
