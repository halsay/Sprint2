using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxController : MonoBehaviour {

    public GameObject closedDia, openDia;
    private bool isOpen;
    private Animator anim;

	// Use this for initialization
	void Start () {
        isOpen = false;
        anim = GetComponent<Animator>();
        openDia.SetActive(false);
        closedDia.SetActive(true);
	}

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag == "Little" && !isOpen && Input.GetKeyUp(KeyCode.Space))
        {
            isOpen = true;
            closedDia.SetActive(false);
            openDia.SetActive(true);
            anim.SetBool("isOpen", true);
        }
    }
}
