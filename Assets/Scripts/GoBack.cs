using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoBack : MonoBehaviour {
    public Transform target;
    public int movSpeed;
    public float dist = 10;
    public Transform thisGoat;
    public bool done;

    private Vector2 movement;
    private Vector2 delta;
    Animator anim;
    private bool move;
    private DialogueManager dMan;
    void Start()
    {
        anim = thisGoat.GetComponent<Animator>();
        dMan = FindObjectOfType<DialogueManager>();
    }

	void OnTriggerEnter2D(Collider2D other)
    {
        
        if (other.gameObject.name == "Little")
        {
            thisGoat = other.GetComponent<Transform>();
            move = true;
            done = true;
        }

    }

    void Update()
    {
        if (move && !dMan.dialogActive)
        {
            movement = Vector2.MoveTowards(thisGoat.position, target.position, movSpeed * Time.deltaTime);
            delta = target.position - thisGoat.position;
            thisGoat.position = movement;

            anim.SetBool("is_walking", true);
            anim.SetFloat("input_x", delta.x);
            anim.SetFloat("input_y", delta.y);

            if (delta == Vector2.zero)
            {
                move = false;
            }
        }
    }
}
