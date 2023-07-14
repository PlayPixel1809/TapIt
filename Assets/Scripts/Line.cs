using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Line : MonoBehaviour
{
    public Image[] fadeImages;

    public Transform dot;
    public Transform target;

    private bool lineCompleted = false;
    private int i = 0;
    private int direction = 1;

    public Transform slots;
    public Transform ghostDot;

    void Start()
    {
        FadeIn();
    }

    void OnEnable()
    {
        if (!lineCompleted)
        {
            GameplayScreen.ins.onTap = OnTap;
            StartCoroutine("AnimateDot");
        }
    }

    /*IEnumerator AnimateDot()
    {
        while (true)
        {
            i += direction;

            if (i == transform.childCount - 1 || i == 0)
            {
                direction *= -1;
            }

            float speed = Mathf.Lerp(GameplayScreen.ins.startSpeed, GameplayScreen.ins.maxSpeed, GameplayScreen.ins.lines.childCount / GameplayScreen.ins.maxSpeedLine);
            dot.SetParent(transform.GetChild(i));
            dot.localPosition = Vector3.zero;
            dot.GetComponent<Image>().sprite = GameplayScreen.ins.ballRed;

            if (transform.GetChild(i).name == "Target") { dot.GetComponent<Image>().sprite = GameplayScreen.ins.ballGreen; }

            yield return new WaitForSeconds(1 / speed);

            if (transform.GetChild(i).name == "Target")
            {
                yield return new WaitForSeconds(1 / speed);
            }
        }
        
    }*/

    IEnumerator AnimateDot()
    {
        ghostDot.GetComponent<Animation>().Play();
        
        while (true)
        {
            

            Transform closestSlot = slots.GetChild(0);
            for (int i = 1; i < slots.childCount; i++)
            {
                if (Vector3.Distance(slots.GetChild(i).position, ghostDot.position) < Vector3.Distance(closestSlot.position, ghostDot.position)) { closestSlot = slots.GetChild(i); }
            }
            dot.SetParent(closestSlot);
            dot.localPosition = Vector3.zero;
            yield return null;
            float speed = Mathf.Lerp(GameplayScreen.ins.startSpeed, GameplayScreen.ins.maxSpeed, GameplayScreen.ins.lines.childCount / GameplayScreen.ins.maxSpeedLine);
            ghostDot.GetComponent<Animation>()["GhostDot"].speed = speed / 10;
        }

    }

    void OnTap()
    {
        GameplayScreen.ins.onTap = null;
        lineCompleted = true;
        StopCoroutine("AnimateDot");
        if (target.childCount > 0)
        {
            GameplayScreen.ins.onScore?.Invoke(int.Parse(GameplayScreen.ins.score.text));
            target.GetChild(0).SetParent(target.parent);
            target.GetComponent<Animation>().Play();
            Utils.InvokeDelayedAction(.5f,()=> { target.gameObject.SetActive(false); } );
        }
        else
        {
            GameplayScreen.ins.onMiss?.Invoke();
        }
    }

    void FadeIn()
    {
        for (int i = 0; i < fadeImages.Length; i++)
        {
            AnimUtils.FadeUi(fadeImages[i].transform, 0, 1, .5f);
        }
    }

    public void FadeOut()
    {
        for (int i = 0; i < fadeImages.Length; i++)
        {
            AnimUtils.FadeUi(fadeImages[i].transform, 1, 0, .5f);
        }
    }
}
