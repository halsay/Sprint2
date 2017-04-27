using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnableBox : MonoBehaviour {

    public  GameObject box;
    private DialogueManager dMan;

	// Use this for initialization
	void Start () {
        dMan = FindObjectOfType<DialogueManager>();
	}
	
	// Update is called once per frame
	void Update () {
		if (!dMan.dialogActive)
        {
            box.SetActive(true);
        }
	}
}
