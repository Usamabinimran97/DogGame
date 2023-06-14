using UnityEngine;

public class AdsManager : MonoBehaviour
{
    public static AdsManager Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
}
