using System.Numerics;
using MessagePack;

namespace ConsoleApplication2.Scripts
{
    [MessagePackObject] 
    public class ServerPackets
    {
        
        public enum PacketsDNA : ushort
        {
            [Key(0)]
            None = 0,
            [Key(1)]
            InstantiatePlayer = 1,
            [Key(2)]
            MovementInput= 9,
            [Key(3)]
            MovePlayer = 10,
            [Key(4)]
            Skill = 100
            //Etc
        }
        
        [Key(5)] 
        public PacketsDNA Action;

        [Key(6)]
        public int ConnectionID; // Player ID zum identifizieren von welchem player das kommt

        [Key(7)] 
        public Vector3 PlayerPosition;
        
        [Key(8)]
        public bool W = false;
        
        [Key(9)]
        public bool A = false;
        
        [Key(10)]
        public bool S = false;
        
        [Key(11)]
        public bool D = false;
        
        public ServerPackets( PacketsDNA action, int connectionID, Vector3 playerPosition)
        {
            Action = action;
            ConnectionID = connectionID;
            PlayerPosition = playerPosition;
        }
    }
}