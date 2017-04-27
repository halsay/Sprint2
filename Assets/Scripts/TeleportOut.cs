using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportOut : MonoBehaviour {
    public Portal portal1, portal2, portal3;
    public GameObject little, middle, big, middle1, big1, hint, switchUI;
    public Transform target;
    private bool Teleported = false;
    ScreenFader sf;
    public Camera cam;

    // Use this for initialization
    void Start()
    {
        sf = GameObject.FindGameObjectWithTag("Fader").GetComponent<ScreenFader>();

    }

    // Update is called once per frame
    void Update()
    {
        if (portal1.activated && portal2.activated && portal3.activated && !Teleported)
        {
            Teleported = true;
            StartCoroutine(fadeOut());


        }
    }

    private IEnumerator fadeOut()
    {
        yield return StartCoroutine(sf.FadeToBlack());
        little.GetComponent<Transform>().position = target.position;
        little.GetComponent<PlayerMovement>().speed = 10;
        middle.SetActive(false);
        big.SetActive(false);
        cam.GetComponent<CameraSwitch>().enabled = false;
        middle1.SetActive(true);
        big1.SetActive(true);
        cam.GetComponent<CameraFollow>().enabled = true;
        yield return StartCoroutine(sf.FadeToClear());
    }

}
