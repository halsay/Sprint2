using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraSwitch : MonoBehaviour {
    public Transform target1, target2, target3;
    public GameObject playerCon;
    Camera cam;
    // Use this for initialization
    void Start()
    {
        cam = GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        cam.orthographicSize = Screen.height / 50f;
        switch (playerCon.GetComponent<PlayerController>().state)
        {
            case 0:
                if (target1)
                {
                    transform.position = Vector3.Lerp(transform.position, target1.position, 1f) + new Vector3(0, 0, -10);
                }
                break;
            case 1:
                if (target2)
                {
                    transform.position = Vector3.Lerp(transform.position, target2.position, 1f) + new Vector3(0, 0, -10);
                }
                break;
            case 2:
                if (target3)
                {
                    transform.position = Vector3.Lerp(transform.position, target3.position, 1f) + new Vector3(0, 0, -10);
                }
                break;
        }
    }
}
