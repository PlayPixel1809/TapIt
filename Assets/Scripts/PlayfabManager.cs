using PlayFab;
using PlayFab.ClientModels;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayfabManager : MonoBehaviour
{
    public static PlayfabManager ins;
    void Awake() { ins = this; }

    public Text score;

    public GameObject gameplayScreen;
    public GameObject gameoverScreen;
    public GameObject leaderboardScreen;

    public GameObject editDisplayNamePanel;
    public InputField displayName;

    public Transform scoreTabsParent;
    public LeaderboardScoreTab scoreTabPrefab;
    
    void Start()
    {
        if (!PlayerPrefs.HasKey("displayName")) { PlayerPrefs.SetString("displayName", string.Empty); }
        if (!PlayerPrefs.HasKey("leaderboardHighscore")) { PlayerPrefs.SetInt("leaderboardHighscore", 0); }

        Login((LoginResult i) => { Debug.Log("onLoginSuccess"); }, null);
    }

    private void Login(Action<LoginResult> onLoginSuccess, Action<PlayFabError> onLoginFailure)
    {
        var request = new LoginWithCustomIDRequest { CustomId = SystemInfo.deviceUniqueIdentifier, CreateAccount = true };
        PlayFabClientAPI.LoginWithCustomID(request, onLoginSuccess, onLoginFailure);
    }

    public void SubmitHighscore()
    {
        if (PlayerPrefs.GetInt("leaderboardHighscore") == PlayerPrefs.GetInt("highscore"))
        {
            GetHighscores();
            return;
        }

        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            NoticeUtils.ins.ShowOneBtnAlert("No Internet Connection");
            return;
        }

        editDisplayNamePanel.SetActive(true);
        if (string.IsNullOrEmpty(PlayerPrefs.GetString("displayName")))
        { 
            displayName.text = "Player " + UnityEngine.Random.Range(1, 100000);
            Debug.Log(displayName.text);
        }
        else
        { displayName.text = PlayerPrefs.GetString("displayName"); }

    }

    public void UpdateHighscore()
    {
        if (string.IsNullOrEmpty(displayName.text))
        {
            NoticeUtils.ins.ShowOneBtnAlert("Name can not be empty");
            return;
        }
        
        NoticeUtils.ins.ShowLoadingAlert("Please Wait");

        if (PlayerPrefs.GetString("displayName") != displayName.text) 
        {
            Debug.Log("displayName");

            PlayFabClientAPI.UpdateUserTitleDisplayName(new UpdateUserTitleDisplayNameRequest() { DisplayName = displayName.text },
            (UpdateUserTitleDisplayNameResult)=> 
            { 
                Debug.Log(UpdateUserTitleDisplayNameResult.ToJson());
                PlayerPrefs.SetString("displayName", displayName.text);
                UpdateHighscore();
                return;
            },null);
            
        }
        
        var request = new UpdatePlayerStatisticsRequest()
        {
            Statistics = new List<StatisticUpdate>()
            { 
                new StatisticUpdate()
                { 
                    StatisticName = "Highscore",
                    Value = PlayerPrefs.GetInt("highscore")
                }
            }
        };

        PlayFabClientAPI.UpdatePlayerStatistics(request, (UpdatePlayerStatisticsResult)=> 
        { 
            NoticeUtils.ins.HideLoadingAlert();
            editDisplayNamePanel.SetActive(false);
            PlayerPrefs.SetInt("leaderboardHighscore", PlayerPrefs.GetInt("highscore"));
            Utils.InvokeDelayedAction(1, GetHighscores);
        }, (e)=>{ Debug.Log(e); });
    }

    public void GetHighscores()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            NoticeUtils.ins.ShowOneBtnAlert("No Internet Connection");
            return;
        }

        GameObject screenToDeactivate = gameplayScreen;
        if (!GameplayScreen.ins.gameActive) { screenToDeactivate = gameoverScreen; }

        ScreenUtils.ActivateScreen(screenToDeactivate, leaderboardScreen, null, ()=> 
        {
            NoticeUtils.ins.ShowLoadingAlert("Please Wait");
            if (AudioListener.volume > 0) { AudioListener.volume = .3f; }
            var request = new GetLeaderboardRequest()
            {
                StatisticName = "Highscore",
                StartPosition = 0,
                MaxResultsCount = 10,
            };
            PlayFabClientAPI.GetLeaderboard(request, OnHighscoresRecieved, (e)=> { Debug.Log(e); NoticeUtils.ins.HideLoadingAlert(); });
        });
    }

    public void OnHighscoresRecieved(GetLeaderboardResult result)
    {
        NoticeUtils.ins.HideLoadingAlert();
        while (scoreTabsParent.childCount > 0)
        {
            DestroyImmediate(scoreTabsParent.GetChild(0).gameObject);
        }
        
        
        foreach (var item in result.Leaderboard)
        {
            LeaderboardScoreTab scoreTabClone = Instantiate(scoreTabPrefab,scoreTabsParent);

            scoreTabClone.rank.text = "#" + (item.Position + 1);
            scoreTabClone.name.text = item.DisplayName;
            if (item.PlayFabId == SystemInfo.deviceUniqueIdentifier) { scoreTabClone.name.text += " (You)"; }
            scoreTabClone.score.text = "SCORE: " + item.StatValue;

            Debug.Log("pos = " + item.Position + " id = " + item.PlayFabId + " val = " + item.StatValue + " name = " + item.DisplayName);
        }
    }

    public void CloseHighscoresScreen()
    {
        GameObject screenToActivate = gameplayScreen;
        if (!GameplayScreen.ins.gameActive) { screenToActivate = gameoverScreen; }

        ScreenUtils.ActivateScreen(leaderboardScreen, screenToActivate, null, null);
    }
}
