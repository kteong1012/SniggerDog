using System.Collections.Generic;

namespace PostMainland
{
    public interface IDBContext
    {
        void Save(IDataBaseObject dataBaseObject);
        List<T> Query<T>(long id);
    }
}
