using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Troll : MonoBehaviour {
    public Transform target;
    public int movSpeed = 5;
    public float dist = 0;
    public bool canMove = false;
    private Transform troll;
    private Vector2 movement;
    private Vector2 delta;
    Animator anim;
    void Start()
    {
        troll = this.transform;
        //target = GameObject.FindGameObjectWithTag("Little").transform;
        anim = GetComponent<Animator>();
        anim.SetTrigger("appear");
        anim.SetTrigger("idle");
    }

    // Update is called once per frame
    void Update()
    {

        //troll.rotation = Quaternion.Slerp(troll.rotation, Quaternion.LookRotation(target.position - troll.position), );
        // troll.position += troll.forward * movSpeed * Time.deltaTime;
        if (canMove)
        {
            if (Vector2.Distance(troll.position, target.position) > dist)
            {
                movement = Vector2.MoveTowards(troll.position, target.position, movSpeed * Time.deltaTime);
                delta = target.position - troll.position;
                troll.position = movement;

                anim.SetBool("is_walking", true);
                anim.SetFloat("input_x", delta.x);
                anim.SetFloat("input_y", delta.y);
            }
            else
            {
                anim.SetBool("is_walking", false);
            }
        }

    }
}
