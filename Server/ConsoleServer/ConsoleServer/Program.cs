﻿using System;
using System.Runtime.CompilerServices;
using Telepathy;

namespace ConsoleServer
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.Title = "Test Server";
            Console.WriteLine("Hello im your server Console !qww");
            Console.ReadKey();

            Telepathy.Server mainserver = new Telepathy.Server();
            mainserver.start(1337);
            Console.WriteLine("Hello im your server Console !qww");
            Console.ReadKey();      
        }
    }
}