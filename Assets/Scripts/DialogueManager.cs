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

    private GameObject pMov;

    // Use this for initialization
    void Start()
    {
        isTree = false;
        pMov = GameObject.FindGameObjectWithTag("Little");
    }
	// Update is called once per frame
	void Update () {
        if (dialogActive) 
        {
            pMov.GetComponent<PlayerMovement>().canMove = false;
            if (Input.GetKeyDown(KeyCode.Space))
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



    public void ShowDialogue()
    {
        dialogActive = true;
        dBox.SetActive(true);
    }
}
