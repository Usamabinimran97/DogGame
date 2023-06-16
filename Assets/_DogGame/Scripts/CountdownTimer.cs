using TMPro;
using UnityEngine;

public class CountdownTimer : MonoBehaviour
{
    public float totalTime = 60f; // Total time in seconds
    private float _currentTime;
    private bool _isRunning = false;
    private TextMeshProUGUI _timerText;
    public static CountdownTimer Instance;

    private void Awake()
    {
        if (Instance = null)
            Instance = this;
    }

    private void Start()
    {
        _timerText = GetComponent<TextMeshProUGUI>();
        StartTimer();
    }

    private void Update()
    {
        if (_isRunning)
        {
            _currentTime -= Time.deltaTime;
            if (_currentTime <= 0f)
            {
                _currentTime = 0f;
                _isRunning = false;
                LevelManager.Instance.OnLevelFail();
                // Timer finished, do something
                Debug.Log("Timer finished!");
            }

            UpdateTimerText();
        }
    }

    public void StartTimer()
    {
        _currentTime = totalTime;
        _isRunning = true;
    }

    public void StopTimer()
    {
        _isRunning = false;
    }

    private void UpdateTimerText()
    {
        int minutes = Mathf.FloorToInt(_currentTime / 60f);
        int seconds = Mathf.FloorToInt(_currentTime % 60f);
        _timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }
}