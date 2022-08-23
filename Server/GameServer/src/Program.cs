using System;

namespace PostMainland
{
    public class Program
    {
        static void Main()
        {
            Game game = new Game();
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