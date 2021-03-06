﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueHolder : MonoBehaviour {

    public string dialogue;
    private DialogueManager dMan;

    public bool isTree;
    public bool onlyOnce;

    public string[] dialogLines;
    public string[] dialogLinesA;
    public string[] dialogLinesB;
    public string[] dialogLinesC;
    public string[] speakers;
    public string[] speakersA;
    public string[] speakersB;
    public string[] speakersC;

    public bool choiceAppear;

    // Use this for initialization
    void Start () {
        dMan = FindObjectOfType<DialogueManager>();
        choiceAppear = false;
	}
	
	// Update is called once per frame
	void Update () {
        if (dMan.currentLine == dialogLines.Length - 1 && isTree && dMan.isTree)
        {
            choiceAppear = true;
        }
    }

    void OnTriggerStay2D(Collider2D other)
    {
        if(other.gameObject.name == "Little")
        {
            dMan.isTree = true;
            if (Input.GetKeyUp(KeyCode.Space))
            {
                if(!dMan.dialogActive)
                {
                    dMan.dialogLines = dialogLines;
                    dMan.speakers = speakers;
                    dMan.currentLine = 0;
                    dMan.ShowDialogue();
                }
            }
        }
    }
    public void makeChoice(int num)
    {
        switch (num)
        {
            case 1:
                dMan.dialogLines = dialogLinesA;
                dMan.speakers = speakersA;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
                break;
            case 2:
                dMan.dialogLines = dialogLinesB;
                dMan.speakers = speakersB;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
                break;
            case 3:
                dMan.dialogLines = dialogLinesC;
                dMan.speakers = speakersC;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
                break;
        }
    }

}
