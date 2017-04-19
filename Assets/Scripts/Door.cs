using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour {

    public bool brownPressed;
    public bool whitePressed;
    public bool blackPressed;
    private GameObject[] brownDoors, whiteDoors, blackDoors;
    public bool multiBrown, multiWhite, multiBlack;
    

	// Use this for initialization
	void Start () {
        brownDoors = GameObject.FindGameObjectsWithTag("BrownDoor");
        whiteDoors = GameObject.FindGameObjectsWithTag("WhiteDoor");
        blackDoors = GameObject.FindGameObjectsWithTag("BlackDoor");
        brownPressed = false;
        whitePressed = false;
        blackPressed = false;
    }
	
	// Update is called once per frame
	void Update () {
		if (brownPressed)
        {
            for (int i = 0; i < brownDoors.Length; i++)
            {
                brownDoors[i].SetActive(false);

            }
        }

        if (!brownPressed)
        {
            for (int i = 0; i < brownDoors.Length; i++)
            {
                brownDoors[i].SetActive(true);

            }
        }

        if (whitePressed)
        {
            for (int i = 0; i < whiteDoors.Length; i++)
            {
                whiteDoors[i].SetActive(false);

            }
        }

        if (!whitePressed)
        {
            for (int i = 0; i < whiteDoors.Length; i++)
            {
                whiteDoors[i].SetActive(true);

            }
        }
        if (blackPressed)
        {
            for (int i = 0; i < blackDoors.Length; i++)
            {
                blackDoors[i].SetActive(false);

            }
        }

        if (!blackPressed)
        {
            for (int i = 0; i < blackDoors.Length; i++)
            {
                blackDoors[i].SetActive(true);

            }
        }
    }
}
