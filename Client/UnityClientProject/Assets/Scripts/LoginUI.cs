using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;
using UnityEngine.Experimental.PlayerLoop;
using UnityEngine.UI;

public class LoginUI : MonoBehaviour
{
    public GameObject NetworkManager;

    public Canvas LoginCanvas;
    public InputField EmailInput;
    public InputField PasswordInput;
    public Button LoginButton;
    
    // Start is called before the first frame update
    void Start()
    {

        
        LoginButton.onClick.AddListener(delegate { TaskOnClick(EmailInput.text, PasswordInput.text); });
        
        using (var wc = new WebClient())
        {
            string myIP = wc.DownloadString("https://ifconfig.co/ip");
            Debug.Log("My External IP: " + myIP);
        }
    }

    public void TaskOnClick(string a, string b)
    {
        NetworkManager.GetComponent<NetworkLLAPI>().ClientSendsLogin(a,b);
        //Output this to console when Button1 or Button3 is clicked
        //Debug.Log(a + b);
        LoginCanvas.enabled = false;
    }
    
}
