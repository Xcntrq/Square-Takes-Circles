using UnityEngine;

public abstract class SpawnerBase : ScriptableObject
{
    public abstract void SpawnObjects(Transform parent);
}
