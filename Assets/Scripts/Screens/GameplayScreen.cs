using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameplayScreen : MonoBehaviour
{
    public static GameplayScreen ins;
    void Awake() { ins = this; }

    public bool gameActive;

    public int rowsStackingLimit = 15;
    public float reviveTime = 5;
    public float minLinesToRevive = 5;

    public GameObject gameoverScreen;
    public Text score, highscore;

    public GameObject revivePanel;
    public Image reviveTimerImage;
    public Transform lines;
    public Transform linePrefab;
    public AnimationCurve lineDisappear;

    public AudioClip onTargetSound, onMissSound, onGameStartSound;

    public float startSpeed;
    public float maxSpeed;
    public float maxSpeedLine;

    public Sprite ballRed;
    public Sprite ballGreen;

    public Slider startSpeedSlider;
    public Slider maxSpeedSlider;
    public Slider maxSpeedLineSlider;

    private bool stopBall = false;

    public Action onEnable, onDisable, onMiss, onGameStart, onGameOver, onTap;
    public Action<int> onScore;

    private bool revived;

    void OnEnable()
    {
        onEnable?.Invoke();
        if (AudioListener.volume > 0) { AudioListener.volume = 1; }
    }

    void OnDisable()
    {
        onDisable?.Invoke();
    }

    void Start()
    {
        if (!PlayerPrefs.HasKey("highscore")) { PlayerPrefs.SetInt("highscore", 0); }
        if (!PlayerPrefs.HasKey("dailyHighscore")) { PlayerPrefs.SetInt("dailyHighscore", 0); }
        if (!PlayerPrefs.HasKey("gamesPlayed")) { PlayerPrefs.SetInt("gamesPlayed", 0); }

        onScore += OnScore;
        onMiss += OnMiss;
        onGameOver += OnGameOver;
       
        startSpeedSlider.value = startSpeed;
        maxSpeedSlider.value = maxSpeed;
        maxSpeedLineSlider.value = maxSpeedLine;
        StartSpeedSlider();
        MaxSpeedSlider();
        MaxSpeedLineSlider();

    }

    public void Mute(Image btnImage)
    {
        if (AudioListener.volume == 1)
        {
            AudioListener.volume = 0;
            btnImage.color = new Color(1, 1, 1, .75f);

        }
        else
        {
            AudioListener.volume = 1;
            btnImage.color = new Color(1, 1, 1, 1);
        }
    }

    public void TapScreenBtn() {onTap?.Invoke();}

    public void RevivePlayer()
    {
        revived = true;
        StopCoroutine("PlayReviveTimer");
        revivePanel.gameObject.SetActive(false);

        /*UnityAds.ins.ShowRewardedAd((UnityEngine.Advertisements.ShowResult showResult) => 
        {
            if (showResult == UnityEngine.Advertisements.ShowResult.Finished)
            {
                score.text = (int.Parse(score.text) + 1).ToString();
                InstantiateLine();
            }
            else
            {
                onGameOver?.Invoke();
            }
        });*/

        AdManager.ins.ShowRewardedAd(()=> 
        {
            score.text = (int.Parse(score.text) + 1).ToString();
            InstantiateLine();
        });

    }

    public void StartGame()
    {
        StartCoroutine("StartGameCoroutine");
    }

    IEnumerator StartGameCoroutine()
    {
        revived = false;
        gameActive = true;
        PlayerPrefs.SetInt("gamesPlayed", PlayerPrefs.GetInt("gamesPlayed") + 1);
        onGameStart?.Invoke();
        lines.localPosition = new Vector3(0,0,0);
        score.text = "0";
        highscore.text = PlayerPrefs.GetInt("highscore").ToString();
        GameUtils.ins.PlaySound(onGameStartSound);
        while (lines.childCount > 0) { DestroyImmediate(lines.GetChild(0).gameObject); }
        StartCoroutine("InstantiateLine");
        yield return null;
    }

    void OnScore(int s)
    {
        score.text = (int.Parse(score.text) + 1).ToString();
        if (int.Parse(score.text) > PlayerPrefs.GetInt("highscore")) 
        { 
            PlayerPrefs.SetInt("highscore", int.Parse(score.text));
            highscore.text = PlayerPrefs.GetInt("highscore").ToString();
        }
        if (int.Parse(score.text) > PlayerPrefs.GetInt("dailyHighscore")) { PlayerPrefs.SetInt("dailyHighscore", int.Parse(score.text)); }

        GameUtils.ins.PlaySound(onTargetSound);
        Utils.InvokeDelayedAction(.5f, () => { InstantiateLine(); }); 
    }

    void OnMiss()
    {
        GameUtils.ins.PlaySound(onMissSound);

        if (!revived && AdManager.ins.IsRewardedAdReady() && int.Parse(score.text) > minLinesToRevive - 1)
        {
            StartCoroutine("PlayReviveTimer");
        }
        else
        {
            onGameOver?.Invoke();
        }
    }

    void OnGameOver()
    {
        StartCoroutine("OnGameoverCoroutine");
    }

    IEnumerator OnGameoverCoroutine()
    {
        gameActive = false;
        for (int i = 0; i < lines.childCount; i++)
        {
            AnimUtils.Transform(lines.GetChild(i), lines.GetChild(i).localPosition, new Vector3(0, -500, 0), .5f, Space.Self, lineDisappear);
            yield return new WaitForSeconds(.025f);
        }

        yield return new WaitForSeconds(.5f);
        ScreenUtils.ActivateScreen(gameObject, gameoverScreen);
    }

    IEnumerator PlayReviveTimer()
    {
        revivePanel.gameObject.SetActive(true);
        float val = 0;
        while (val < 1)
        {
            val += Time.deltaTime / reviveTime;
            reviveTimerImage.fillAmount = Mathf.Lerp(0, 1, val); 
            yield return null;
        }
        onGameOver?.Invoke();
        revivePanel.gameObject.SetActive(false);
    }

    void InstantiateLine()
    {
        Transform lineClone = Instantiate(linePrefab, lines);
        lineClone.localPosition = new Vector3(0, int.Parse(score.text) * 40, 0);

        if (lines.childCount > rowsStackingLimit)
        {
            lines.GetChild(0).GetComponent<Line>().FadeOut();
            AnimUtils.Transform(lines, new Vector3(0, lines.localPosition.y, 0), new Vector3(0, lines.localPosition.y - 40, 0), .5f, Space.Self, () =>
            {
                DestroyImmediate(lines.GetChild(0).gameObject);
            });
        }
    }

   

    public void StartSpeedSlider()
    {
        startSpeed = Mathf.CeilToInt(startSpeedSlider.value);
        startSpeedSlider.transform.GetChild(4).GetComponent<Text>().text = "Start Speed = " + startSpeed;

        if (startSpeed >= maxSpeed)
        {
            maxSpeedSlider.value = startSpeed + 1;
            MaxSpeedSlider();
        }
    }

    public void MaxSpeedSlider()
    {
        maxSpeed = Mathf.CeilToInt(maxSpeedSlider.value);
        maxSpeedSlider.transform.GetChild(4).GetComponent<Text>().text = "Max Speed = " + maxSpeed;
    }

    public void MaxSpeedLineSlider()
    {
        maxSpeedLine = Mathf.CeilToInt(maxSpeedLineSlider.value);
        maxSpeedLineSlider.transform.GetChild(4).GetComponent<Text>().text = "Max Speed Line = " + maxSpeedLine;
    }

}

