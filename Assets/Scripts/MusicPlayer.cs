using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicPlayer : MonoBehaviour
{
    public float musicTransition = 5;

    public GameplayScreen gameplayScreen;
    public Transform bgMusicsTransform;
    public Transform heartBeatMusicTransform;

    public int heartBeatStartAt = 5;
    public int heartBeatFullAt = 12;
    public Music heartBeatMusic;
    public List<Music> bgMusics;

    public Image heartBeatBg;


    [System.Serializable]
    public class Music
    {
        public float vol;
        public AudioSource audioSource;
        public Coroutine coroutine;
    }

    void Start()
    {
        transform.position = Camera.main.transform.position;

        gameplayScreen.onScore += OnScore;
        gameplayScreen.onGameStart += OnGameStart;
        gameplayScreen.onGameOver += OnGameOver;

    }

    void OnGameStart()
    {
        bgMusicsTransform.localPosition = Vector3.zero;
    }

    void OnScore(int score)
    {
        if (score == heartBeatStartAt) 
        { 
            heartBeatMusic.audioSource.Play();
            heartBeatMusic.audioSource.volume = heartBeatMusic.vol;
        }
        
        float percentage = (float)(score - heartBeatStartAt) / (heartBeatFullAt - heartBeatStartAt);
        bgMusicsTransform.localPosition = new Vector3(0, 0, Mathf.Lerp(0,.98f, percentage));
        heartBeatMusicTransform.localPosition = new Vector3(0, 0, Mathf.Lerp(.7f, 0, percentage));
        heartBeatBg.color = new Color(1, 1, 1, Mathf.Lerp(0, 1, percentage));
    }

    void OnGameOver()
    {
        heartBeatMusic.audioSource.Stop();
        heartBeatBg.color = new Color(1,1,1,0);
    }

    public void PlayMusic()
    {
        bgMusicsTransform.localPosition = Vector3.zero;
        StopMusic();
        StartCoroutine("PlayMusicCoroutine");
    }

    public void StopMusic()
    {
        StopCoroutine("PlayMusicCoroutine");
        for (int i = 0; i < bgMusics.Count; i++)
        {
            bgMusics[i].audioSource.Stop();
            bgMusics[i].coroutine = null;
        }
    }

    IEnumerator PlayMusicCoroutine()
    {
        StartCoroutine(PlayAudioSource(bgMusics[0].audioSource, bgMusics[0].vol, 1));
        yield return new WaitForSeconds(Random.Range(bgMusics[0].audioSource.clip.length / 2, bgMusics[0].audioSource.clip.length));

        while (true)
        {
            for (int i = 0; i < bgMusics.Count; i++)
            {
                Music musicToStop = bgMusics[i];
                Music musicToPlay = bgMusics[i + 1];

                if (i == bgMusics.Count - 1) { musicToPlay = bgMusics[0]; }


                musicToStop.coroutine = StartCoroutine(StopAudioSource(musicToStop.audioSource, musicTransition));
                musicToPlay.coroutine = StartCoroutine(PlayAudioSource(musicToPlay.audioSource, musicToPlay.vol, 1));
                yield return new WaitForSeconds(Random.Range(musicToPlay.audioSource.clip.length / 2, musicToPlay.audioSource.clip.length));
            }
        }
    }

    IEnumerator PlayAudioSource(AudioSource audioSource, float vol, float fadeInTime)
    {
        float val = 0;
        audioSource.Play();
        while (val < vol)
        {
            val += Time.deltaTime / fadeInTime;
            audioSource.volume =  Mathf.Lerp(0, vol, val);
            yield return null;
        }
    }

    IEnumerator StopAudioSource(AudioSource audioSource, float fadeOutTime)
    {
        float vol = audioSource.volume;
        float val = 0;
        while (val < vol)
        {
            val += Time.deltaTime / fadeOutTime;
            audioSource.volume = Mathf.Lerp(vol, 0, val);
            yield return null;
        }
        audioSource.Stop();
    }
}
