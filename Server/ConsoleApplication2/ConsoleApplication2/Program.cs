using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Telepathy;
using System.Diagnostics;
using MessagePack;

namespace ConsoleApplication2
{
    internal class TestServer
    {
        public static void Main(string[] args)
        {
            //Event System
            NetworkLoop networkLoop = new NetworkLoop();
            LogServer logServer = new LogServer();
            networkLoop.ClientConnected += logServer.OnPlayerConnection;
            networkLoop.ClientDisconnected += logServer.OnPlayerDisconnection;
            networkLoop.ClientMessage += logServer.OnClientMessage;
            networkLoop.KickPlayer += logServer.OnClientKick;
            
            //Starts the Server
            networkLoop.Run();
            
            //Just for hold open console application if error pops up
            Console.ReadKey();
        }
    }
}