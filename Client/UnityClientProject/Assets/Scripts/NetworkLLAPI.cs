using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using DefaultNamespace;
using MessagePack;
using UnityEngine;
using Telepathy;

public class NetworkLLAPI : MonoBehaviour
{
    private Telepathy.Client client;
    
    public GameObject netPlayerPrefab;
    private Dictionary<long, NetworkPlayer> netPlayersDictionary;
    
    public string ip = "localhost";

    void Awake()
    {
        // update even if window isn't focused, otherwise we don't receive.
        Application.runInBackground = true;

        // use Debug.Log functions for Telepathy so we can see it in the console
        Telepathy.Logger.Log = Debug.Log;
        Telepathy.Logger.LogWarning = Debug.LogWarning;
        Telepathy.Logger.LogError = Debug.LogError;
    }
    
    // Start is called before the first frame update
    void Start()
    {
        netPlayersDictionary = new Dictionary<long, NetworkPlayer>();

        client = new Telepathy.Client();
        client.Connect(ip, 7171);

        Thread.Sleep(1000);

        if (client.Connected)
            Debug.Log("Client  started!");
        else
            Debug.LogError("Could not start client!");
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        OnNetworkReceived();

        //if (Input.GetKey(KeyCode.Space))
        //{
            TestClass testClass = new TestClass(10,100,99);
            client.Send(MessagePackSerializer.Serialize(testClass));
        //}
    }

    private void OnNetworkReceived()
    {
        if (client != null && client.Connected)
        {
            // show all new messages
            Telepathy.Message msg;
            
            while (client.GetNextMessage(out msg))
            {
                switch (msg.eventType)
                {
                    case Telepathy.EventType.Connected:
                        Debug.Log("Connected");
                        break;
                    case Telepathy.EventType.Data:
                        //Debug.Log("Data: " + BitConverter.ToString(msg.data));
                        //Debug.Log("Data: " + MessagePackSerializer.Deserialize<NetworkPlayer>(msg.data));
                        //NetworkPlayer tempPlayer = MessagePackSerializer.Deserialize<NetworkPlayer>(msg.data);
                        
                        //Debug.Log("Data: " + MessagePackSerializer.Deserialize<TestClass>(msg.data));
                        TestClass testClass = MessagePackSerializer.Deserialize<TestClass>(msg.data);
                        if (testClass.ActionID == 100)
                        {
                            Debug.Log("Ich " +testClass.PlayerID+ " bashe " +testClass.ActionID+ "auf ziel: " +testClass.TargetID);
                        }
                        //Vector3 tempVect = new Vector3(tempPlayer.X,tempPlayer.Y,tempPlayer.Z);
                        //Instantiate(netPlayerPrefab, tempVect, Quaternion.identity);
                        break;
                    case Telepathy.EventType.Disconnected:
                        Debug.Log("Disconnected");
                        break;
                }
            }
        }
    }

    public void OnApplicationQuit()
    {
        // the client/server threads won't receive the OnQuit info if we are
        // running them in the Editor. they would only quit when we press Play
        // again later. this is fine, but let's shut them down here for consistency
        if (client != null)
            if (client.Connected)
                client.Disconnect();
    }
    
    public void OnGUI()
    {
        // client GUI
        GUI.enabled = !client.Connected;
        if (GUI.Button(new Rect(0, 0, 120, 20), "Connect Client"))
            client.Connect(ip, 7171);

        GUI.enabled = client.Connected;
        if (GUI.Button(new Rect(130, 0, 120, 20), "Disconnect Client"))
            client.Disconnect();

        GUI.enabled = true;
    }
}
