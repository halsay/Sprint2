using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnToTroll : MonoBehaviour {

    public Transform target;
    public GameObject Goat1, Goat2, troll1, troll2;
    private bool trigger;
    private DialogueManager dMan;
    
    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();

    }

    void OnTriggerEnter2D(Collider2D other)
    {
         trigger = true;

    }

    void Update()
    {
        if (trigger && !dMan.dialogActive)
        {
            Goat1.GetComponent<SpriteRenderer>().enabled = false;
            Goat2.GetComponent<SpriteRenderer>().enabled = false;
            troll1.SetActive(true);
            troll2.SetActive(true);
            troll1.GetComponent<Animator>().SetTrigger("appear");
            troll2.GetComponent<Animator>().SetTrigger("idle");
            troll1.GetComponent<Animator>().SetTrigger("appear");
            troll2.GetComponent<Animator>().SetTrigger("idle");

            troll1.GetComponent<Troll>().canMove = true;
            troll2.GetComponent<Troll>().canMove = true;



        }
    }
}
