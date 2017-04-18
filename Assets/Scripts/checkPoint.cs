using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class checkPoint : MonoBehaviour {
    public Transform nextPoint;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name == "Troll")
        {
            collision.GetComponent<Troll>().target = nextPoint;
            collision.GetComponent<Troll>().movSpeed += 5;
            Debug.Log("1");

        }
    }
}
