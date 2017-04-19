using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class Troll : MonoBehaviour {
    public Transform target;
    public int movSpeed = 5;
    public float dist = 0;
    public bool canMove;
    public bool dialogueDone;
    private bool faded;
    private Transform troll;
    private Vector2 movement;
    private Vector2 delta;
    public string[] dialogLines;
    public string[] speakers;
    Animator anim;
    private itemList ilist;
    private ScreenFader sf;
    private DialogueManager dMan;
    public GameObject little, middle, big;
    void Start()
    {
        sf = FindObjectOfType<ScreenFader>();
        troll = this.transform;
        faded = dialogueDone = false;
        //target = GameObject.FindGameObjectWithTag("Little").transform;
        anim = GetComponent<Animator>();
        anim.SetTrigger("appear");
        anim.SetTrigger("idle");
        dMan = FindObjectOfType<DialogueManager>();
        ilist = FindObjectOfType<itemList>();
    }

    // Update is called once per frame
    void Update()
    {

        //troll.rotation = Quaternion.Slerp(troll.rotation, Quaternion.LookRotation(target.position - troll.position), );
        // troll.position += troll.forward * movSpeed * Time.deltaTime;
        if (!faded)
        {
            if (canMove)
            {
                if (Vector2.Distance(troll.position, target.position) > dist)
                {
                    movement = Vector2.MoveTowards(troll.position, target.position, movSpeed * Time.deltaTime);
                    delta = target.position - troll.position;
                    troll.position = movement;

                    anim.SetBool("is_walking", true);
                    anim.SetFloat("input_x", delta.x);
                    anim.SetFloat("input_y", delta.y);
                }
                else
                {
                    anim.SetBool("is_walking", false);
                }
            }

            if (dialogueDone && !dMan.dialogActive)
            {
                Debug.Log("Ddone");
                little.SetActive(false);
                middle.SetActive(false);    
                big.SetActive(false);
                if (!ilist.gotItem)
                {
                    Debug.Log("to main");
                    faded = true;
                    StartCoroutine(fadeToMain());
                }

                if (ilist.gotItem)
                {
                    Debug.Log("to 2");
                    faded = true;
                    StartCoroutine(fadeTo2());
                }
            }

           
        }

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Little" || collision.tag == "Middle" || collision.tag == "Big")
        {
            dMan.dialogLines = dialogLines;
            dMan.speakers = speakers;
            dMan.currentLine = 0;
            dMan.ShowDialogue();
            canMove = false;
            dialogueDone = true;
        }
    }

    private IEnumerator fadeToMain()
    {
        yield return StartCoroutine(sf.FadeToBlack());
        SceneManager.LoadScene("main", LoadSceneMode.Single);
        //yield return StartCoroutine(sf.FadeToClear());
    }

    private IEnumerator fadeTo2()
    {
        yield return StartCoroutine(sf.FadeToBlack());
        SceneManager.LoadScene("round2", LoadSceneMode.Single);
        //yield return StartCoroutine(sf.FadeToClear());
    }
}
