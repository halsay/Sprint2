using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Trap : MonoBehaviour {
    private Animator anim;
    private DialogueManager dMan;
    public string[] dialogLines, dialogLines2;
    public string[] speakers, speakers2;
    public GameObject troll;
    private bool d1Done,d2Done, sceneSwitched;
    private ScreenFader sf;
    // Use this for initialization
    void Start () {
        anim = GetComponent<Animator>();
        dMan = FindObjectOfType<DialogueManager>();
        sceneSwitched = d1Done = d2Done = false;
        sf = GameObject.FindGameObjectWithTag("Fader").GetComponent<ScreenFader>();
    }
	
	// Update is called once per frame
	void Update () {


        if (!dMan.dialogActive && d1Done && !d2Done)
        {
            troll.SetActive(true);
            dMan.dialogLines = dialogLines2;
            dMan.speakers = speakers2;
            dMan.currentLine = 0;
            dMan.ShowDialogue();
            d2Done = true;
        }
        if (d2Done && !dMan.dialogActive && !sceneSwitched)
        {
            sceneSwitched = true;
            StartCoroutine(fadeOut());
        }

    }

    private IEnumerator OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Little")
        {
            if (!dMan.dialogActive)
            {
                dMan.dialogLines = dialogLines;
                dMan.speakers = speakers;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
                d1Done = true;
            }

           // yield return new WaitForSeconds(1f);
            anim.SetTrigger("activated");
            GameObject.FindGameObjectWithTag("Little").SetActive(false);
            GameObject.FindGameObjectWithTag("Middle").SetActive(false);
            GameObject.FindGameObjectWithTag("Big").SetActive(false);
           // yield return new WaitForSeconds(2f);
            
            yield return new WaitForSeconds(2f);
            
            

        }
    }

    private IEnumerator fadeOut()
    {
        yield return StartCoroutine(sf.FadeToBlack());
        SceneManager.LoadScene("stage", LoadSceneMode.Single);
        //yield return StartCoroutine(sf.FadeToClear());
    }


}
