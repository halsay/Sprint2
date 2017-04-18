using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monologue : MonoBehaviour {

    public string dialogue;
    private DialogueManager dMan;


    public string[] dialogLines;
    public string[] speakers;

    // Use this for initialization
    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.name == "Little")
        {
            if (!dMan.dialogActive)
            {
                dMan.dialogLines = dialogLines;
                dMan.speakers = speakers;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
            }

        }
    }


}
