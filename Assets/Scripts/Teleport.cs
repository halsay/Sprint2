using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour {
    public Portal portal1, portal2, portal3;
    public Transform little, middle, big, target1, target2, target3;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (portal1.activated && portal2.activated && portal3.activated)
        {
            little.position = target1.position;
            middle.position = target2.position;
            big.position = target3.position;
        }
	}
}
