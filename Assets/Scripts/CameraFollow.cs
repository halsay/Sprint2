using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{

    public Transform target1;
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
        if (target1)
        {
            transform.position = Vector3.Lerp(transform.position, target1.position, 0.1f) + new Vector3(0, 0, -10);
        }
    }
}
