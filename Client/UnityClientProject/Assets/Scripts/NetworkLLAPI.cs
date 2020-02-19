using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Diagnostics.Eventing.Reader;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using AnySync;
using DefaultNamespace;
using MessagePack;
using UnityEngine;
using Telepathy;
using Debug = UnityEngine.Debug;
using UnityEngine.SceneManagement;

public class NetworkLLAPI : MonoBehaviour
{
    public static NetworkLLAPI LLAPI;
    
    private Telepathy.Client client;
    
    public GameObject netPlayerPrefab;
    private Dictionary<long, NetworkPlayer> netPlayersDictionary;
    
    public string ip = "localhost";

    public bool w;
    public bool a;
    public bool s;
    public bool d;
    
    public GameObject NetworkLLAPIObj;
    public AsyncOperation sceneAsync;

    void Awake()
    {
        void Awake () {
            if(LLAPI == null) {
                LLAPI = this;
                DontDestroyOnLoad(this);
            }
            else Destroy(this); // or gameObject
        }
        
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
    private void Update()
    {
        if (Input.GetKey(KeyCode.A))
        {
            a = true;
        }
        else
        {
            a = false;
        }

        if (Input.GetKey(KeyCode.W))
        {
            w = true;
        }
        else
        {
            w = false;
        }
        
        if (Input.GetKey(KeyCode.S))
        {
            s = true;
        }
        else
        {
            s = false;
        }
        
        if (Input.GetKey(KeyCode.D))
        {
            d = true;
        }
        else
        {
            d = false;
        }

        foreach (var player in netPlayersDictionary)
        {
           // Debug.Log(GameObject.Find(player.Value.ConnectionID.ToString()).transform.position);
            //Debug.Log(player.Value.PlayerPosition.x + player.Value.PlayerPosition.y + player.Value.PlayerPosition.z);
            if (player.Value.motionGenerator.HasKeyframes)
            {
                player.Value.motionGenerator.UpdatePlayback(Time.deltaTime);
                GameObject.Find(player.Value.ConnectionID.ToString()).transform.position = player.Value.motionGenerator.Position;
            }

        }



    }

    void FixedUpdate()
    {
        OnNetworkReceived();

        if (w || a || s || d)
        {
            CustomPackets customPackets = new CustomPackets(9,w,a,s,d);
//            client.Send(MessagePackSerializer.Serialize(customPackets));
            client.Send(OPS.Serialization.IO.Serializer.Serialize(customPackets));

        }
        
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
                        Debug.Log("Connected !!!!!!!!!!!!!!!!");
                        break;
                    case Telepathy.EventType.Data:
                        //Debug.Log("Data: " + BitConverter.ToString(msg.data));
                        //Debug.Log("Data: " + MessagePackSerializer.Deserialize<NetworkPlayer>(msg.data));
                        //NetworkPlayer tempPlayer = MessagePackSerializer.Deserialize<NetworkPlayer>(msg.data);
                        
                        //Debug.Log("Data: " + MessagePackSerializer.Deserialize<TestClass>(msg.data));

                       // CustomPackets customPackets = MessagePackSerializer.Deserialize<CustomPackets>(msg.data);
                        CustomPackets customPackets = OPS.Serialization.IO.Serializer.DeSerialize<CustomPackets>(msg.data);
                        Debug.Log("Erhalte Packet mit Action: " +customPackets.Action);
                        //Debug.Log("Erhalte Packet mit Action (Debug.Log)");
                        switch (customPackets.Action)
                        {
                            case 1:
                                
                                if (!netPlayersDictionary.ContainsKey(customPackets.ConnectionID))
                                {
                                    
                                    Vector3 networkPlayerPosition = new Vector3(customPackets.PlayerPositionX,customPackets.PlayerPositionY,customPackets.PlayerPositionZ); //schreibt vector 3 in temp weil system vector3 ist nicht kompatibel mit unity vertor 3
                                    NetworkPlayer networkPlayer = new NetworkPlayer(customPackets.ConnectionID, networkPlayerPosition,netPlayerPrefab); //erstellt eine neuen network player mit den empfangenen instantiate daten
                                    netPlayersDictionary.Add(customPackets.ConnectionID,networkPlayer); //addet den neu erstellten network player in die player bibliothek
                                    Console.WriteLine("Instntiate Player "+customPackets.ConnectionID);
                                    Debug.Log("Instantiate Player "+customPackets.ConnectionID);
                                    
                                    GameObject PlayersCube = (GameObject)Instantiate(netPlayersDictionary[customPackets.ConnectionID].GameObject,
                                        netPlayersDictionary[customPackets.ConnectionID].PlayerPosition,Quaternion.identity);
                                    PlayersCube.name = netPlayersDictionary[customPackets.ConnectionID].ConnectionID.ToString();
                                }
                                break;
                            
                            
                            case 2:

                                if (netPlayersDictionary.ContainsKey(customPackets.ConnectionID))
                                {
                                    Destroy(GameObject.Find(customPackets.ConnectionID.ToString()));
                                    netPlayersDictionary.Remove(customPackets.ConnectionID);
                                }

                                break;
                            
                            case 5 :
                                Debug.Log("Erhalte aufforderung scene zu wechseln nach :" +customPackets.SA);
                                StartCoroutine(LoadYourAsyncScene(customPackets.SA));
                                
                                break;
                              
                                
                            case 10:
                                
                                netPlayersDictionary[customPackets.ConnectionID].PlayerPosition = new Vector3(customPackets.PlayerPositionX,customPackets.PlayerPositionY,customPackets.PlayerPositionZ);
                                netPlayersDictionary[customPackets.ConnectionID].motionGenerator.AddKeyframe(customPackets.Frame,netPlayersDictionary[customPackets.ConnectionID].PlayerPosition);
                                Debug.Log("Player "+customPackets.ConnectionID+" hat neue Position: "+customPackets.PlayerPositionX +" , " +customPackets.PlayerPositionZ);
                                break;
                        }

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

    public void DestroyAllObjects()
    {
        foreach (var Var in netPlayersDictionary)
        {
            Destroy(GameObject.Find(Var.Value.ConnectionID.ToString()));

        }
        netPlayersDictionary.Clear();
    }

    public void ClientSendsLogin(string a, string b)
    {
        CustomPackets customPackets = new CustomPackets(3,a,b);
        client.Send(OPS.Serialization.IO.Serializer.Serialize(customPackets));
    }
    
    IEnumerator LoadYourAsyncScene(string sceneName)
    {
        Debug.Log("Try to Load Scene: "+sceneName);
        AsyncOperation scene = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);
        scene.allowSceneActivation = false;
        sceneAsync = scene;

        //Wait until we are done loading the scene
        while (scene.progress < 0.9f)
        {
           // Debug.Log("Loading progress: " + (scene.progress * 100) + "%");
           // Debug.Log("Loading scene " + " [][] Progress: " + scene.progress);
            yield return null;
        }
        //Debug.Log("Loading progress2: " + (scene.progress * 100) + "%");
        //OnFinishedLoadingAllScene(sceneName);

        GameObject main = GameObject.Find("LoginSceneMain");
        main.active = false;
        
        sceneAsync.allowSceneActivation = true;

        while (!sceneAsync.isDone)
        {
            // wait until it is really finished
            //Debug.Log("Loading progress3: " + (scene.progress * 100) + "%");
            yield return null;
        }
        
        Debug.Log("Loading progress4: " + (scene.progress * 100) + "%");
        
        Scene sceneToLoad = UnityEngine.SceneManagement.SceneManager.GetSceneByName(sceneName);
        
        if (sceneToLoad.IsValid())
        {
            Debug.Log("Scene is Valid");
            UnityEngine.SceneManagement.SceneManager.MoveGameObjectToScene(NetworkLLAPIObj, sceneToLoad);
            UnityEngine.SceneManagement.SceneManager.SetActiveScene(sceneToLoad);
            Debug.Log("Sende Packet zum objekte Instantiieren");
            CustomPackets customPackets = new CustomPackets(4,"","");
            client.Send(OPS.Serialization.IO.Serializer.Serialize(customPackets));
        }
    }

    public void OnGUI()
    {
        // client GUI
        GUI.enabled = !client.Connected;
        if (GUI.Button(new Rect(0, 0, 120, 20), "Connect Client"))
            client.Connect(ip, 7171);

        GUI.enabled = client.Connected;
        if (GUI.Button(new Rect(130, 0, 120, 20), "Disconnect Client"))
        {
            client.Disconnect();
            DestroyAllObjects();
        }
      
        GUI.enabled = true;
    }
}
