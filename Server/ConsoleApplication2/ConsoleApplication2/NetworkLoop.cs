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

        //Events that get fired <class> event name
        public event EventHandler<int> ClientConnected; 
        public event EventHandler<int> ClientDisconnected;
        public event EventHandler<TestClass> ClientMessage;
        public event EventHandler<Telepathy.Message> KickPlayer;

        private int maxMessageCounter = 10; //Maximale Anzahl an Nachrichten per Tick die Entfangen werden darf bevor der Spieler gekickt wird.
        
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
                    //reply to each incoming message
                    while (server.GetNextMessage(out msg))
                    {
                        if (msg.eventType == EventType.Connected)
                        {
                            //TODO Checken wann er das letztemal connecten wollte und einen mindest Abstand von 5 Sekunden einbauen.
                            
                            OnClientConnected(msg.connectionId);
                        }
                        else if (msg.eventType == EventType.Data)
                        {
                            //Checks if the player is flagged as "Connected" then we listen to his data
                            if (networkPlayersDictionary[msg.connectionId].IsConnected)
                            {
                                //Checkt wie oft in diesem Tick der Spieler eine message geschickt hat, wenn mehr kleiner als maxcounter dann wird die nachricht verarbeitet sonst gekickt
                                if (networkPlayersDictionary[msg.connectionId].KickPlayer <= maxMessageCounter)
                                {
                                    OnMessageReceived(msg);
                                }
                                else
                                {
                                    OnClientKick((msg));
                                }
                            }
 
                            
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
                    //
                    
                    //Setzt Player message counter wieder auf 0
                    foreach (var Player in networkPlayersDictionary)
                    {
                        Player.Value.KickPlayer = 0;
                    }
                    
                    //Server Tick Rate 5 times per second
                    //System.Threading.Thread.Sleep(200); //Ist die Orginal methode unten die alternative
                    Console.WriteLine("Sleep . . .");
                    new System.Threading.ManualResetEvent(false).WaitOne(200);
                }
            }
            
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
                Console.WriteLine("Fehler beim getmsg loop");
            }
        }
        
        private void OnClientConnected(int connectionId)
        {
            try
            {
                //fügt die ID des clients in die NetworkPlayer Bibiothek hinzu
                if (!networkPlayersDictionary.ContainsKey(connectionId))
                {
                    networkPlayersDictionary.Add(connectionId, new NetworkPlayer(connectionId));
                    networkPlayersDictionary[connectionId].IsConnected = true;
                }
                //Todo Hier kann die Funktion aufgerufen werden zum Spieler zu Instantiaten auf dem frisch gejointen Client
                
                //Event Shoutout für alle die es interessiert das ein Spieler Connectet
                if (ClientConnected != null)
                {
                    ClientConnected(this, connectionId);
                }

            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
                Console.WriteLine("Fehler beim Connecten");
            }
        }

        private void OnMessageReceived(Telepathy.Message msg)
        {
            try
            {
                //Fragt ab ob die ID auch im NetworkPlayerDictionary ist wenn ja alles okay
                if (networkPlayersDictionary.ContainsKey(msg.connectionId))
                { 
                    //Message wird in Class umgewandelt
                TestClass recivedmsg = MessagePackSerializer.Deserialize<TestClass>(msg.data);
                
                //Event das des Class packet zur verfügung stellt für beispielsweise logs
                //ClientMessage(this, recivedmsg);
                Console.WriteLine("Player "+msg.connectionId+" sends packet: " +recivedmsg.ActionID);
            
                //Packet Count wird dazugezählt damit nacher abgefragt werden kann wie oft per tick er was geschickt hat
                networkPlayersDictionary[msg.connectionId].KickPlayer += 1;
            
                    //TODO richtiges Auswahlsystem das abfragt was der Client möchte und entsprechend handelt
                    if (recivedmsg.ActionID == 10)
                    { 
                        TestClass testClass = new TestClass(100,100,99);
                        server.Send(msg.connectionId, MessagePackSerializer.Serialize(testClass));
                    }
                    //TODOENDE
                }
                else
                {
                    Console.WriteLine("Player wollte einen Data Packet ausführen lassen aber befindet sich nicht in der NetworkPlayerDictionary");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
                Console.WriteLine("Fehler beim msg handeln");
            }
        }

        private void OnClientDisconnected(int connectionId)
        {
            try
            {
                //Setzt flag auf disconnected so das wir nicht mehr auf seine data nachrichten hören und er sich neu connecten muss
                networkPlayersDictionary[connectionId].IsConnected = false;
                
                //entfernt den disconnecteten spieler aus der NetworkPlayer Bibliothek und setzt seine flag auf disconnected
                if (networkPlayersDictionary.ContainsKey(connectionId))
                {
                    networkPlayersDictionary.Remove(connectionId);
                }

                //Event der allen mitteilt spieler ist disconnectet
                if (ClientDisconnected != null)
                {
                    ClientDisconnected(this, connectionId);
                }
                    
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
                Console.WriteLine("Fehler beim Disconnecten");
            }
        }

        private void OnClientKick(Message msg)
        {
            try
            {
                //Event der Kommuniziert das Player gekickt worden ist
                if (KickPlayer != null)
                {
                    KickPlayer(this, msg);
                }
                
                //Setzt flag auf disconnected so das wir nicht mehr auf seine data nachrichten hören und er sich neu connecten muss
                networkPlayersDictionary[msg.connectionId].IsConnected = false;
                
                //Server forced to disconnect den spieler
                server.Disconnect(msg.connectionId);
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
                Console.WriteLine("Fehler beim Spieler Kicken");
            }
        }

        /* Zum Instantieren von spielern auf dem client
        private void InstantiatePlayersOnConnect(int connectionId)
        {
            foreach (var player in networkPlayersDictionary)
            {
                //Send for every player a Instantiate and the Position.
                server.Send(connectionId, MessagePackSerializer.Serialize(player.Value));
            } 
        }
        */
    }
}