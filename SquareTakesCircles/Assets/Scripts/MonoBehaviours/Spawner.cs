using UnityEngine;

public class Spawner : MonoBehaviour
{
    [SerializeField] private SpawnerBase spawner;

    private void Start()
    {
        spawner.SpawnObjects(transform);
    }
}
