namespace PostMainland
{
    public class Program
    {
        static void Main()
        {
            ServerTcpService service = new ServerTcpService();
            service.Start();

            while (true)
            {
                var lineStr = Console.ReadLine();
                if (lineStr == "Close")
                {
                    break;
                }
            }
        }
    }
}