using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boulder : MonoBehaviour {

    public string dialogue;
    private DialogueManager dMan;
    public string[] dialogLines;
    public string[] speakers;
    public GameObject magicCircle;

    private bool dialogDone;

    private Animator anim;
    private BoxCollider2D box;

    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
        anim = GetComponent<Animator>();
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
                    dMan.dialogLines = dialogLines;
                    dMan.speakers = speakers;
                    dMan.currentLine = 0;
                    dMan.ShowDialogue();
                    dialogDone = true;
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
