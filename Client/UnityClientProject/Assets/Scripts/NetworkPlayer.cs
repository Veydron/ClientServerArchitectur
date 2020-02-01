using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MessagePack;

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
    public GameObject GameObject { get; set; } 
    
    [IgnoreMember]
    public bool GameObjectAdded { get; set; }

    public NetworkPlayer()
        {
            //GameObjectAdded = false;
        }

    //public Vector3 Position => new Vector3(X, Y, Z);
   
}
