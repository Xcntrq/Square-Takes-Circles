using UnityEngine;

namespace nsOnGoalReachedChildrenEnabler
{
    public class OnGoalReachedChildrenEnabler : MonoBehaviour
    {
        [SerializeField] private ScriptableObject _scriptableObject;

        IGoalReacher _goalReacher;

        private void Awake()
        {
            _goalReacher = _scriptableObject as IGoalReacher;
        }

        private void OnEnable()
        {
            _goalReacher.OnGoalReached += OnGoalReached;
        }

        private void OnDisable()
        {
            _goalReacher.OnGoalReached -= OnGoalReached;
        }

        private void OnGoalReached()
        {
            foreach (Transform child in transform)
            {
                child.gameObject.SetActive(true);
            }
        }
    }
}
