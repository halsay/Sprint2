using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonController : MonoBehaviour {
    public string doorTag;
    //private GameObject[] door;
    public Collider2D goat;
    private Animator anim;
    private Door doorControl;

    // Use this for initialization
    void Start () {
        //door = GameObject.FindGameObjectsWithTag(doorTag);
        anim = GetComponent<Animator>();
        doorControl = FindObjectOfType<Door>();
        
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerExit2D(Collider2D collision)
    

    {
        Debug.Log("in");
        if (collision == goat)
        {
            Debug.Log("hi");
            if (doorTag == "BrownDoor")
            {
                if (!doorControl.multiBrown)
                {
                    doorControl.brownPressed = false;
                    anim.SetBool("Up", true);
                    anim.SetBool("Down", false);
                }
                if (doorControl.multiBrown)
                {
                    doorControl.multiBrown = false;
                }
            }
            if (doorTag == "WhiteDoor")
            {
                Debug.Log("white");
                
                if(!doorControl.multiWhite)
                {
                    Debug.Log("close");
                    doorControl.whitePressed = false;
                    anim.SetBool("Up", true);
                    anim.SetBool("Down", false);
                }
                if (doorControl.multiWhite)
                {
                    doorControl.multiWhite = false;
                }
            }

            if (doorTag == "BlackDoor")
            {
                
                if (!doorControl.multiBlack)
                {
                    doorControl.blackPressed = false;
                    anim.SetBool("Up", true);
                    anim.SetBool("Down", false);
                }
                if (doorControl.multiBlack)
                {
                    doorControl.multiBlack = false;
                }
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //if (collision == goat)
        // {
        if (collision.gameObject.name != "Troll")
        {
            goat = collision;
            if (doorTag == "BrownDoor")
            {
                if (!doorControl.multiBrown && doorControl.brownPressed)
                {
                    doorControl.multiBrown = true;
                }
                doorControl.brownPressed = true;
            }
            if (doorTag == "WhiteDoor")
            {
                if (!doorControl.multiWhite && doorControl.whitePressed )
                {
                    doorControl.multiWhite = true;
                }
                doorControl.whitePressed = true;
            }

            if (doorTag == "BlackDoor")
            {
                if (!doorControl.multiBlack && doorControl.blackPressed)
                {
                    doorControl.multiBlack = true;
                }
                doorControl.blackPressed = true;
            }

            anim.SetBool("Down", true);
            anim.SetBool("Up", false);

           /* if (!pressed)
            {
                goat = collision;
                pressed = true;
                if (doorTag == "BrownDoor")
                {
                    doorControl.brownPressed = true;
                }
                if (doorTag == "WhiteDoor")
                {
                    doorControl.whitePressed = true;
                }

                if (doorTag == "BlackDoor")
                {
                    doorControl.blackPressed = true;
                }
                
            }

            if (pressed)
            {
                if (doorTag == "BrownDoor")
                {
                    doorControl.multiBrown = true;
                }
                if (doorTag == "WhiteDoor")
                {
                    doorControl.multiWhite = true;
                }

                if (doorTag == "BlackDoor")
                {
                    doorControl.multiBlack = true;
                }
            }*/

            /* for (int i = 0; i < door.Length; i++)
             {
                 door[i].SetActive(false);

             }*/
            
            /*if (doorTag == "WhiteDoor")
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
            }*/
            // }

        }
    }
}
