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



    public string interstitialIdAndroid;
    private string interstitialTestIdAndroid = "ca-app-pub-3940256099942544/5224354917";

    public string interstitialIdIos;
    private string interstitialTestIdIos = "ca-app-pub-3940256099942544/1712485313";



    private RewardedAd rewardedAd;


    public void Start()
    {
        // When true all events raised by GoogleMobileAds will be raised
        // on the Unity main thread. The default value is false.
        //MobileAds.RaiseAdEventsOnUnityMainThread = true;


        // Initialize the Google Mobile Ads SDK.

        try
        {
            MobileAds.Initialize(initStatus => { });
        }
        catch (Exception e)
        {

            GameUtils.ins.AddDebugText(e.Message);
        }


        try
        {
            LoadRewardedAd();
        }
        catch (Exception e)
        {

            GameUtils.ins.AddDebugText(e.Message);
        }

        LoadInterstitialAd();
        //LoadRewardedAd();
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
        Debug.Log(adUnitId);

        GameUtils.ins.AddDebugText("LoadRewardedAd,adUnitId=" + adUnitId);

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
                GameUtils.ins.AddDebugText("error,"+error);
                return;
            }
            GameUtils.ins.AddDebugText("Rewarded ad loaded with response," + ad.GetResponseInfo());
            Debug.Log("Rewarded ad loaded with response : " + ad.GetResponseInfo());
            rewardedAd = ad;
        });
    }

    public bool IsRewardedAdReady()
    {
        if (rewardedAd != null && rewardedAd.CanShowAd()) { GameUtils.ins.AddDebugText("IsRewardedAdReady,ready"); return true; }
        GameUtils.ins.AddDebugText("IsRewardedAdReady,notready");
        return false;
    }

    public void ShowRewardedAd(Action onRewardRecieved)
    {
        GameUtils.ins.AddDebugText("ShowRewardedAd");
        rewardedAd.Show((Reward reward) => { GameUtils.ins.AddDebugText("onRewardRecieved"); onRewardRecieved?.Invoke(); });
        LoadRewardedAd();
    }







    private InterstitialAd interstitialAd;

    
    public void LoadInterstitialAd()
    {
        // Clean up the old ad before loading a new one.
        if (interstitialAd != null)
        {
            interstitialAd.Destroy();
            interstitialAd = null;
        }

        string adUnitId = string.Empty;

#if UNITY_ANDROID
        adUnitId = interstitialIdAndroid;
        if (isTestMode) { adUnitId = interstitialTestIdAndroid; }
#elif UNITY_IPHONE
        adUnitId = interstitialIdIos;
        if (isTestMode) { adUnitId = interstitialTestIdIos; }
#endif
        Debug.Log(adUnitId);


        Debug.Log("Loading the interstitial ad.");

        // create our request used to load the ad.
        var adRequest = new AdRequest();
        adRequest.Keywords.Add("unity-admob-sample");

        // send the request to load the ad.
        InterstitialAd.Load(adUnitId, adRequest,(InterstitialAd ad, LoadAdError error) =>
        {
            if (error != null || ad == null)
            {
                Debug.LogError("interstitial ad failed to load an ad " + "with error : " + error);
                return;
            }

            Debug.Log("Interstitial ad loaded with response : " + ad.GetResponseInfo());

            interstitialAd = ad;
        });
    }



    public bool IsInterstitialAdReady()
    {
        if (interstitialAd != null && interstitialAd.CanShowAd()) {return true;}
        return false;
    }




    public void ShowInterstitialAd()
    {
        interstitialAd.Show();
    }







}
