using UnityEngine;

public class Levels : MonoBehaviour
{
    public int totalHidrentsCount;
    public static Levels Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
}
