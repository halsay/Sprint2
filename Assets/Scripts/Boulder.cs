using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boulder : MonoBehaviour {

    public string dialogue;
    private DialogueManager dMan;
    public string[] dialogLines;
    public string[] speakers;
    public string[] dialogLines1;
    public string[] speakers1;

    public GameObject magicCircle;
    public GameObject boarder;
    public GoBack goBack;
    public bool round3;

    private bool dialogDone;

    //private Animator anim;
    private BoxCollider2D box;

    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
       // anim = GetComponent<Animator>();
        dialogDone = false;
        box = GetComponent<BoxCollider2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if (dialogDone)
        {
            //anim.SetTrigger("fall");
            //magicCircle.SetActive(true);
            //this.gameObject.SetActive(false);
            StartCoroutine(destroy());
        }
            
    }

    void OnTriggerStay2D(Collider2D other)
    {
        if (Input.GetKeyUp(KeyCode.Space))
        {
            if (other.gameObject.name == "Little" && !dialogDone)
            {
                dMan.isTree = true;
                if (!dMan.dialogActive)
                {
                    if (goBack.done)
                    {
                        dMan.dialogLines = dialogLines;
                        dMan.speakers = speakers;
                        dMan.currentLine = 0;
                        dMan.ShowDialogue();
                        dialogDone = true;
                    }
                    if (!goBack.done)
                    {
                        dMan.dialogLines = dialogLines1;
                        dMan.speakers = speakers1;
                        dMan.currentLine = 0;
                        dMan.ShowDialogue();
                    }
                    if (round3)
                        boarder.SetActive(false);
                }
            }
        }
    }

    private IEnumerator destroy()
    {
        while (dMan.dialogActive)
        {
            yield return null;
        }
        GetComponent<SpriteRenderer>().enabled = false;
        box.enabled = false;
        magicCircle.SetActive(true);
    }
}
