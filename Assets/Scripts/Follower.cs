using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follower : MonoBehaviour {

    private Transform target;
    public int movSpeed;
    public float dist = 10;
    private Transform thisGoat;    
    void Start () {
        thisGoat = this.transform;
        target = GameObject.FindGameObjectWithTag("Little").transform;
	}
	
	// Update is called once per frame
	void Update () {

        //thisGoat.rotation = Quaternion.Slerp(thisGoat.rotation, Quaternion.LookRotation(target.position - thisGoat.position), );
        // thisGoat.position += thisGoat.forward * movSpeed * Time.deltaTime;
        if (Vector2.Distance(thisGoat.position,target.position)>dist)
            thisGoat.position = Vector2.MoveTowards(thisGoat.position, target.position, movSpeed * Time.deltaTime);
	}
}
