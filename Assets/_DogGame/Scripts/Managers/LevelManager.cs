using System.Collections.Generic;
using StarterAssets;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;

public class LevelManager : MonoBehaviour
{
    public Animator dogAnimator;
    public static int hidrantCount;
    public List<Levels> levelsList;
    public List<GameObject> levelsListGameObjects;
    public List<GameObject> fireHydrants;
    public StarterAssetsInputs playerInput;
    public float minimumDistance = 5f;
    public Transform player;
    public DogFollow dogFollow;
    [FormerlySerializedAs("_dogOffset")] public Vector3 dogOffset;
    public static LevelManager Instance;
    public bool levelClear;
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
           dogOffset = dogFollow.offset;
           hidrantCount = 0;
           CountdownTimer.Instance.totalTime += (_currentLevelNumber * 30);
           foreach (var currentObject in fireHydrants)
           {
               // Calculate the distance between the player and the object
               var distance = Vector3.Distance(currentObject.transform.position, player.position);

               // Compare the distance to the minimum distance threshold
               // Enable the object
               currentObject.SetActive(distance < minimumDistance);
           }
           
           
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
           levelClear = true;
           UIManager.Instance.joystick.SetActive(false);
           UIManager.Instance.levelClear.SetActive(true);
           var score = PlayerPrefs.GetInt("Bones");
           score += 100;
           PlayerPrefs.SetInt("Bones", score);
           if (_currentLevelNumber == levelsList.Count - 1)
           {
               _currentLevelNumber = 0;
               _nextLevelNumber = 1;
           }
           else
           {
               _currentLevelNumber++;
               _nextLevelNumber++;   
           }
           GameManager.Instance.hudCanvas.SetActive(false);
           CountdownTimer.Instance.StopTimer();
           PlayerPrefs.SetInt("LevelNumber", _currentLevelNumber);
       }

       public void OnLevelFail()
       {
           UIManager.Instance.joystick.SetActive(false);
           UIManager.Instance.levelFail.SetActive(true);
           GameManager.Instance.hudCanvas.SetActive(false);
           var score = PlayerPrefs.GetInt("Bones");
           score += 20;
           PlayerPrefs.SetInt("Bones", score);
       }

       public void OnNextButtonPressed()
       {
           levelClear = false;
           SceneManager.LoadScene("_DogGame/Scenes/Gameplay");
       }
       
       public void OnRestartButtonPressed()
       {
           SceneManager.LoadScene("_DogGame/Scenes/Gameplay");
       }
}
