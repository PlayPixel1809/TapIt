using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PauseScreen : MonoBehaviour
{
    public GameplayScreen gameplayScreen;
    public Text bestScore;
    public Text dailyBestScore;
    public Text gamesPlayed;

    void OnEnable()
    {
        bestScore.text = PlayerPrefs.GetInt("highscore").ToString();
        dailyBestScore.text = PlayerPrefs.GetInt("dailyHighscore").ToString();
        gamesPlayed.text = PlayerPrefs.GetInt("gamesPlayed").ToString();

        if (AudioListener.volume > 0) { AudioListener.volume = .3f; }
    }


    

    public void PauseGame()
    {
        ScreenUtils.ActivateScreen(gameplayScreen.gameObject, gameObject);
    }

    public void ResumeGame()
    {
        ScreenUtils.ActivateScreen(gameObject, gameplayScreen.gameObject);
    }
}
