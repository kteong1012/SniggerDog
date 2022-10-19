//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;
using System.Collections.Generic;
using SimpleJSON;



namespace Cfg
{ 

public sealed partial class TbDatabase
{
    private readonly Dictionary<string, Database> _dataMap;
    private readonly List<Database> _dataList;
    
    public TbDatabase(JSONNode _json)
    {
        _dataMap = new Dictionary<string, Database>();
        _dataList = new List<Database>();
        
        foreach(JSONNode _row in _json.Children)
        {
            var _v = Database.DeserializeDatabase(_row);
            _dataList.Add(_v);
            _dataMap.Add(_v.Name, _v);
        }
        PostInit();
    }

    public Dictionary<string, Database> DataMap => _dataMap;
    public List<Database> DataList => _dataList;

    public Database GetOrDefault(string key) => _dataMap.TryGetValue(key, out var v) ? v : null;
    public Database Get(string key) => _dataMap[key];
    public Database this[string key] => _dataMap[key];

    public void Resolve(Dictionary<string, object> _tables)
    {
        foreach(var v in _dataList)
        {
            v.Resolve(_tables);
        }
        PostResolve();
    }

    public void TranslateText(System.Func<string, string, string> translator)
    {
        foreach(var v in _dataList)
        {
            v.TranslateText(translator);
        }
    }
    
    
    partial void PostInit();
    partial void PostResolve();
}

}