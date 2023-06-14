using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public Animator dogAnimator;
    public static int hidrantCount;
    public static LevelManager Instance;
   
       private void Awake()
       {
           if (Instance == null)
               Instance = this;
       }


       public void OnLevelClear()
       {
           if (hidrantCount < Levels.Instance.totalHidrentsCount) return;
           UIManager.Instance.joystick.SetActive(false);
           UIManager.Instance.levelClear.SetActive(true);
       }

       public void OnLevelFail()
       {
           UIManager.Instance.joystick.SetActive(false);
           UIManager.Instance.levelFail.SetActive(true);
       }
}
