using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChoiceHolder : MonoBehaviour {
    public string choice1;
    public string choice2;
    public string choice3;

    private DialogueHolder dHod;
    private ChoiceManager cMan;

    // Use this for initialization
    void Start () {
        dHod = FindObjectOfType<DialogueHolder>();
        cMan = FindObjectOfType<ChoiceManager>();
    }
	
	// Update is called once per frame
	void Update () {
        if (dHod.choiceAppear)
        {
            cMan.choice1.text = choice1;
            cMan.choice2.text = choice2;
            cMan.choice3.text = choice3;
            cMan.dialogActive = true;
            dHod.choiceAppear = false;
        }
        if (cMan.chosen)
        {
            dHod.choiceAppear = false;
            dHod.makeChoice(cMan.choice);
            cMan.chosen = false;
            dHod.isTree = false;
        }



	}
}
