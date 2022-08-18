namespace PostMainland
{
    public class ClientServiceManager : DictionaryCollection<string, ClientTcpService>
    {
        private static ClientServiceManager _instance = new ClientServiceManager();
        public static ClientServiceManager Instance => _instance;
    }
}
