using UnityEngine;

[CreateAssetMenu()]
public class SingleObjectSpawner : SpawnerBase
{
    [SerializeField] private GameObject _spawnableGameObject;

    public override void SpawnObjects(Transform parent)
    {
        GameObject newGameObject = Instantiate(_spawnableGameObject);

        newGameObject.transform.parent = parent;
        Vector3 centerPosition = GetCenterPosition();
        newGameObject.transform.SetPositionAndRotation(centerPosition, Quaternion.identity);
    }

    private Vector3 GetCenterPosition()
    {
        Vector3 screenCenter = new Vector3(Screen.width / 2, Screen.height / 2, 0);
        Vector3 cameraScreenCenter = Camera.main.ScreenToWorldPoint(screenCenter);

        float X = cameraScreenCenter.x;
        float Y = cameraScreenCenter.y;
        Vector3 centerPosition = new Vector3(X, Y, 0);

        return centerPosition;
    }
}
