using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour {

    public bool brownActive = true;
    public bool whiteActive = true;
    public bool blackActive = true;
    private bool deactivated = false;
    private GameObject doorControl;

	// Use this for initialization
	void Start () {
        doorControl = GameObject.FindGameObjectWithTag("DoorControl");

    }
	
	// Update is called once per frame
	void Update () {
		if (!brownActive && !whiteActive && !blackActive)
        {
            doorControl.SetActive(false);
        }
	}
}
