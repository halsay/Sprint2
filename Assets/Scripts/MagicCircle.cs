using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MagicCircle : MonoBehaviour {

    public string dialogue;
    private DialogueManager dMan;
    public string[] dialogLines;
    public string[] speakers;
    public GameObject Furry;
    public bool dialogEnd;
    private ScreenFader sf;
    private bool sceneSwitched;
    private CameraFollow cam;

    // Use this for initialization
    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
        sf = FindObjectOfType<ScreenFader>();
        //npc = this.GetComponent<GameObject>();
        dialogEnd = sceneSwitched = false;
        cam = FindObjectOfType<CameraFollow>();
    }

    private void Update()
    {
        if (dialogEnd && !dMan.dialogActive && !sceneSwitched)
        {
            StartCoroutine(switchScene());
            sceneSwitched = true;
            
        }
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Troll")
        {
            
            Furry.SetActive(true);
            Furry.GetComponent<Transform>().position = other.transform.position;
            other.gameObject.SetActive(false);

            cam.target1 = Furry.transform;
            if (!dMan.dialogActive)
            {
                dMan.dialogLines = dialogLines;
                dMan.speakers = speakers;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
                dialogEnd = true;
            }
        }
    }

    private IEnumerator switchScene()
    {
        yield return StartCoroutine(sf.FadeToBlack());
        SceneManager.LoadScene("end", LoadSceneMode.Single);
    }
}
