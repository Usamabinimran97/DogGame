using System;
using System.Collections.Generic;
using StarterAssets;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    public Animator dogAnimator;
    public static int hidrantCount;
    public List<Levels> levelsList;
    public List<GameObject> levelsListGameObjects;
    public List<GameObject> fireHydrants;
    public StarterAssetsInputs playerInput;
    public static LevelManager Instance;
    private int _currentLevelNumber, _nextLevelNumber;
    private static readonly int Walk = Animator.StringToHash("Walk");

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

       private void Update()
       {
           if (playerInput.move.x != 0 || playerInput.move.y != 0)
           {
               dogAnimator.SetBool(Walk, true);
           }
           else
           {
               dogAnimator.SetBool(Walk, false);
           }
       }


       public void OnLevelClear()
       {
           if (hidrantCount < levelsList[_currentLevelNumber].totalHidrentsCount) return;
           UIManager.Instance.joystick.SetActive(false);
           UIManager.Instance.levelClear.SetActive(true);
           _currentLevelNumber++;
           _nextLevelNumber++;
           CountdownTimer.Instance.StopTimer();
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
