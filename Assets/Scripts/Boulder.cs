using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boulder : MonoBehaviour {

    public string dialogue;
    private DialogueManager dMan;
    public string[] dialogLines;
    public string[] speakers;

    private bool dialogDone;

    private GameObject boulder;

    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
        boulder = this.gameObject; 
        dialogDone = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (dialogDone)
        {
            boulder.SetActive(false);
        }
            
    }

    void OnTriggerStay2D(Collider2D other)
    {
        if (Input.GetKeyUp(KeyCode.Space))
        {
            if (other.gameObject.name == "Little")
            {
                dMan.isTree = true;
                if (!dMan.dialogActive)
                {
                    dMan.dialogLines = dialogLines;
                    dMan.speakers = speakers;
                    dMan.currentLine = 0;
                    dMan.ShowDialogue();
                    dialogDone = true;
                }
            }
        }
    }
}
