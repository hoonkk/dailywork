﻿using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuBehaviour : MonoBehaviour{
    
    public void ChangeScene(string sceneName){
        SceneManager.LoadScene(sceneName);
    }

    public void QuitGame(){
        #if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying =false;
        #else
            Application.Quit();
        #endif
    }
}
