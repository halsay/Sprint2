using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class ChoiceManager : MonoBehaviour {
    public GameObject cBox;
    public Text choice1;
    public Text choice2;
    public Text choice3;

    private int choice = 1;
    public bool chosen;

    public bool dialogActive;


    // Use this for initialization
    void Start () {
        dialogActive = false;
        chosen = false;
	}
	
	// Update is called once per frame
	void Update () {
        if (dialogActive)
            cBox.SetActive(true);
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            if (choice >= 3)
                choice = 1;
            else
                choice++;
        }
            
        if (Input.GetKeyDown(KeyCode.UpArrow))
            if (choice <= 1)
                choice = 3;
            else
                choice--;
        switch (choice)
        {
            case 1:
                choice1.fontSize = 22;
                choice2.fontSize = 18;
                choice3.fontSize = 18;
                break;

            case 2:
                choice1.fontSize = 18;
                choice2.fontSize = 22;
                choice3.fontSize = 18;
                break;

            case 3:
                choice1.fontSize = 18;
                choice2.fontSize = 18;
                choice3.fontSize = 22;
                break;

        }

        if (Input.GetKeyDown(KeyCode.Space))
        {
            chosen = true;
            cBox.SetActive(false);
            dialogActive = false;
        }

    }


}
