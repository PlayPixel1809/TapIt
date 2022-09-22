using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class SocialSharing : MonoBehaviour
{
    public void ShareBtn()
    {
        Texture2D tex = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);

        tex.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);

        tex.Apply();

        string filePath = Path.Combine(Application.temporaryCachePath, "SharedImg.png");
        File.WriteAllBytes(filePath, tex.EncodeToPNG());
        Destroy(tex);

        new NativeShare().AddFile(filePath).SetSubject("Tap It").SetText("Just Shared").Share();
    }
}
