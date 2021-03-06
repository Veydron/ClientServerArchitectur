﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net.Configuration;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using ConsoleApplication2.Scripts;
using MessagePack;
using Telepathy;
using UnityEngine;
using UnityEngine.UIElements;
using Object = UnityEngine.Object;
using Vector3 = System.Numerics.Vector3;

namespace ConsoleApplication2
{
    public class NetworkLoop
    {
        public bool IsLoginServer = false;

        private Telepathy.Server server;
        private Dictionary<long, NetworkPlayer> networkPlayersDictionary;
        private Telepathy.Message msg;

        //Events that get fired <class> event name
        public event EventHandler<int> ClientConnected; 
        public event EventHandler<int> ClientDisconnected;
        public event EventHandler<TestClass> ClientMessage;
        public event EventHandler<Telepathy.Message> KickPlayer;
        public event EventHandler<CustomPackets> OnClientLogin;

        private int maxMessageCounter = 11; //Maximale Anzahl an Nachrichten per Tick die Entfangen werden darf bevor der Spieler gekickt wird.

        TimeFrame timeFrame = new TimeFrame();
        
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

                                if (networkPlayersDictionary[msg.connectionId].KickPlayer >= maxMessageCounter)
                                {
                                    // Kick weil MSG Spam
                                    OnClientKick((msg));
                                }

                                if (networkPlayersDictionary[msg.connectionId].IsBlocked == true)
                                {
                                    // Kick weil blocked
                                    OnClientKick((msg));
                                }

                                if (networkPlayersDictionary[msg.connectionId].blockedUntil > timeFrame.ElapsedTimeForFrame())
                                {
                                    // Warten bis Zeit abgelaufen ist
                                    break;
                                }
                                
                                OnMessageReceived(msg);
                                break;
                            
                            case Telepathy.EventType.Disconnected:
                                OnClientDisconnected(msg.connectionId);
                                break;
                        }
                    }

                    //Chaching serverprocesstime
                    int serverTickTime = timeFrame.ServerTickSpan();
                    
                    //TODO Send Packetes to the Player, like Position
                    
                    foreach (var networkPlayer in networkPlayersDictionary)
                    {
                        if (networkPlayer.Value.IsMoved) 
                        {
                            //Todo zeitabfragen, bewebungsgeschwindigkeit mit serverzeit multiplizieren und dies in die nötige position adden. 
                            //lese networkplayerposition
                            //ermittle richtung durch last pos abfrage
                            //multipliziere playergeschwindigkeit mit richtung und mit serverzeit dividiert in 1000
                            //setzte aktuelle playerposition als alteposition
                            //setzte neue playerposition mit neuer position
                            //Todo nach pos berechnung dann is moved auf false setzen

                            CustomPackets clientPacket = new CustomPackets(10,networkPlayer.Value.ConnectionID,networkPlayer.Value.PlayerPosition.X, networkPlayer.Value.PlayerPosition.Y, networkPlayer.Value.PlayerPosition.Z,timeFrame.ElapsedTimeForFrame()); //neue position
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
                            //Todo if playerposition is cell mittig remove flag
                            networkPlayer.Value.IsMoved = false;
                            //TestClass testClass = new TestClass(100,100,99);
                            //server.Send(msg.connectionId, MessagePackSerializer.Serialize(testClass));
                        }
                    }
                    
                    //TODO entferne player position packet send foreach oben raus und mach es unter der bewegungsberechunng hier rein
                    
                    //SendMonsterPositions();
                    //SendActions();
                    
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
                clientPacket.ConnectionID = msg.connectionId;
                //Event das des Class packet zur verfügung stellt für beispielsweise logs
                //ClientMessage(this, recivedmsg);
                //Console.WriteLine("Player "+msg.connectionId+" sends packet: " +recivedmsg.ActionID);

                    //TODO richtiges Auswahlsystem das abfragt was der Client möchte und entsprechend 
                    switch (clientPacket.Action)
                    {
                        case 3: //Recive Login&Password
                        {

                            if (clientPacket.SA != "" && clientPacket.SB != "")
                            {
                                Console.WriteLine("Send CLient packed from player ID :" +clientPacket.ConnectionID);
                                OnClientLogin(this,clientPacket); 
                            }
                            else
                            {
                                Console.WriteLine("Eingabe ist Leer");
                                OnLoginFailed(this,clientPacket.ConnectionID);
                            }
                            
                            break;
                        }

                        case 4:
                        {
                            InstantiatePlayersOnConnect(clientPacket.ConnectionID);
                             break;
                        }
                           
                        case 9: //Recive player wasd input
                        {
                            if (IsLoginServer)
                            {
                                break;
                            }
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
                 CustomPackets customPackets = new CustomPackets(1,player.Value.ConnectionID, player.Value.PlayerPosition.X,player.Value.PlayerPosition.Y,player.Value.PlayerPosition.Z,0);

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
        
         public void OnLoginSuccsess(object source, CustomPackets customPackets)
         {
             if (IsLoginServer)
             {
                 //Todo: If Loginserver sends Scene Wechsel zu Charakter auswahl + List mit Playercharakter + List mit MapServerIPs
             }
             else
             {
                 //Todo: If not Loginserver Instantiate ClientPlayer & all other Players & NPCs & Mobs
                 //Player wird Instantiert
                 
                 //Ausnahmseweise sende ich hier das er scene wechseln soll
                 CustomPackets newCustomPackets = new CustomPackets(5,"TestScene","");
                 server.Send(customPackets.ConnectionID, OPS.Serialization.IO.Serializer.Serialize(newCustomPackets));

                 //Console.WriteLine("Instantiate Player with ID : "+ customPackets.ConnectionID);
                 //InstantiatePlayersOnConnect(customPackets.ConnectionID);
             }
         }
         
         public void OnLoginFailed(object source, int connectionID)
         {
             //Todo: If Loginserver sends Scene Wechsel zu Charakter auswahl + List mit Playercharakter + List mit MapServerIPs
             networkPlayersDictionary[connectionID].blockedUntil = (timeFrame.ElapsedTimeForFrame() + 3f);

             Console.WriteLine("Login Daten sind Falsch, blocked für 3 sec");
         }

         public void Bewegungsberechnungs()
         {
             
         }
         
     }
 }