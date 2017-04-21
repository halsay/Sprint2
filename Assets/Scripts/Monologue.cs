using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monologue : MonoBehaviour {

    public string dialogue;
    public bool repeat;
    private DialogueManager dMan;


    public string[] dialogLines;
    public string[] speakers;

    private bool triggered;

    // Use this for initialization
    void Start()
    {
        triggered = false;
        dMan = FindObjectOfType<DialogueManager>();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.name == "Little")
        {
            if (!dMan.dialogActive && !triggered)
            {
                dMan.dialogLines = dialogLines;
                dMan.speakers = speakers;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
            }

        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag == "Little" || other.tag == "Middle" || other.tag== "Big")
        {
            if (!repeat)
            {
                triggered = true;
            }
        }
    }


}
