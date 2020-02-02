using System;
using System.Collections.Generic;
using System.Net.Configuration;
using System.Security.Cryptography.X509Certificates;
using MessagePack;
using Telepathy;

namespace ConsoleApplication2
{
    public class NetworkLoop
    {
        private Telepathy.Server server;
        private Dictionary<long, NetworkPlayer> networkPlayersDictionary;
        private Telepathy.Message msg;

        public event EventHandler<Telepathy.Message> ClientConnected; 
        public event EventHandler<Telepathy.Message> ClientDisconnected; 
        
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
                    //Telepathy.Message msg;
                    while (server.GetNextMessage(out msg))
                    {
                        if (msg.eventType == EventType.Connected)
                        {
                            OnClientConnected(msg.connectionId);
                        }
                        else if (msg.eventType == EventType.Data)
                        {
                            server.Send(msg.connectionId, msg.data);
                            Console.WriteLine(msg.connectionId + " Data: " + BitConverter.ToString(msg.data));
                            OnMessageReceived(msg);
                            //OnMessageReceived(new NetworkMessage(msg.data), msg.connectionId);
                        }
                        else if (msg.eventType == EventType.Disconnected)
                        {
                            OnClientDisconnected(msg.connectionId);
                        }
                    }

                    //TODO Send Packetes to the Player, like Position
                    //SendPlayerPositions();
                    //SendMonsterPositions();
                    //SendActions();

                    //TODO Warning System when processing loop is longer then tick rate
                    //Server Tick Rate 5 times per second
                    System.Threading.Thread.Sleep(1000);
                }
            }
            
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
            }
        }

        private void OnClientConnected(int connectionId)
        {
            try
            {
                //Console.WriteLine("Verbundene Clients:" + (networkPlayersDictionary.Count+1));
                
                //fügt die ID des clients in die NetworkPlayer Bibiothek hinzu
                if (!networkPlayersDictionary.ContainsKey(connectionId))
                    networkPlayersDictionary.Add(connectionId, new NetworkPlayer(connectionId));
                
                //Event Shoutout für alle die es interessiert das ein Spieler Connectet
                if (ClientConnected != null)
                {
                    ClientConnected(this, msg);
                }

            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
            }
        }

        private void OnMessageReceived(Telepathy.Message msg)
        {
            TestClass recivedmsg = MessagePackSerializer.Deserialize<TestClass>(msg.data);
            if (recivedmsg.ActionID == 10)
            {
                Console.WriteLine("Player ID " + msg.connectionId + " bashed");
                TestClass testClass = new TestClass(100,100,99);
                server.Send(msg.connectionId, MessagePackSerializer.Serialize(testClass));
            }
        }

        private void OnClientDisconnected(int connectionId)
        {
            try
            {
                //entfernt den disconnecteten spieler aus der NetworkPlayer Bibliothek
                if (networkPlayersDictionary.ContainsKey(connectionId))
                    networkPlayersDictionary.Remove(connectionId);
                if (ClientDisconnected != null)
                {
                    ClientDisconnected(this, msg);
                }
                    
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
            }
        }

        private void InstantiatePlayersOnConnect(int connectionId)
        {
            foreach (var player in networkPlayersDictionary)
            {
                //Send for every player a Instantiate and the Position.
                server.Send(connectionId, MessagePackSerializer.Serialize(player.Value));
            } 
        }
    }
}