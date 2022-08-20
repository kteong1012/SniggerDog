namespace PostMainland
{
    public class TcpClientServiceManager : DictionaryCollection<string, TcpClientService>
    {
        private static TcpClientServiceManager _instance = new TcpClientServiceManager();
        public static TcpClientServiceManager Instance => _instance;
    }
}
