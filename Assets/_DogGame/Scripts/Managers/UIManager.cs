using UnityEngine;

public class UIManager : MonoBehaviour
{
    public GameObject joystick, levelClear, levelFail;
    public static UIManager Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
}
