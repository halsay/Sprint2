using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class eatGrass : MonoBehaviour {

    public Transform target1,target2;
    public Follower Goat1,Goat2;
    private bool move;
    private DialogueManager dMan;
    void Start()
    {
        dMan = FindObjectOfType<DialogueManager>();
    }

    void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject.name == "Little")
        {
            move = true;
        }

    }

    void Update()
    {
        if (move && !dMan.dialogActive)
        {
            Goat1.target = target1;
            Goat2.target = target2;
            Goat1.dist = Goat2.dist = 0;
        }
    }
}
