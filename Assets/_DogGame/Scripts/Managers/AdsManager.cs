using System;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Serialization;

public class AdsManager : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [FormerlySerializedAs("_androidGameId")] [SerializeField]
    private string androidGameId;
    [FormerlySerializedAs("_iOSGameId")] [SerializeField]
    private string iOSGameId;
    [FormerlySerializedAs("_testMode")] [SerializeField]
    private bool testMode = false;
    private string _gameId;
    [FormerlySerializedAs("_androidInterstitialAdUnitId")] [SerializeField]
    private string androidInterstitialAdUnitId = "Interstitial_Android";
    [FormerlySerializedAs("_androidAdUnitId")] [SerializeField]
    private string androidRewardedAdUnitId = "Rewarded_Android";
    private string _adInterstitialUnitId;
    private string _adRewardedUnitId;
    
    [FormerlySerializedAs("_bannerPosition")] [SerializeField]
    private BannerPosition bannerPosition = BannerPosition.BOTTOM_CENTER;
    [FormerlySerializedAs("_androidBannerAdUnitId")] [SerializeField]
    private string androidBannerAdUnitId = "Banner_Android";

    private string _adBannerUnitId = null;
    public static AdsManager Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
            
            
        
            
        InitializeAds();
        _adInterstitialUnitId = androidInterstitialAdUnitId;
        _adRewardedUnitId = androidRewardedAdUnitId;
        _adBannerUnitId = androidBannerAdUnitId;
        
        // Set the banner position:
        Advertisement.Banner.SetPosition(bannerPosition);
    }
    

    public void InitializeAds()
    {
#if UNITY_IOS
            _gameId = _iOSGameId;
#elif UNITY_ANDROID
        _gameId = androidGameId;
#elif UNITY_EDITOR
            _gameId = _androidGameId; //Only for testing the functionality in the Editor
#endif
        if (!Advertisement.isInitialized && Advertisement.isSupported)
        {
            Advertisement.Initialize(_gameId, testMode, this);
        }
    }
    
    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");
    }
 
    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }

    #region Interstitial Ads
    public void LoadInterstitialAd()
    {
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.Log("Loading Ad: " + _adInterstitialUnitId);
        Advertisement.Load(_adInterstitialUnitId, this);
    }
 
    // Show the loaded content in the Ad Unit:
    public void ShowInterstitialAd()
    {
        // Note that if the ad content wasn't previously loaded, this method will fail
        LoadInterstitialAd();
        Debug.Log("Showing Ad: " + _adInterstitialUnitId);
        Advertisement.Show(_adInterstitialUnitId, this);
    }





    #endregion
   
    #region Reward Ads

    public void LoadRewardAd()
    {
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.Log("Loading Ad: " + _adRewardedUnitId);
        Advertisement.Load(_adRewardedUnitId, this);
    }
 
    // If the ad successfully loads, add a listener to the button and enable it:
    public void OnUnityAdsAdLoaded(string _adRewardedUnitId)
    {
        Debug.Log("Ad Loaded: " + _adRewardedUnitId);
        
    }
 
    // Implement a method to execute when the user clicks the button:
    public void ShowRewardAd()
    {
        // Disable the button:
        LoadRewardAd();
        // Then show the ad:
        Advertisement.Show(_adRewardedUnitId, this);
    }
 
    // Implement the Show Listener's OnUnityAdsShowComplete callback method to determine if the user gets a reward:
    public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState)
    {
        if (adUnitId.Equals(_adRewardedUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            if (UIManager.Instance.is500)
            {
                var score = PlayerPrefs.GetInt("Bones");
                score += 500;
                PlayerPrefs.SetInt("Bones", score);
            }
            else
            {
                CountdownTimer.Instance.ResetTimer();
                UIManager.Instance.levelFail.SetActive(false);
            }
            // Grant a reward.
        }
    }
 
    // Implement Load and Show Listener error callbacks:
    public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // Use the error details to determine whether to try to load another ad.
    }
 
    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message)
    {
        Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // Use the error details to determine whether to try to load another ad.
    }
 
    public void OnUnityAdsShowStart(string adUnitId) { }
    public void OnUnityAdsShowClick(string adUnitId) { }

    #endregion

    #region Banner Ads

    // Implement a method to call when the Load Banner button is clicked:
    public void LoadBanner()
    {
        // Set up options to notify the SDK of load events:
        BannerLoadOptions options = new BannerLoadOptions
        {
            loadCallback = OnBannerLoaded,
            errorCallback = OnBannerError
        };
 
        // Load the Ad Unit with banner content:
        Advertisement.Banner.Load(_adBannerUnitId, options);
    }

    private void OnBannerLoaded()
    {
        Debug.Log("Banner loaded");
        
    }
    
    // Implement code to execute when the load errorCallback event triggers:
    private void OnBannerError(string message)
    {
        Debug.Log($"Banner Error: {message}");
        // Optionally execute additional code, such as attempting to load another ad.
    }
    
    // Implement a method to call when the Show Banner button is clicked:
    public void ShowBannerAd()
    {
        // Set up options to notify the SDK of show events:
        BannerOptions options = new BannerOptions
        {
            clickCallback = OnBannerClicked,
            hideCallback = OnBannerHidden,
            showCallback = OnBannerShown
        };
 
        // Show the loaded Banner Ad Unit:
        Advertisement.Banner.Show(_adBannerUnitId, options);
    }
 
    // Implement a method to call when the Hide Banner button is clicked:
    private void HideBannerAd()
    {
        // Hide the banner:
        Advertisement.Banner.Hide();
    }
 
    void OnBannerClicked() { }
    void OnBannerShown() { }
    void OnBannerHidden() { }

    #endregion
    
}
