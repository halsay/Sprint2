using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LureTroll : MonoBehaviour {


    public Transform target;
    public GameObject troll;
    private bool trigger;
    private DialogueManager dMan;
    private bool activated;
    public GameObject warp;

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
        if (trigger && !activated)
        {
            troll.SetActive(true);
            if (!dMan.dialogActive)
            {
                troll.GetComponent<Troll>().canMove = true;
                activated = true;
                warp.SetActive(false);
            }
        }
    }
}
