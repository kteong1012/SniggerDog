// See https://aka.ms/new-console-template for more information
using System.Diagnostics;

Console.WriteLine("Hello, World!");

var processes = Process.GetProcessesByName("GameServer");
if (processes != null)
{
    foreach (var process in processes)
    {
        Console.WriteLine($"关闭{process.ProcessName}");
        //Console.WriteLine(process.StartInfo.Arguments);
        process.Kill();
    }
}