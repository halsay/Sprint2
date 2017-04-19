using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartMenu : MonoBehaviour {

    ScreenFader sf;
    GameObject title;

    // Use this for initialization
    void Start()
    {
        sf = GameObject.FindGameObjectWithTag("Fader").GetComponent<ScreenFader>();
        title = GameObject.FindGameObjectWithTag("Title");
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
        title.SetActive(false);
        yield return StartCoroutine(sf.FadeToBlack());
        SceneManager.LoadScene("intro", LoadSceneMode.Single);
        //yield return StartCoroutine(sf.FadeToClear());
    }
}
