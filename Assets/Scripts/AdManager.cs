using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using System;

public class AdManager : MonoBehaviour
{
    public static AdManager ins;
    void Awake() { ins = this; }

    private BannerView bannerView;

    private InterstitialAd interstitial;

    private RewardedAd rewarded;


    public bool isTestMode = true;

    [SerializeField] Text testAdTxt;
    string adTxt;

    private string testBannerId = "ca-app-pub-3940256099942544/6300978111";
    private string testInterstitialId = "ca-app-pub-3940256099942544/1033173712";
    private string testRewardAdId = "ca-app-pub-3940256099942544/5224354917";

    public string androidBannerId;
    public string androidInterstitialId;
    public string androidRewardAdId;
    
    public string iphoneBannerId;
    public string iphoneInterstitialId;
    public string iphoneRewardAdId;

    double rewards = 1;


    public void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });

        //requestInterstitial();
        reqRewardAds();

        //ShowRewardedAds(null);
    }

    private void RequestBanner()
    {
        string adUnitId;

        if (isTestMode)
        {
            adUnitId = testBannerId;
        }
        else
        {
#if UNITY_ANDROID
            adUnitId = androidBannerId;
#elif UNITY_IPHONE
            adUnitId = iphoneBannerId;
#else
        adUnitId = "unexpected_platform";
#endif
        }


        bannerView = new BannerView(adUnitId, AdSize.Banner, 0, 50);
        Debug.Log("unit id is : " + adUnitId);

        // this.bannerView.OnAdLoaded += this.HandleOnAdLoaded;
        // this.bannerView.OnAdFailedToLoad += this.HandleOnAdFailedToLoad;
        // this.bannerView.OnAdOpening += this.HandleOnAdOpened;
        // this.bannerView.OnAdClosed += this.HandleOnAdClosed;


        AdRequest request = new AdRequest.Builder().Build();
        bannerView.LoadAd(request);
        // testAdTxt.text = "banner is loaded";
    }

    public void ShowBannerAds()
    {
        // DestroyAll();
        RequestBanner();
    }

    public void HideBannerAds()
    {
        if (bannerView != null) { bannerView.Hide(); }
    }




    private void requestInterstitial()
    {
        string adUnitId;

        if (isTestMode)
        {
            adUnitId = testInterstitialId;
        }
        else
        {
#if UNITY_ANDROID
            adUnitId = androidInterstitialId;
#elif UNITY_IPHONE
            adUnitId = iphoneInterstitialId;
#else
        adUnitId = "unexpected_platform";
#endif
        }

        interstitial = new InterstitialAd(adUnitId);
        this.interstitial.OnAdFailedToLoad += this.HandleOnAdFailedToLoad;

        AdRequest request = new AdRequest.Builder().Build();

        this.interstitial.LoadAd(request);

    }

    public void ShowInterstitialAd()
    {
        if (this.interstitial.IsLoaded())
        {
            // testAdTxt.text = "interstitial is loaded";
            interstitial.Show();
        }
        // else
        // testAdTxt.text = "interstitial is not loaded";
    }








    void reqRewardAds()
    {
        string adUnitId;

        if (isTestMode)
        {
            adUnitId = testRewardAdId;
        }
        else
        {
#if UNITY_ANDROID
            adUnitId = androidRewardAdId;
#elif UNITY_IPHONE
            adUnitId = iphoneRewardAdId;
#else
        adUnitId = "unexpected_platform";
#endif
        }

        rewarded = new RewardedAd(adUnitId);
        rewarded.OnAdClosed += this.HandleOnAdClosed;
        rewarded.OnUserEarnedReward += HandleUserEarnedReward;

        AdRequest request = new AdRequest.Builder().Build();
        rewarded.LoadAd(request);
   }

    public bool IsRewardedAdLoaded()
    {
        return rewarded.IsLoaded();
    }

    private Action onRewardedAdViewed;
    public void ShowRewardedAds(Action onAdViewed)
    {
        if (rewarded.IsLoaded())
        {
            rewarded.Show();
            onRewardedAdViewed = onAdViewed;
        }
    }



    private void HandleOnAdLoaded(object sender, EventArgs args)
    {
        Debug.Log("HandleAdLoaded event received");
    }

    private void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        Debug.Log("HandleFailedToReceiveAd event received with message: "
                            + args.LoadAdError.GetMessage());
        // testAdTxt.text = args.Message;
    }

    private void HandleOnAdOpened(object sender, EventArgs args)
    {
        Debug.Log("HandleAdOpened event received");
    }

    private void HandleOnAdClosed(object sender, EventArgs args)
    {
        Debug.Log("HandleAdClosed event received");
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        Debug.Log("HandleUserEarnedReward");
        onRewardedAdViewed?.Invoke();
        /*string type = args.Type;
        double amount = rewards;
        testAdTxt.text = "REWARDS : " + amount;*/
    }

    void DestroyAll()
    {
        if (bannerView != null)
        {
            bannerView.Destroy();
            bannerView = null;
        }
        else if (interstitial != null)
        {
            interstitial.Destroy();
            interstitial = null;
        }
        else if (rewarded != null)
        {
            rewarded = null;
        }
    }
}
