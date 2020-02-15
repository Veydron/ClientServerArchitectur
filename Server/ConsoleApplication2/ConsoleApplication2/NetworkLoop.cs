using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net.Configuration;
using System.Numerics;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using ConsoleApplication2.Scripts;
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

        private int maxMessageCounter = 11; //Maximale Anzahl an Nachrichten per Tick die Entfangen werden darf bevor der Spieler gekickt wird.
        
        public void Run()
        {
            Console.Title = "Test Server";
            Console.WriteLine("Hello im your server Console !");
            
            //zumtesten
            TimeFrame timeFrame = new TimeFrame();

            try
            {
                networkPlayersDictionary = new Dictionary<long, NetworkPlayer>();

                server = new Telepathy.Server();
                server.Start(7171);

                while (server.Active)
                {
                    
                    //zu testzwecken
                    //Console.WriteLine( timeFrame.ElapsedTimeForFrame());

                    
                    //reply to each incoming message
                    while (server.GetNextMessage(out msg))
                    {

                        switch (msg.eventType)
                        {
                            case Telepathy.EventType.Connected:
                                //TODO Checken wann er das letztemal connecten wollte und einen mindest Abstand von 5 Sekunden einbauen.
                                OnClientConnected(msg.connectionId);
                                break;
                            
                            case Telepathy.EventType.Data:
                                //Packet Count wird dazugezählt damit nacher abgefragt werden kann wie oft per tick er was geschickt hat
                                networkPlayersDictionary[msg.connectionId].KickPlayer += 1;
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
                                break;
                            
                            case Telepathy.EventType.Disconnected:
                                OnClientDisconnected(msg.connectionId);
                                break;
                        }
                    }

                    //TODO Send Packetes to the Player, like Position
                    foreach (var networkPlayer in networkPlayersDictionary)
                    {
                        if (networkPlayer.Value.IsMoved)
                        {
                            CustomPackets clientPacket = new CustomPackets(10,networkPlayer.Value.ConnectionID,networkPlayer.Value.PlayerPosition.X, networkPlayer.Value.PlayerPosition.Y, networkPlayer.Value.PlayerPosition.Z); //neue position
                            //Console.WriteLine("moved true,packet erstellt");
                            try
                            {
                                foreach (var networkPlayerConnection in networkPlayersDictionary) //für jeden spieler ausser sich selber
                                {

                                        //server.Send(networkPlayerConnection.Value.ConnectionID, MessagePackSerializer.Serialize(clientPacket)); // sende die position
                                        server.Send(networkPlayerConnection.Value.ConnectionID,
                                            OPS.Serialization.IO.Serializer.Serialize(clientPacket));
                                }
                            }
                            catch (Exception playerposupdate)
                            {
                                Console.WriteLine(playerposupdate);
                                throw;
                            }

                            networkPlayer.Value.IsMoved = false;
                            //TestClass testClass = new TestClass(100,100,99);
                            //server.Send(msg.connectionId, MessagePackSerializer.Serialize(testClass));
                        }
                    }
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
                    timeFrame.TimeSpanProcessWarning();
                    System.Threading.Thread.Sleep(15); //Ist die Orginal methode unten die alternative
                    //Console.WriteLine("Sleep . . .");
                    //new System.Threading.ManualResetEvent(false).WaitOne(15);
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
                    
                    //Player wird Instantiert
                    InstantiatePlayersOnConnect(connectionId);
                }
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
                //CustomPackets clientPacket = MessagePackSerializer.Deserialize<CustomPackets>(msg.data);
                CustomPackets clientPacket = OPS.Serialization.IO.Serializer.DeSerialize<CustomPackets>(msg.data);
                //Event das des Class packet zur verfügung stellt für beispielsweise logs
                //ClientMessage(this, recivedmsg);
                //Console.WriteLine("Player "+msg.connectionId+" sends packet: " +recivedmsg.ActionID);
                
                    //TODO richtiges Auswahlsystem das abfragt was der Client möchte und entsprechend 
                    switch (clientPacket.Action)
                    {
                        case 9:
                        {
                            //Sends die aktuelle Position und die möchte Position und zurück kommt die inframe Position die dann ins networplayerdictionary geschrieben wird
                            Vector3 tempVector3 = new Vector3();
                            tempVector3 = PlayerMovement.move(clientPacket.W,clientPacket.A,clientPacket.S,clientPacket.D,networkPlayersDictionary[msg.connectionId].PlayerPosition);
                            networkPlayersDictionary[msg.connectionId].PlayerPosition = tempVector3;
                            networkPlayersDictionary[msg.connectionId].IsMoved = true;
                            break;
                        }
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
                    
                //server sendet allen den spieler zu löschen
                DespawnPlayerOnDisconnect(connectionId);

                //entfernt den disconnecteten spieler aus der NetworkPlayer Bibliothek und setzt seine flag auf disconnected
                if (networkPlayersDictionary.ContainsKey(connectionId))
                {
                    //DespawnPlayerOnDisconnect(connectionId);
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
                
                if (networkPlayersDictionary.ContainsKey(msg.connectionId))
                {
                    //Setzt flag auf disconnected so das wir nicht mehr auf seine data nachrichten hören und er sich neu connecten muss
                    networkPlayersDictionary[msg.connectionId].IsConnected = false;
                    
                    //server sendet allen den spieler zu löschen
                    DespawnPlayerOnDisconnect(msg.connectionId);
                
                    //Server forced to disconnect den spieler
                    server.Disconnect(msg.connectionId);
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error: {ex.Message}");
                Console.WriteLine("Fehler beim Spieler Kicken");
            }
         }
 
         // Zum Instantieren von spielern auf dem client
         private void InstantiatePlayersOnConnect(int connectionId)
         {
             foreach (var player in networkPlayersDictionary)
             {
                 //Send for every player a Instantiate and the Position.
                 CustomPackets customPackets = new CustomPackets(1,player.Value.ConnectionID, player.Value.PlayerPosition.X,player.Value.PlayerPosition.Y,player.Value.PlayerPosition.Z);

                 Console.WriteLine(customPackets.Action +" , " +customPackets.ConnectionID +" , ");
                 //var data = MessagePackSerializer.Serialize(customPackets);
                 //var data = OPS.Serialization.IO.Serializer.Serialize(customPackets);
                 var data = OPS.Serialization.IO.Serializer.Serialize(customPackets);
                 Console.WriteLine("Data serialized ." +data);

                 foreach (var playerclient in networkPlayersDictionary)
                 {
                         server.Send(playerclient.Value.ConnectionID, data);
                 }
                 
                 Console.WriteLine("Player "+connectionId+" instantiated Player " +player.Value.ConnectionID);
             } 
         }

         private void DespawnPlayerOnDisconnect(int connectionID)
         {
             foreach (var player in networkPlayersDictionary)
             {
                 //Send for every player a despawn msg.
                 CustomPackets customPackets = new CustomPackets(2,connectionID);

                 //Console.WriteLine(customPackets.Action +" , " +customPackets.ConnectionID +" , ");
//                 var data = MessagePackSerializer.Serialize(customPackets);
                 var data = OPS.Serialization.IO.Serializer.Serialize(customPackets);

                 //Console.WriteLine("Data serialized ." +data);

                 foreach (var playerclient in networkPlayersDictionary)
                 {
                         server.Send(playerclient.Value.ConnectionID, data);
                 }
                 
                 //Console.WriteLine("Player "+connectionID+" disconnected " +player.Value.ConnectionID);
             } 
             
         }
     }
 }