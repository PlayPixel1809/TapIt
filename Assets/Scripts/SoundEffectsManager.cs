using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundEffectsManager : MonoBehaviour
{
    public GameplayScreen gameplayScreen;


    public List<AudioClip> tap;
    public List<AudioClip> miss;
    public List<AudioClip> rewards;

    private List<AudioClip> tapPlayed = new List<AudioClip>();
    private List<AudioClip> missPlayed = new List<AudioClip>();

    void Start()
    {
        gameplayScreen.onScore += OnScore;
        gameplayScreen.onGameOver += OnGameOver;
    }

    void OnScore(int score)
    {
        if (tapPlayed.Count == 0) 
        {
            for (int i = 0; i < tap.Count; i++)
            {
                tapPlayed.Add(tap[i]);
            }
        }

        AudioClip audioClip = tapPlayed[Random.Range(0, tapPlayed.Count)];
        GameUtils.ins.PlaySound(audioClip);

        tapPlayed.Remove(audioClip);
    }

    void OnGameOver()
    {
        if (missPlayed.Count == 0)
        {
            for (int i = 0; i < miss.Count; i++)
            {
                missPlayed.Add(miss[i]);
            }
        }

        AudioClip audioClip = missPlayed[Random.Range(0, missPlayed.Count)];
        GameUtils.ins.PlaySound(audioClip);

        missPlayed.Remove(audioClip);
    }
}
