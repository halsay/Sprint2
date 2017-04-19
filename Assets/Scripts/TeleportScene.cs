﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class TeleportScene : MonoBehaviour {

    public Portal portal1, portal2, portal3;
    private bool Teleported = false;
    ScreenFader sf;

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
        SceneManager.LoadScene("bossBattle", LoadSceneMode.Single);
        //yield return StartCoroutine(sf.FadeToClear());
    }
}