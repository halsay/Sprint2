using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Intro : MonoBehaviour {

    public string dialogue;
    private IntroManager dMan;


    public string[] dialogLines;

    // Use this for initialization
    void Start()
    {
        dMan = FindObjectOfType<IntroManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyUp(KeyCode.Space))
        {

            if (!dMan.dialogActive)
            {
                dMan.dialogLines = dialogLines;
                dMan.currentLine = 0;
                dMan.ShowDialogue();
            }
        }
    }

   
            
   
}
