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
                    Telepathy.Message msg;
                    while (server.GetNextMessage(out msg))
                    {
                        if (msg.eventType == EventType.Connected)
                        {
                            Console.WriteLine(msg.connectionId + " Connected");
                            OnClientConnected(msg.connectionId);
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
                            OnClientDisconnected(msg.connectionId);
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
        
        public void OnClientConnected(int connectionId)
        {
            try
            {
                Console.WriteLine($"OnClientConnected: {connectionId}");

                //TODO Serialzing 
                //var message = new NetworkMessage();
                //message.AddTagPacket(NetworkTagPacket.PlayerPositionsArray);

                //message.AddUInt32((uint)networkPlayersDictionary.Count);
                
                //fügt die ID des clients in die NetworkPlayer Bibiothek hinzu
                if (!networkPlayersDictionary.ContainsKey(connectionId))
                    networkPlayersDictionary.Add(connectionId, new NetworkPlayer(connectionId));

                foreach (var player in networkPlayersDictionary)
                {
                    //TODO Send for every player a Instantiate and the Position.
                    server.Send(player.Value.ConnectionID, new byte[]{0x42, 0x13, 0x37});
                }
                //server.Send(0, new byte[]{0x14, 0x13, 0x17});
                //networkPlayersDictionary[connectionId].Moved = true;
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
            }
        }

        private void OnClientDisconnected(int connectionId)
        {
            try
            {
                Console.WriteLine($"OnClientDisconnected: {connectionId}");

                //entfernt den disconnecteten spieler aus der NetworkPlayer Bibliothek
                if (networkPlayersDictionary.ContainsKey(connectionId))
                    networkPlayersDictionary.Remove(connectionId);
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
            }
        }
        
    }
}