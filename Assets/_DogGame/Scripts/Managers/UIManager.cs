
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public GameObject joystick, levelClear, levelFail;
    public Text currentHidrant, totalHidrant;
    public Text boneIndicatorText;
    public bool is500;
    public static UIManager Instance;
    public GameObject pausePanel, loadingPanel;
    
    private void Awake()
    {
        if (Instance == null)
            Instance = this;

    }
    
    private void Start()
    {
        boneIndicatorText.text = PlayerPrefs.GetInt("Bones").ToString();
    }

    public void OnPauseButtonPressed()
    {
        AdsManager.Instance.ShowInterstitialAd();
        joystick.SetActive(false);
        GameManager.Instance.hudCanvas.SetActive(false);
        pausePanel.SetActive(true);
        Time.timeScale = 0;
    }
    public void OnResumeButtonPressed()
    {
        pausePanel.SetActive(false);
        GameManager.Instance.hudCanvas.SetActive(true);
        joystick.SetActive(true);
        Time.timeScale = 1;
    }
    public void OnMainMenuButtonPressed()
    {
        loadingPanel.SetActive(true);
        SceneManager.LoadScene("_DogGame/Scenes/MainMenu");
    }

    public void RewardButtonPressed()
    {
        AdsManager.Instance.ShowRewardAd();
        is500 = true;
    }

    public void ReviveButtonPressed()
    {
        AdsManager.Instance.ShowRewardAd();
        is500 = false;
    }
}
