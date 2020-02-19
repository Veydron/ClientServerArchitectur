using System;
using System.Numerics;
using MessagePack;
using OPS.Serialization.Attributes;

namespace ConsoleApplication2
{
    [SerializeAbleClass]
    public class NetworkPlayer
    {
        [SerializeAbleField(0)] 
        public int ConnectionID;

        [SerializeAbleField(1)]
        public Vector3 PlayerPosition;

        public float blockedUntil;

        public bool IsBlocked;
      
        public bool IsConnected { get; set; }
        
       
        public bool IsMoved { get; set; }
        
       
        public int KickPlayer { get; set; }
        
       
        public float MovementSpeed { get; set; }
        
        public NetworkPlayer(int connectionID)
        {
            ConnectionID = connectionID;

            // For Position Sepration so you can see if different clients recieve the right position
            PlayerPosition = Vector3.Zero;

            IsConnected = false;
            KickPlayer = 0;
            MovementSpeed = 1f;
        }
    }
}