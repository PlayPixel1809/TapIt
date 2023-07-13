using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using System;

public class AdManager : MonoBehaviour
{
    public static AdManager ins;
    void Awake() { ins = this; }


    public bool isTestMode = true;


    public string  rewardedIdAndroid;
    private string rewardedTestIdAndroid = "ca-app-pub-3940256099942544/5224354917";

    public string  rewardedIdIos;
    private string rewardedTestIdIos = "ca-app-pub-3940256099942544/1712485313"; 


    
    private RewardedAd rewardedAd;


    public void Start()
    {
        // When true all events raised by GoogleMobileAds will be raised
        // on the Unity main thread. The default value is false.
        MobileAds.RaiseAdEventsOnUnityMainThread = true;


        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });

        LoadRewardedAd();
    }







    public void LoadRewardedAd()
    {
        string adUnitId = string.Empty;

#if UNITY_ANDROID
        adUnitId = rewardedIdAndroid;
        if (isTestMode) { adUnitId = rewardedTestIdAndroid; }
#elif UNITY_IPHONE
        adUnitId = rewardedIdIos;
        if (isTestMode) { adUnitId = rewardedTestIdIos; }
#endif


        // Clean up the old ad before loading a new one.
        if (rewardedAd != null)
        {
            rewardedAd.Destroy();
            rewardedAd = null;
        }

        
        var adRequest = new AdRequest();
        adRequest.Keywords.Add("unity-admob-sample");

        // send the request to load the ad.
        RewardedAd.Load(adUnitId, adRequest, (RewardedAd ad, LoadAdError error) =>
        {
            // if error is not null, the load request failed.
            if (error != null || ad == null)
            {
                Debug.LogError("Rewarded ad failed to load an ad " + "with error : " + error);
                return;
            }

            Debug.Log("Rewarded ad loaded with response : " + ad.GetResponseInfo());
            rewardedAd = ad;
        });
    }

    public bool IsRewardedAdReady()
    {
        if (rewardedAd != null && rewardedAd.CanShowAd()) { return true; }
        return false;
    }

    public void ShowRewardedAd(Action onRewardRecieved)
    {
        rewardedAd.Show((Reward reward) => { onRewardRecieved?.Invoke(); });
        LoadRewardedAd();
    }


    

















   
}
