using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class UnityAds : MonoBehaviour, IUnityAdsListener
{
    public static UnityAds ins;
    void Awake() { ins = this; }

    public GameplayScreen gameplayScreen;


    public bool testMode;

    public string androidId;
    public string iosId;

    public Action<ShowResult> onRewardedAdFinish;

    void Start()
    {
        Advertisement.AddListener(this);

        Advertisement.Initialize(androidId, testMode);
        StartCoroutine("ShowBanner");
    }

    IEnumerator ShowBanner()
    {
        while (!Advertisement.Banner.isLoaded) { yield return new WaitForSeconds(1); }
        Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
        Advertisement.Banner.Show();
    }


    void OnGameOver()
    {
        if (Advertisement.IsReady("rewardedVideo"))
        {
            Advertisement.Show("rewardedVideo");
        }
    }

    public bool IsRewardedAdReady() { return Advertisement.IsReady("rewardedVideo"); }

    public void ShowRewardedAd(Action<ShowResult> onRewardedAdFinish)
    { 
        this.onRewardedAdFinish = onRewardedAdFinish;
        Advertisement.Show("rewardedVideo"); 
    }

    public void OnUnityAdsReady(string surfacingId) {}

    public void OnUnityAdsDidFinish(string surfacingId, ShowResult showResult)
    {
        onRewardedAdFinish?.Invoke(showResult);
        onRewardedAdFinish = null;
    }

    public void OnUnityAdsDidError(string message){}

    public void OnUnityAdsDidStart(string surfacingId){}
}
