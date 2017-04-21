using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class IntroManager : MonoBehaviour {

    public GameObject dBox;
    public Text dText;

    public bool dialogActive;

    public string[] dialogLines;
    public int currentLine = 0;

    private bool finished = false;
    private ScreenFader sf;

    public string scene = "main";

    // Use this for initialization
    void Start() {
        sf = GameObject.FindGameObjectWithTag("Fader").GetComponent<ScreenFader>();

    }
    // Update is called once per frame
    void Update()
    {
        /*if (!faded)
        {
            StartCoroutine(fadeIn());
            faded = true;
        }*/
        if (currentLine >= dialogLines.Length -1)
        {
            finished = true;
            Debug.Log("set to 0");

        }
        if (dialogActive && Input.GetKeyUp(KeyCode.Space) &&!finished)
        {
           
            
                currentLine++;
                
            
            Debug.Log(finished);
            
        }

        if (finished && Input.GetKeyUp(KeyCode.Space))
        {
            dBox.SetActive(false);
            dialogActive = false;
            StartCoroutine(fadeOut());
            
        }
        Debug.Log(dialogLines);


        dText.text = dialogLines[currentLine];


    }
    
    private IEnumerator fadeOut()
    {
        yield return StartCoroutine(sf.FadeToBlack());
        SceneManager.LoadScene(scene, LoadSceneMode.Single);

    }

    public void ShowBox(string dialogue)
    {
        dialogActive = true;
        dBox.SetActive(true);
        dText.text = dialogue;
    }

    public void ShowDialogue()
    {
        if (!finished)
        {
            dialogActive = true;
            dBox.SetActive(true);
        }
    }
}
