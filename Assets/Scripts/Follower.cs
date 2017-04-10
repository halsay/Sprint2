using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follower : MonoBehaviour {

    public Transform target;
    public int movSpeed;
    public float dist = 10;
    private Transform thisGoat;
    private Vector2 movement;
    private Vector2 delta;
    Animator anim;  
    void Start () {
        thisGoat = this.transform;
        //target = GameObject.FindGameObjectWithTag("Little").transform;
        anim = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {

        //thisGoat.rotation = Quaternion.Slerp(thisGoat.rotation, Quaternion.LookRotation(target.position - thisGoat.position), );
        // thisGoat.position += thisGoat.forward * movSpeed * Time.deltaTime;
        if (Vector2.Distance(thisGoat.position,target.position)>dist)
        {
            movement= Vector2.MoveTowards(thisGoat.position, target.position, movSpeed * Time.deltaTime);
            delta =  target.position - thisGoat.position;
            thisGoat.position = movement;
            
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
