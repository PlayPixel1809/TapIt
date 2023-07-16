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
    public Text performanceText;

    void OnEnable()
    {
        score.text = gameplayScreen.score.text;

        performanceText.text = "You suck";
        if (int.Parse(gameplayScreen.score.text) > 3)  { performanceText.text = "Lame"; }
        if (int.Parse(gameplayScreen.score.text) > 6)  { performanceText.text = "Not terrible"; }
        if (int.Parse(gameplayScreen.score.text) > 9)  { performanceText.text = "You can do better"; }
        if (int.Parse(gameplayScreen.score.text) > 12) { performanceText.text = "Not so bad"; }
        if (int.Parse(gameplayScreen.score.text) > 15) { performanceText.text = "Nice"; }
        if (int.Parse(gameplayScreen.score.text) > 18) { performanceText.text = "Very nice"; }
        if (int.Parse(gameplayScreen.score.text) > 21) { performanceText.text = "Great"; }
        if (int.Parse(gameplayScreen.score.text) > 24) { performanceText.text = "Wow, impressed"; }
        if (int.Parse(gameplayScreen.score.text) > 27) { performanceText.text = "Amazing!"; }
        if (int.Parse(gameplayScreen.score.text) > 30) { performanceText.text = "Unbelievable!"; }
        if (int.Parse(gameplayScreen.score.text) > 33) { performanceText.text = "Are you human!!"; }
        if (int.Parse(gameplayScreen.score.text) > 36) { performanceText.text = "That's impossible!!!"; }
        if (int.Parse(gameplayScreen.score.text) > 39) { performanceText.text = "You are a god."; }



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
