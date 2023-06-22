using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public GameObject joystick, levelClear, levelFail;
    public TextMeshProUGUI currentHidrant, totalHidrant;
    public Text boneIndicatorText;
    public static UIManager Instance;
    public GameObject pausePanel, loadingPanel;
    
    private void Awake()
    {
        if (Instance == null)
            Instance = this;

    }

    public void OnPauseButtonPressed()
    {
        pausePanel.SetActive(true);
        Time.timeScale = 0;
    }
    public void OnResumeButtonPressed()
    {
        pausePanel.SetActive(false);
        Time.timeScale = 1;
    }
    public void OnMainMenuButtonPressed()
    {
        loadingPanel.SetActive(true);
        SceneManager.LoadScene("_DogGame/Scenes/MainMenu");
    }
}
