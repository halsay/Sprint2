using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartMenu : MonoBehaviour {

    ScreenFader sf;
    GameObject[] text;

    // Use this for initialization
    void Start()
    {
        sf = GameObject.FindGameObjectWithTag("Fader").GetComponent<ScreenFader>();
        text = GameObject.FindGameObjectsWithTag("Title");
    }
    // Update is called once per frame
    void Update () {
        if (Input.GetKeyUp(KeyCode.Space))
        {
            StartCoroutine(fadeOut());
        }

    }

    private IEnumerator fadeOut()
    {
        for (int i = 0; i< text.Length; i++)
        {
            text[i].SetActive(false);
        }
        yield return StartCoroutine(sf.FadeToBlack());
        SceneManager.LoadScene("intro", LoadSceneMode.Single);
        //yield return StartCoroutine(sf.FadeToClear());
    }
}
