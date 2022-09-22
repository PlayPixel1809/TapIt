using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ThemeManager : MonoBehaviour
{
    public Sprite defaultBg;
    public List<Sprite> gameBackgrounds;


    public int bgChangeInterval;

    public Image bg_1;
    public Image bg_2;
    public Animation bgSwitch;
    
    public GameplayScreen gameplayScreen;


    private Sprite activeBg;
    private int bgChangeCount;

    
    void Start()
    {
        gameplayScreen.onScore += OnScore;
        gameplayScreen.onGameStart += OnGameStart;
        gameplayScreen.onGameOver += OnGameOver;
        
        activeBg = defaultBg;
    }

    void OnGameStart()
    {
        bgChangeCount = bgChangeInterval;

        bg_1.sprite = defaultBg;
        bg_2.sprite = defaultBg;

        bg_1.color = Color.white;
        bg_2.color = Color.white;
    }

    void OnScore(int score)
    {
        bgChangeCount -= 1;
        if (bgChangeCount > 0) { return; }
        bgChangeCount = bgChangeInterval;

        for (int i = 0; i < gameBackgrounds.Count; i++)
        {
            if (gameBackgrounds[i] == activeBg)
            {
                if (i == gameBackgrounds.Count - 1)
                {
                    activeBg = gameBackgrounds[0];
                }
                else 
                {
                    activeBg = gameBackgrounds[i + 1];
                }

                bg_1.sprite = bg_2.sprite;
                bg_2.sprite = activeBg;
                bgSwitch.Play();

                break;
            }
        }
    }

    void OnGameOver()
    {
        GameUtils.ins.StopAllCoroutines();
        AnimUtils.UiColor(bg_1.transform, Color.white, Color.red, .5f, () => { AnimUtils.UiColor(bg_1.transform, Color.red, Color.white, .5f); });
        AnimUtils.UiColor(bg_2.transform, Color.white, Color.red, .5f, () => { AnimUtils.UiColor(bg_2.transform, Color.red, Color.white, .5f); });
    }
}
