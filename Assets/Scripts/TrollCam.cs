using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrollCam : MonoBehaviour {
    private CameraSwitch cs;
    private int state;
    private PlayerController pCon;
	// Use this for initialization
	void Start () {
        cs = FindObjectOfType<CameraSwitch>();
        pCon = FindObjectOfType<PlayerController>();
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            
            cs.state = 3;
        }
        if (Input.GetKeyUp(KeyCode.Q))
        {
            cs.state = pCon.state;
        }
	}
}
