using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkPlayer
{
    public float X { get; set; }
    public float Y { get; set; } 
    public float Z { get; set; }
    
    public GameObject GameObject { get; set; } 
    public bool GameObjectAdded { get; set; }

    public NetworkPlayer()
        {
            GameObjectAdded = false;
        }

    public Vector3 Position => new Vector3(X, Y, Z);
   
}
