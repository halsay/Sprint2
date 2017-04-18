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

    private GameObject pMov;
    private CameraSwitch camSwitch;
    private PlayerController pCon;

    // Use this for initialization
    void Start()
    {
        isTree = false;
        pMov = GameObject.FindGameObjectWithTag("Little");
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
            pMov.GetComponent<PlayerMovement>().canMove = false;
            if (switchCam)
            {
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
            }
            if (Input.GetKeyDown(KeyCode.Space))
                currentLine++;
        }

        if(currentLine >= dialogLines.Length)
        {
            dBox.SetActive(false);
            dialogActive = false;
            pMov.GetComponent<PlayerMovement>().canMove = true;
            currentLine = 0;
            if (switchCam)
                camSwitch.state = pCon.state;
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
