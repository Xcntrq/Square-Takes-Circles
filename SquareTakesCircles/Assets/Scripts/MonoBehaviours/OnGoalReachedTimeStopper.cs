using UnityEngine;

namespace nsOnGoalReachedTimeStopper
{
    public class OnGoalReachedTimeStopper : MonoBehaviour
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
            Time.timeScale = 0;
        }
    }
}
