using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneManager : MonoBehaviour
{
    private static bool initialized = false;
 
    // ensure you call this method from a script in your first loaded scene
    public static void Initialize () {
        if (initialized == false) {
            initialized = true;
            // adds this to the 'activeSceneChanged' callbacks if not already initialized.
            UnityEngine.SceneManagement.SceneManager.activeSceneChanged += OnSceneWasLoaded;
        }
    }
     
    private static void OnSceneWasLoaded (UnityEngine.SceneManagement.Scene from, UnityEngine.SceneManagement.Scene to) {
        // do instantiate work here
    }
}
