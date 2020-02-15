using System.Collections;
using System.Collections.Generic;
using AnySync;
using UnityEngine;
using MessagePack;

public class NetworkPlayer
{
    public MotionGenerator motionGenerator = new MotionGenerator(0.2f);
    public int ConnectionID { get; set; }

    public Vector3 PlayerPosition;
    
    public GameObject GameObject { get; set; }
    
    
    public bool GameObjectAdded { get; set; }

    public NetworkPlayer(int connectionId, Vector3 playerPosition, GameObject playerGameObject)
    {
        ConnectionID = connectionId;
        PlayerPosition = playerPosition;
        GameObject = playerGameObject;
    }

    //public Vector3 Position => new Vector3(X, Y, Z);
   
}
