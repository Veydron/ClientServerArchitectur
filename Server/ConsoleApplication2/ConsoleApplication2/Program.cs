using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Telepathy;
using System.Diagnostics;

namespace ConsoleApplication2
{
    internal class Program
    {
        private Telepathy.Server server;
        private Dictionary<long, NetworkPlayer> networkPlayersDictionary;

        public static void Main(string[] args)
        {
            //The actuall programm start and infinity loop
            Program program = new Program();
            program.Run();
            
            //Just for hold open console application if error pops up
            Console.ReadKey();
        }
        
        public void Run()
        {
            Console.Title = "Test Server";
            Console.WriteLine("Hello im your server Console !");
            
            try
            {
                networkPlayersDictionary = new Dictionary<long, NetworkPlayer>();

                server = new Telepathy.Server();
                server.Start(7171);

                while (server.Active)
                {
                    // reply to each incoming message
                    Message msg;
                    while (server.GetNextMessage(out msg))
                    {
                        if (msg.eventType == EventType.Connected)
                        {
                            Console.WriteLine(msg.connectionId + " Connected");
                            //OnClientConnected(msg.connectionId);
                        }
                        else if (msg.eventType == EventType.Data)
                        {
                            server.Send(msg.connectionId, msg.data);
                            Console.WriteLine(msg.connectionId + " Data: " + BitConverter.ToString(msg.data));
                            //OnMessageReceived(new NetworkMessage(msg.data), msg.connectionId);
                        }
                        else if (msg.eventType == EventType.Disconnected)
                        {
                            Console.WriteLine(msg.connectionId + " Disconnected");
                            //OnClientDisconnected(msg.connectionId);
                        }
                    }

                    //TODO Send Packetes to the Player, like Position
                    //SendPlayerPositions();
                    
                    //Console.WriteLine(" Server is listening . . .");

                    System.Threading.Thread.Sleep(100);
                }
            }
            
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
            }
        }
        
    }
}