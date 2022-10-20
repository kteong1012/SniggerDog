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

public sealed partial class TbBuff
{
    private readonly Dictionary<int, EC_Buff> _dataMap;
    private readonly List<EC_Buff> _dataList;
    
    public TbBuff(JSONNode _json)
    {
        _dataMap = new Dictionary<int, EC_Buff>();
        _dataList = new List<EC_Buff>();
        
        foreach(JSONNode _row in _json.Children)
        {
            var _v = EC_Buff.DeserializeEC_Buff(_row);
            _dataList.Add(_v);
            _dataMap.Add(_v.Id, _v);
        }
        PostInit();
    }

    public Dictionary<int, EC_Buff> DataMap => _dataMap;
    public List<EC_Buff> DataList => _dataList;

    public EC_Buff GetOrDefault(int key) => _dataMap.TryGetValue(key, out var v) ? v : null;
    public EC_Buff Get(int key) => _dataMap[key];
    public EC_Buff this[int key] => _dataMap[key];

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