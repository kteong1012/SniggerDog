using System;

namespace PostMainland
{
    public class Program
    {
        static void Main()
        {
            StartUp game = new StartUp();
            game.Start();
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