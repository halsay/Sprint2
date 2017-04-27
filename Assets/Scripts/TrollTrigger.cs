using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrollTrigger : MonoBehaviour {

    private DialogueManager dMan;
    public string[] dialogLines;
    public string[] speakers;
    public Animator troll;
    private bool dialogueFinished;
    public GameObject t;
    public bool little, middle, big = false;

    // Use this for initialization
    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
        dialogueFinished = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (dialogueFinished && !dMan.dialogActive)
        {
            troll.GetComponent<Troll>().canMove = true;
            //monster.canMove = true;
        }

        if (!dialogueFinished && middle && little && big)
        {
            t.SetActive(true);
            if (!dMan.dialogActive)
            {
                dMan.dialogLines = dialogLines;
                dMan.speakers = speakers;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
                dialogueFinished = true;
            }



        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Little")
        {
            little = true;
        }
        if (collision.tag == "Middle")
        {
            middle = true;
        }
        if (collision.tag == "Big")
        {
            big = true;
        }
        
        
    }

}
