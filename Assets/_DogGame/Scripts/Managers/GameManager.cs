using System;
using SickscoreGames.HUDNavigationSystem;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public Camera mainCamera;
    public Transform playerTransform;
    public HUDNavigationSystem navSystem;
    public GameObject hudElement, hudCanvas;
    public static GameManager Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        
        
        
        
        
        
        
        
        

        navSystem.PlayerCamera = mainCamera;
        navSystem.PlayerController = playerTransform;
    }

    private void Start()
    {
        hudElement.SetActive(true);
        hudCanvas.SetActive(true);
    }
}
