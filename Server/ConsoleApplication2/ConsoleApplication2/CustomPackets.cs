using System;
using System.Collections.Generic;
using System.Numerics;
using MessagePack;
using OPS.Serialization.Attributes;

namespace ConsoleApplication2
{
    [SerializeAbleClass]
    public class CustomPackets
    {
        
        /*
        public enum PacketsDNA : ushort
        {
            [Key(7)]
            None = 0,
            [Key(8)]
            InstantiatePlayer = 1,
            
            DespawnPlayer = 2,
            
            AccountLoginCheck = 3
            [Key(9)]
            MovementInput= 9,
            [Key(10)]
            MovePlayer = 10,
            [Key(11)]
            Skill = 100
            //Etc
        }
        */


        [SerializeAbleField(0)]
        public int Action = 0;
        
        [SerializeAbleField(1)]
        public int ConnectionID = 0; // Player ID zum identifizieren von welchem player das kommt

        [SerializeAbleField(2)]
        public float PlayerPositionX = 0.0f;
        
        [SerializeAbleField(3)]
        public float PlayerPositionY = 0.0f;
        
        [SerializeAbleField(4)]
        public float PlayerPositionZ = 0.0f;
        
        [SerializeAbleField(5)]
        public bool W = false;
        
        [SerializeAbleField(6)]
        public bool A = false;
        
        [SerializeAbleField(7)]
        public bool S = false;
        
        [SerializeAbleField(8)]
        public bool D = false;

        [SerializeAbleField(9)] public float Frame;   
        
        [SerializeAbleField(10)] public string SA;      
        [SerializeAbleField(11)] public string SB;

        public int AccountID = 0;
        public string IP = "0";

        public CustomPackets(int action, string a, string b)
        {
            Action = action;
            SA = a;
            SB = b;
        }

        public CustomPackets( int action, int connectionID, float playerPositionX, float playerPositionY, float playerPositionZ, float frame)
        {
            Action = action;
            ConnectionID = connectionID;
            PlayerPositionX = playerPositionX;
            PlayerPositionY = playerPositionY;
            PlayerPositionZ = playerPositionZ;
            Frame = frame;
        }
        
        public CustomPackets(int action, bool w, bool a, bool s, bool d)
        {
            Action = action;
            W = w;
            A = a;
            S = s;
            D = d;
        }
        
        public CustomPackets(int action, int connectionID)
        {
            Action = action;
            ConnectionID = connectionID;
        }
        
        public CustomPackets()
        {
             
        }
    }
}