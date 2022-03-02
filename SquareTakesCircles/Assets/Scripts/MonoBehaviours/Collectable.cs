using UnityEngine;

namespace nsCollectable
{
    public class Collectable : MonoBehaviour
    {
        [SerializeField] private nsObjectsCollected.ObjectsCollected _objectsCollected;

        private void OnTriggerEnter2D(Collider2D collision)
        {
            _objectsCollected.Increment();
            Destroy(gameObject);
        }
    }
}
