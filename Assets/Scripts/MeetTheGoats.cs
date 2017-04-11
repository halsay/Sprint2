using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeetTheGoats : MonoBehaviour {

    public string dialogue;
    public GameObject Middle;
    public GameObject Big;
    private DialogueManager dMan;
    private bool met = false;

    private GameObject npc;
    public string[] dialogLines;
    public string[] speakers;

    // Use this for initialization
    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
        //npc = this.GetComponent<GameObject>();
    }

    // Update is called once per frame
    void Update()
    {
        if (met && !dMan.dialogActive)
        {
            this.gameObject.SetActive(false);
            Middle.SetActive(true);
            Big.SetActive(true);
        }
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
            met = true;
        }
    }

}
