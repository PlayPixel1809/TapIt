using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeScreen : MonoBehaviour
{
    public GameplayScreen gameplayScreen;
    public MusicPlayer musicPlayer;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    

    public void StartGameBtn()
    {
        ScreenUtils.ActivateScreen(gameObject, gameplayScreen.gameObject, null,()=> 
        {
            gameplayScreen.StartGame();
            musicPlayer.PlayMusic();
        });
    }
}
