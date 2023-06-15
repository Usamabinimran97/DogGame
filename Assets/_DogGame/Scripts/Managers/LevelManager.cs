using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    public Animator dogAnimator;
    public static int hidrantCount;
    public List<Levels> levelsList;
    public List<GameObject> levelsListGameObjects;
    public static LevelManager Instance;
    private int _currentLevelNumber, _nextLevelNumber;
   
       private void Awake()
       {
           if (Instance == null)
               Instance = this;
       }

       private void Start()
       {
           if (!PlayerPrefs.HasKey("LevelNumber"))
           {
               _currentLevelNumber = 0;
               _nextLevelNumber = 1;
               PlayerPrefs.SetInt("LevelNumber", _currentLevelNumber);
           }
           else
           {
               _currentLevelNumber = PlayerPrefs.GetInt("LevelNumber");
               _nextLevelNumber = _currentLevelNumber + 1;
           }
           levelsListGameObjects[_currentLevelNumber].SetActive(true);
           UIManager.Instance.totalHidrant.text = levelsList[_currentLevelNumber].totalHidrentsCount.ToString();
       }


       public void OnLevelClear()
       {
           if (hidrantCount < levelsList[_currentLevelNumber].totalHidrentsCount) return;
           UIManager.Instance.joystick.SetActive(false);
           UIManager.Instance.levelClear.SetActive(true);
           _currentLevelNumber++;
           _nextLevelNumber++;
           PlayerPrefs.SetInt("LevelNumber", _currentLevelNumber);
       }

       public void OnLevelFail()
       {
           UIManager.Instance.joystick.SetActive(false);
           UIManager.Instance.levelFail.SetActive(true);
       }

       public void OnNextButtonPressed()
       {
           SceneManager.LoadScene("_DogGame/Scenes/Gameplay");
       }
       
       public void OnRestartButtonPressed()
       {
           SceneManager.LoadScene("_DogGame/Scenes/Gameplay");
       }
}
