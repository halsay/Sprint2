using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonController : MonoBehaviour {
    public string doorTag;
    private GameObject[] door;
    public Collider2D goat;
    private Animator anim;

    // Use this for initialization
    void Start () {
        door = GameObject.FindGameObjectsWithTag(doorTag);
        anim = GetComponent<Animator>();
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision == goat)
        {
            for (int i = 0; i < door.Length; i++)
            {
                door[i].SetActive(true);
                anim.SetBool("Up", true);
                anim.SetBool("Down", false);
            }
            if (doorTag == "WhiteDoor")
            {
                GameObject.FindObjectOfType<Door>().whiteActive = true;
            }

            if (doorTag == "BrownDoor")
            {
                GameObject.FindObjectOfType<Door>().brownActive = true;
            }

            if (doorTag == "BlackDoor")
            {
                GameObject.FindObjectOfType<Door>().blackActive = true;
            }
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision == goat)
        {
            for (int i = 0; i < door.Length; i++)
            {
                door[i].SetActive(false);
                anim.SetBool("Down", true);
                anim.SetBool("Up", false);
            }
            if (doorTag == "WhiteDoor")
            {
                GameObject.FindObjectOfType<Door>().whiteActive = false;
            }

            if (doorTag == "BrownDoor")
            {
                GameObject.FindObjectOfType<Door>().brownActive = false;
            }

            if (doorTag == "BlackDoor")
            {
                GameObject.FindObjectOfType<Door>().blackActive = false;
            }
        }

    }
}
