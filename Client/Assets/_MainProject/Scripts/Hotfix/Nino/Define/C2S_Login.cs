using Nino.Serialization;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[NinoSerialize]
public partial class C2S_Login
{
    [NinoMember(1)]
    public string Account;
    [NinoMember(2)]
    public string Password;
}
