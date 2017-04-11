using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    public GameObject Little, Middle, Big;
    public int state = 0;

	// Use this for initialization
	void Start () {
        Little.GetComponent<PlayerMovement>().canMove = true;
        Middle.GetComponent<PlayerMovement>().canMove = false;
        Big.GetComponent<PlayerMovement>().canMove = false;
        Little.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
        Middle.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
        Big.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyUp(KeyCode.Tab))
        {
            switch (state)
            {
                case 0:
                    Little.GetComponent<PlayerMovement>().canMove = false;
                    Little.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
                    Little.GetComponent<Animator>().SetBool("is_walking", false);
                    Middle.GetComponent<PlayerMovement>().canMove = true;
                    Middle.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                    state = 1;
                    break;
                case 1:
                    Middle.GetComponent<PlayerMovement>().canMove = false;
                    Middle.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
                    Middle.GetComponent<Animator>().SetBool("is_walking", false);
                    Big.GetComponent<PlayerMovement>().canMove = true;
                    Big.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                    state = 2;
                    break;
                case 2:
                    Big.GetComponent<PlayerMovement>().canMove = false;
                    Big.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
                    Big.GetComponent<Animator>().SetBool("is_walking", false);
                    Little.GetComponent<PlayerMovement>().canMove = true;
                    Little.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                    state = 0;
                    break;

            }
        }

    }
}
