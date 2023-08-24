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
    public Text bestScore;

    public GameObject gameplayScreen;
    public GameObject gameoverScreen;
    public GameObject leaderboardScreen;

    public GameObject editDisplayNamePanel;
    public InputField displayName;

    public Transform scoreTabsParent;
    public LeaderboardScoreTab scoreTabPrefab;

    [Space(30)]
    public LoginResult loginResult;
    
    void Start()
    {
        if (!PlayerPrefs.HasKey("displayName")) { PlayerPrefs.SetString("displayName", string.Empty); }
        if (!PlayerPrefs.HasKey("leaderboardHighscore")) { PlayerPrefs.SetInt("leaderboardHighscore", 0); }

        Login((LoginResult i) => 
        {
            Debug.Log("LoginSuccess");
            loginResult = i;

            if (loginResult.InfoResultPayload.PlayerStatistics.Count > 0) { bestScore.text = loginResult.InfoResultPayload.PlayerStatistics[0].Value.ToString(); }

        }, null);
    }

    private void Login(Action<LoginResult> onLoginSuccess, Action<PlayFabError> onLoginFailure)
    {
        GetPlayerCombinedInfoRequestParams parameters = new GetPlayerCombinedInfoRequestParams() { GetUserAccountInfo = true, GetUserData = true, GetPlayerStatistics = true };
        var request = new LoginWithCustomIDRequest { CustomId = SystemInfo.deviceUniqueIdentifier, CreateAccount = true, InfoRequestParameters = parameters };
        PlayFabClientAPI.LoginWithCustomID(request, onLoginSuccess, (e)=> 
        {
            Login(onLoginSuccess,null);
        });
    }


    public void UpdateHighscore()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable) { return; }

        if (IsHighscoreBroken())
        {
            NoticeUtils.ins.ShowLoadingAlert("Please wait");

            var request = new UpdatePlayerStatisticsRequest()
            {
                Statistics = new List<StatisticUpdate>()
                {
                    new StatisticUpdate()
                    {
                        StatisticName = "Highscore",
                        Value = int.Parse(bestScore.text)
                    }
                }
            };

            PlayFabClientAPI.UpdatePlayerStatistics(request, (UpdatePlayerStatisticsResult) =>
            {
                Debug.Log("UpdatePlayerStatistics");
                NoticeUtils.ins.HideLoadingAlert();

                if (loginResult.InfoResultPayload.PlayerStatistics.Count > 0) 
                { loginResult.InfoResultPayload.PlayerStatistics[0].Value = int.Parse(bestScore.text); }
                else 
                { loginResult.InfoResultPayload.PlayerStatistics.Add(new StatisticValue() { Value = int.Parse(bestScore.text) }); }

            }, (e) => { Debug.Log(e); });
        }
    }

    public void ShowLeaderboard(bool changeDisplayName)
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            NoticeUtils.ins.ShowOneBtnAlert("No Internet Connection");
            return;
        }


        if (changeDisplayName) 
        {
            ActivateEditDisplayNamePanel();
            return;
        }

        GameObject screenToDeactivate = gameplayScreen;
        if (!GameplayScreen.ins.gameActive) { screenToDeactivate = gameoverScreen; }

        ScreenUtils.ActivateScreen(screenToDeactivate, leaderboardScreen, null, () =>
        {
            NoticeUtils.ins.ShowLoadingAlert("Please Wait");
            if (AudioListener.volume > 0) { AudioListener.volume = .3f; }
            var request = new GetLeaderboardRequest()
            {
                StatisticName = "Highscore",
                StartPosition = 0,
                MaxResultsCount = 10,
            };
            PlayFabClientAPI.GetLeaderboard(request, OnHighscoresRecieved, (e) => { Debug.Log(e); NoticeUtils.ins.HideLoadingAlert(); });
        });
    }

    public void OnHighscoresRecieved(GetLeaderboardResult result)
    {
        NoticeUtils.ins.HideLoadingAlert();
        while (scoreTabsParent.childCount > 0) { DestroyImmediate(scoreTabsParent.GetChild(0).gameObject); }

        foreach (var item in result.Leaderboard)
        {
            LeaderboardScoreTab scoreTabClone = Instantiate(scoreTabPrefab, scoreTabsParent);

            scoreTabClone.rank.text = "#" + (item.Position + 1);
            scoreTabClone.name.text = item.DisplayName;
            if (item.PlayFabId == SystemInfo.deviceUniqueIdentifier) { scoreTabClone.name.text += " (You)"; }
            scoreTabClone.score.text = "SCORE: " + item.StatValue;

            Debug.Log("pos = " + item.Position + " id = " + item.PlayFabId + " val = " + item.StatValue + " name = " + item.DisplayName);
        }
    }



    public void ActivateEditDisplayNamePanel()
    {
        editDisplayNamePanel.SetActive(true);
        displayName.text = loginResult.InfoResultPayload.AccountInfo.TitleInfo.DisplayName;
        if (string.IsNullOrEmpty(displayName.text))  { displayName.text = "Player" + UnityEngine.Random.Range(1, 100000).ToString(); }
    }

    public void ChangeDisplayName()
    {
        if (displayName.text == loginResult.InfoResultPayload.AccountInfo.TitleInfo.DisplayName)
        {
            editDisplayNamePanel.SetActive(false);
            ShowLeaderboard(false);
        }
        else
        {
            NoticeUtils.ins.ShowLoadingAlert("Please wait");
            PlayFabClientAPI.UpdateUserTitleDisplayName(new UpdateUserTitleDisplayNameRequest() { DisplayName = displayName.text },
            (UpdateUserTitleDisplayNameResult) =>
            {
                NoticeUtils.ins.HideLoadingAlert();
                editDisplayNamePanel.SetActive(false);
                loginResult.InfoResultPayload.AccountInfo.TitleInfo.DisplayName = displayName.text;
                ShowLeaderboard(false);
            },
            (e) =>
            {
                NoticeUtils.ins.HideLoadingAlert();
                NoticeUtils.ins.ShowOneBtnAlert(e.ErrorMessage);
            });
        }
    }

    

    

    public void CloseHighscoresScreen()
    {
        GameObject screenToActivate = gameplayScreen;
        if (!GameplayScreen.ins.gameActive) { screenToActivate = gameoverScreen; }

        ScreenUtils.ActivateScreen(leaderboardScreen, screenToActivate, null, null);
    }

    public bool IsHighscoreBroken()
    {
        int score = int.Parse(bestScore.text);

        if (score > 0) 
        {
            if (loginResult.InfoResultPayload.PlayerStatistics.Count == 0)       { return true; }
            if (score > loginResult.InfoResultPayload.PlayerStatistics[0].Value) { return true; }
        }

        return false;
    }
}
