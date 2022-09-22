using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameoverScreen : MonoBehaviour
{
    public GameObject homeScreen;
    public MusicPlayer musicPlayer;
    public GameplayScreen gameplayScreen;

    public Text score;
    

    void OnEnable()
    {
        score.text = gameplayScreen.score.text;
        if (AudioListener.volume > 0) { AudioListener.volume = .3f; }
    }

    public void RestartGameBtn()
    {
        ScreenUtils.ActivateScreen(gameObject, gameplayScreen.gameObject, null, () =>
        {
            gameplayScreen.StartGame();
        });
    }

    public void HomescreenBtn()
    {
        ScreenUtils.ActivateScreen(gameObject, homeScreen, () =>
        {
            musicPlayer.StopMusic();
        }, null);
    }

    public void LeaderboardBtn()
    {
        PlayfabManager.ins.SubmitHighscore();
    }
}
