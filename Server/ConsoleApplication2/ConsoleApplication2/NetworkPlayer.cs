using System;
using System.Numerics;
using MessagePack;

namespace ConsoleApplication2
{
    [MessagePackObject]
    public class NetworkPlayer
    {
        [Key(0)]
        public int ConnectionID { get; set; }

        [Key(1)]
        public Vector3 PlayerPosition;

        [IgnoreMember]
        public bool IsConnected { get; set; }
        
        [IgnoreMember]
        public bool IsMoved { get; set; }
        
        [IgnoreMember]
        public int KickPlayer { get; set; }
        
        public NetworkPlayer(int connectionID)
        {
            ConnectionID = connectionID;

            // For Position Sepration so you can see if different clients recieve the right position
            PlayerPosition = Vector3.Zero;

            IsConnected = false;
            KickPlayer = 0;
        }
    }
}