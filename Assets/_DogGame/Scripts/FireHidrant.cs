using System.Collections;
using SickscoreGames.HUDNavigationSystem;
using UnityEngine;

public class FireHidrant : MonoBehaviour
{
    private static readonly int Pee = Animator.StringToHash("Pee");
    
    private AnimatorStateInfo _stateInfo;
    private float _animationTime;

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("Player")) return;
        UIManager.Instance.joystick.SetActive(false);
        LevelManager.Instance.dogAnimator.SetBool(Pee, true);
        _stateInfo = LevelManager.Instance.dogAnimator.GetCurrentAnimatorStateInfo(0);
        _animationTime = _stateInfo.normalizedTime * _stateInfo.length;
        LevelManager.Instance.dogFollow.offset = new Vector3(-1, 0, 0);
        StartCoroutine(WaitTillAnimation(_animationTime));
        LevelManager.Instance.playerInput.move = Vector2.zero;
        
    }

    private IEnumerator WaitTillAnimation(float animationTime)
    {
        yield return new WaitForSecondsRealtime(6f);
        LevelManager.hidrantCount++;
        UIManager.Instance.currentHidrant.text = LevelManager.hidrantCount.ToString();
        LevelManager.Instance.OnLevelClear();
        UIManager.Instance.joystick.SetActive(!LevelManager.Instance.levelClear);
        LevelManager.Instance.dogFollow.offset = LevelManager.Instance.dogOffset;
        LevelManager.Instance.dogAnimator.SetBool(Pee, false);
        transform.GetComponent<BoxCollider>().enabled = false;
        transform.GetComponent<HUDNavigationElement>().enabled = false;
    }
}
