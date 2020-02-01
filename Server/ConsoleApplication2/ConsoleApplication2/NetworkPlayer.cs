using System;
using MessagePack;

namespace ConsoleApplication2
{
    [MessagePackObject]
    public class NetworkPlayer
    {
        [Key(0)]
        public int ConnectionID { get; set; }

        [Key(1)]
        public float X { get; set; }
        [Key(2)]
        public float Y { get; set; }
        [Key(3)]
        public float Z { get; set; }
        
        [IgnoreMember]
        public bool Moved { get; set; }
        
        public NetworkPlayer(int connectionID)
        {
            ConnectionID = connectionID;

            // For Position Sepration so you can see if different clients recieve the right position
            X = connectionID;
            Y = connectionID;
            Z = connectionID;

            Moved = false;
        }
    }
}