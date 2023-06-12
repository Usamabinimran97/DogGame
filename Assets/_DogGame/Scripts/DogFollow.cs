using UnityEngine;
using UnityEngine.AI;

public class DogFollow : MonoBehaviour
{
    public Transform target; // The player's transform
    public Vector3 offset; // The offset between the dog and the player

    private NavMeshAgent _agent;

    private void Start()
    {
        _agent = GetComponent<NavMeshAgent>();
    }

    private void Update()
    {
        // Calculate the target position with the offset
        var targetPosition = target.position + offset;

        // Set the agent's destination to the target position
        _agent.SetDestination(targetPosition);
    }
}