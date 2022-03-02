using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class RandomListSpawner : SpawnerBase
{
    [SerializeField] private List<GameObject> _spawnableGameObjects;
    [SerializeField] [Range(1, 20)] private int _desiredAmount;
    [SerializeField] [Range(0, 1)] [Tooltip("As a fraction of the height of the screen.")] private float _minDistance;
    [SerializeField] private nsObjectsCollected.ObjectsCollected _objectsCollected;

    public override void SpawnObjects(Transform parent)
    {
        for (int counter = 0; counter < _desiredAmount; counter++)
        {
            int randomIndex = Random.Range(0, _spawnableGameObjects.Count);

            GameObject newGameObject = Instantiate(_spawnableGameObjects[randomIndex]);

            newGameObject.transform.parent = parent;
            Vector3 randomPosition = GetRandomSpawnPosition();
            newGameObject.transform.SetPositionAndRotation(randomPosition, Quaternion.identity);
        }
        _objectsCollected.SetGoal(_desiredAmount);
        _objectsCollected.ResetAmount();
    }

    private Vector3 GetRandomSpawnPosition()
    {
        Camera mainCamera = Camera.main;

        Vector3 screenBottomRight = new Vector3(Screen.width, 0, 0);
        Vector3 screenTopLeft = new Vector3(0, Screen.height, 0);
        Vector3 screenCenter = new Vector3(Screen.width / 2, Screen.height / 2, 0);

        Vector3 cameraBottomLeft = mainCamera.ScreenToWorldPoint(Vector3.zero);
        Vector3 cameraBottomRight = mainCamera.ScreenToWorldPoint(screenBottomRight);
        Vector3 cameraTopLeft = mainCamera.ScreenToWorldPoint(screenTopLeft);
        Vector3 cameraScreenCenter = mainCamera.ScreenToWorldPoint(screenCenter);

        cameraScreenCenter.z = 0;

        float XMin = cameraBottomLeft.x;
        float XMax = cameraBottomRight.x;

        float YMin = cameraBottomLeft.y;
        float YMax = cameraTopLeft.y;

        float distanceToClear = _minDistance * (YMax - YMin) / 2;

        int counter = 0;
        while (counter++ < 100)
        {
            float randomX = Random.Range(XMin, XMax);
            float randomY = Random.Range(YMin, YMax);

            Vector3 randomPosition = new Vector3(randomX, randomY, 0);

            float distanceFromCenter = Vector3.Distance(randomPosition, cameraScreenCenter);

            if (distanceFromCenter > distanceToClear) return randomPosition;
        }
        return Vector3.zero;
    }
}
