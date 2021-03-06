﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenFader : MonoBehaviour {
    Animator anim;
    bool isFading = false;
    public Canvas canvas;

    private void Start()
    {
        anim = GetComponent<Animator>();
    }

    public IEnumerator FadeToBlack()
    {
        isFading = true;
        canvas.enabled = false;
        anim.SetTrigger("FadeOut");
        while (isFading)
            yield return null;


    }

    public IEnumerator FadeToClear()
    {
        isFading = true;
        canvas.enabled = true;
        anim.SetTrigger("FadeIn");
        while (isFading)
            yield return null;
    }
  
    void animationComplete()
    {
        isFading = false;
    }
}
