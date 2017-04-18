using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraSwitch : MonoBehaviour {
    public Transform[] targets;
    public GameObject playerCon;
    public int state;
    private Transform focus;

    Camera cam;
    // Use this for initialization
    void Start()
    {
        cam = GetComponent<Camera>();
        state = 0;
    }

    // Update is called once per frame
    void Update()
    {
        cam.orthographicSize = Screen.height / 50f;
        switch (state)
        {
            case 0:
                if (targets[0])
                {
                    focus = targets[0];
                }
                break;
            case 1:
                if (targets[1])
                {
                    focus = targets[1];
                }
                break;
            case 2:
                if (targets[2])
                {
                    focus = targets[2];
                }
                break;
            case 3:
                if (targets[3])
                {
                    focus = targets[3];
                }
                break;
        }

        transform.position = Vector3.Lerp(transform.position, focus.position, 1f) + new Vector3(0, 0, -10);
    }
}
