using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warp : MonoBehaviour
{
    public Transform warpTarget;

    private IEnumerator OnTriggerEnter2D(Collider2D collision)
    {
        ScreenFader sf = GameObject.FindGameObjectWithTag("Fader").GetComponent<ScreenFader>();
        GameObject middle = GameObject.FindGameObjectWithTag("Middle");
        GameObject big = GameObject.FindGameObjectWithTag("Big");


        yield return StartCoroutine(sf.FadeToBlack());

        collision.gameObject.transform.position = warpTarget.transform.position;
        big.transform.position = collision.gameObject.transform.position;
        middle.transform.position = collision.gameObject.transform.position;
        
        Camera.main.transform.position = collision.gameObject.transform.position;

        yield return StartCoroutine(sf.FadeToClear());

    }
}
