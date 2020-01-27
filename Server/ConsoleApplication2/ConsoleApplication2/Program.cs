using System;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Telepathy;

namespace ConsoleApplication2
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.Title = "Test Server";
            Console.WriteLine("Hello im your server Console !qww");
            Console.ReadKey();

            var server = new Telepathy.Server();
            server.Start(7171);
            Console.WriteLine("Server has started");
            Console.ReadKey();      
        }
    }
    
}