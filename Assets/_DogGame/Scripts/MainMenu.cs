using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public static MainMenu Instance;

    public Sprite musicOff, musicOn, soundOff, soundOn, hapticOn, hapticOff;
    public Image music, sound, haptic;
    private int _musicCount, _soundCount, _hapticCount;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }

    public void OnMusicButton()
    {
        if (_musicCount == 0)
        {
            music.sprite = musicOff;
            _musicCount = 1;
        }
        else
        {
            music.sprite = musicOn;
            _musicCount = 0;
        }
    }
    
    public void OnSoundButton()
    {
        if (_soundCount == 0)
        {
            sound.sprite = soundOff;
            _soundCount = 1;
        }
        else
        {
            sound.sprite = soundOn;
            _soundCount = 0;
        }
    }
    
    public void OnHapticButton()
    {
        if (_hapticCount == 0)
        {
            haptic.sprite = hapticOff;
            _hapticCount = 1;
        }
        else
        {
            haptic.sprite = hapticOn;
            _hapticCount = 0;
        }
    }
}
