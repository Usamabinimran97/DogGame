using UnityEngine;

public class Levels : MonoBehaviour
{
    public static Levels Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
}
