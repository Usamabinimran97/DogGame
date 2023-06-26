using System.Collections;
using SickscoreGames.HUDNavigationSystem;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AI;

public class FireHidrant : MonoBehaviour
{
    private static readonly int Pee = Animator.StringToHash("Pee");
    
    private AnimatorStateInfo _stateInfo;
    private float _animationTime;
    private Transform _target; // Reference to the trigger's transform
    private bool _isTrue;
    
    public float speed = 2f; // Speed at which the dog moves towards the trigger

    private void Start()
    {
        _target = transform;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("Player")) return;
        UIManager.Instance.joystick.SetActive(false);
        _isTrue = true;
        LevelManager.Instance.dogAnimator.SetBool(Pee, true);
        _stateInfo = LevelManager.Instance.dogAnimator.GetCurrentAnimatorStateInfo(0);
        _animationTime = _stateInfo.normalizedTime * _stateInfo.length;
        LevelManager.Instance.dogTransform.GetComponent<NavMeshAgent>().enabled = false;
        LevelManager.Instance.dogTransform.GetComponent<DogFollow>().enabled = false;
        LevelManager.Instance.dogFollow.offset = new Vector3(-1, 0, 0);
        StartCoroutine(WaitTillAnimation(_animationTime));
        LevelManager.Instance.playerInput.move = Vector2.zero;
        StartCoroutine(WaitToOffParticle());

    }

    private IEnumerator WaitToOffParticle()
    {
        yield return new WaitForSecondsRealtime(4f);
        LevelManager.Instance.peeParticle.Stop(true);
    }

    private IEnumerator WaitTillAnimation(float animationTime)
    {
        yield return new WaitForSecondsRealtime(1f);
        LevelManager.Instance.peeParticle.Play(true);
        yield return new WaitForSecondsRealtime(5f);
        _isTrue = false;
        LevelManager.Instance.dogTransform.GetComponent<NavMeshAgent>().enabled = true;
        LevelManager.Instance.dogTransform.GetComponent<DogFollow>().enabled = true;
        LevelManager.hidrantCount++;
        UIManager.Instance.currentHidrant.text = LevelManager.hidrantCount.ToString();
        LevelManager.Instance.OnLevelClear();
        UIManager.Instance.joystick.SetActive(!LevelManager.Instance.levelClear);
        LevelManager.Instance.dogFollow.offset = LevelManager.Instance.dogOffset;
        LevelManager.Instance.dogAnimator.SetBool(Pee, false);
        transform.GetComponent<BoxCollider>().enabled = false;
        transform.GetComponent<HUDNavigationElement>().enabled = false;
    }
    

    private void Update()
    {
        if (!_isTrue) return;
        
        // Calculate the direction from the dog to the trigger
        var position = LevelManager.Instance.dogTransform.position;
        var direction = _target.position - position;

        // Normalize the direction to get a unit vector
        direction.Normalize();

        // Calculate the new position for the dog using Lerp
        var newPosition = position + direction * speed * Time.deltaTime;

        // Move the dog towards the new position using Lerp
        position = Vector3.Lerp(position, newPosition, speed * Time.deltaTime);
        LevelManager.Instance.dogTransform.rotation = transform.rotation;
        LevelManager.Instance.dogTransform.position = position;
    }
}
