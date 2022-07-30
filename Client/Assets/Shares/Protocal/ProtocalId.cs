namespace PostMainland
{
    public enum ProtocalId : uint
    {
        InvalidId = 0,
        //通用
        SC_Notify = 1,

        //登陆
        CS_Login = 10,
        SC_LoginAck = 11,
        C2S_Disconnect = 12,
        S2C_Disconnect = 13,
    }
}