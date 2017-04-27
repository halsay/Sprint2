using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class switchUI : MonoBehaviour {
    public GameObject cBox;
    private PlayerController pCon;
    public Text choice1;
    public Text choice2;
    public Text choice3;
    // Use this for initialization
    void Start () {
        pCon = FindObjectOfType<PlayerController>();
	}
	
	// Update is called once per frame
	void Update () {
        switch (pCon.state)
        {
            case 0:
                choice1.fontSize = 22;
                choice2.fontSize = 18;
                choice3.fontSize = 18;
                break;

            case 1:
                choice1.fontSize = 18;
                choice2.fontSize = 22;
                choice3.fontSize = 18;
                break;

            case 2:
                choice1.fontSize = 18;
                choice2.fontSize = 18;
                choice3.fontSize = 22;
                break;
        }
    }
}
