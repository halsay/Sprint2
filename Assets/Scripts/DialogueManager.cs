using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour {

    public GameObject dBox;
    public Text dText;
    public Text cText;

    public bool dialogActive;

    public string[] dialogLines;
    public string[] speakers;
    public int currentLine;

    private GameObject pMov;

    // Use this for initialization
    void Start()
    {
        pMov = GameObject.FindGameObjectWithTag("Little");
    }
	// Update is called once per frame
	void Update () {
        if (dialogActive && Input.GetKeyDown(KeyCode.Space)) 
        {
            currentLine++;
        }

        if(currentLine >= dialogLines.Length)
        {
            dBox.SetActive(false);
            dialogActive = false;
            pMov.GetComponent<PlayerMovement>().canMove = true;
            currentLine = 0;
        }

        dText.text = dialogLines[currentLine];
        cText.text = speakers[currentLine];
    }

    public void ShowBox(string dialogue)
    {
        dialogActive = true;
        dBox.SetActive(true);

        dText.text = dialogue;
        pMov.GetComponent<PlayerMovement>().canMove = false;
    }

    public void ShowDialogue()
    {
        dialogActive = true;
        dBox.SetActive(true);
        pMov.GetComponent<PlayerMovement>().canMove = false; 
    }
}
