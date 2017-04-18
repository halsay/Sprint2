using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Trap : MonoBehaviour {
    private Animator anim;
    private DialogueManager dMan;
    public string[] dialogLines;
    public string[] speakers;
    public Animator troll;

    // Use this for initialization
    void Start () {
        anim = GetComponent<Animator>();
        dMan = FindObjectOfType<DialogueManager>();
	}
	
	// Update is called once per frame
	void Update () {
		
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
            }

            yield return new WaitForSeconds(1f);
            anim.SetTrigger("activated");
            GameObject.FindGameObjectWithTag("Little").SetActive(false);
            GameObject.FindGameObjectWithTag("Middle").SetActive(false);
            GameObject.FindGameObjectWithTag("Big").SetActive(false);
            yield return new WaitForSeconds(2f);
            troll.SetTrigger("appear");
            yield return new WaitForSeconds(2f);
            SceneManager.LoadScene("stage", LoadSceneMode.Single);

        }
    }
}
