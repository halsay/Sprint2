using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour {

    public GameObject dBox;
    public Text dText;
    public Text cText;

    public bool dialogActive;
    public bool isTree;

    public string[] dialogLines;
    public string[] speakers;
    public int currentLine;

    public bool switchCam = false;

    private GameObject little,middle,big;
    private CameraSwitch camSwitch;
    private PlayerController pCon;

    // Use this for initialization
    void Start()
    {
        isTree = false;
        little = GameObject.FindGameObjectWithTag("Little");
        middle = GameObject.FindGameObjectWithTag("Middle");
        big = GameObject.FindGameObjectWithTag("Big");
        if (switchCam)
        {
            camSwitch = FindObjectOfType<CameraSwitch>();
            pCon = FindObjectOfType<PlayerController>();
        }

    }
	// Update is called once per frame
	void Update () {

        if (dialogActive) 
        {
            little.GetComponent<PlayerMovement>().canMove = false;
            if (switchCam)
            {

                middle.GetComponent<PlayerMovement>().canMove = false;
                big.GetComponent<PlayerMovement>().canMove = false;
                if (speakers[currentLine] == "Little")
                {
                    camSwitch.state = 0;
                }
                if (speakers[currentLine] == "Middle")
                {
                    camSwitch.state = 1;
                }
                if (speakers[currentLine] == "Big Bold")
                {
                    camSwitch.state = 2;
                }
                if (speakers[currentLine] == "Troll")
                {
                    camSwitch.state = 3;
                }
            }
            if (Input.GetKeyDown(KeyCode.Space))
                currentLine++;
        }

        if(currentLine >= dialogLines.Length || Input.GetKeyDown(KeyCode.Escape))
        {
            dBox.SetActive(false);
            dialogActive = false;
            
            currentLine = 0;
            if (switchCam)
            {
                if (pCon.state == 0)
                    little.GetComponent<PlayerMovement>().canMove = true;
                if (pCon.state == 1)
                    middle.GetComponent<PlayerMovement>().canMove = true;
                if (pCon.state == 2)
                    big.GetComponent<PlayerMovement>().canMove = true;
                camSwitch.state = pCon.state;
            }
            if (!switchCam)
            {
                little.GetComponent<PlayerMovement>().canMove = true;
            }
                
        }

        dText.text = dialogLines[currentLine];
        cText.text = speakers[currentLine];

        
        
    }



    public void ShowDialogue()
    {
        dialogActive = true;
        dBox.SetActive(true);
    }
}
