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
        C2S_Connect = 12,
        S2C_ConnectAck = 13,
        C2S_Disconnect = 14,
        S2C_Disconnect = 15,
    }
}