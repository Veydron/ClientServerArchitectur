using System;
using System.Numerics;
using MessagePack;

namespace DefaultNamespace
 {

     [MessagePackObject] 
     public class CustomPackets
     {
        
         /*
         public enum PacketsDNA : ushort
         {
             [Key(7)]
             None = 0,
             [Key(8)]
             InstantiatePlayer = 1,
             [Key(9)]
             MovementInput= 9,
             [Key(10)]
             MovePlayer = 10,
             [Key(11)]
             Skill = 100
             //Etc
         }
         */


         [Key(0)] 
         public int Action = 0;
        
         [Key(1)]
         public int ConnectionID = 0; // Player ID zum identifizieren von welchem player das kommt

         [Key(2)]
         public float PlayerPositionX = 0.0f;
        
         [Key(3)]
         public float PlayerPositionY = 0.0f;
        
         [Key(4)]
         public float PlayerPositionZ = 0.0f;
        
         [Key(5)]
         public bool W = false;
        
         [Key(6)]
         public bool A = false;
        
         [Key(7)]
         public bool S = false;
        
         [Key(8)]
         public bool D = false;
        

         public CustomPackets( int action, int connectionID, float playerPositionX, float playerPositionY, float playerPositionZ)
         {
             Action = action;
             ConnectionID = connectionID;
             PlayerPositionX = playerPositionX;
             PlayerPositionY = playerPositionY;
             PlayerPositionZ = playerPositionZ;
         }
        
         public CustomPackets(int action, bool w, bool a, bool s, bool d)
         {
             Action = action;
             W = w;
             A = a;
             S = s;
             D = d;
         }
        
     }
 }