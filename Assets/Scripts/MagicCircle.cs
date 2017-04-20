using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MagicCircle : MonoBehaviour {

    public string dialogue;
    private DialogueManager dMan;
    public string[] dialogLines;
    public string[] speakers;

    // Use this for initialization
    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
        //npc = this.GetComponent<GameObject>();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Troll")
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
