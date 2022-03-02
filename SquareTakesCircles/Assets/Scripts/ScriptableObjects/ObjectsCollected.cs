using System;
using UnityEngine;

namespace nsObjectsCollected
{
    [CreateAssetMenu()]
    public class ObjectsCollected : ScriptableObject, IValue<int>, IGoalReacher
    {
        [SerializeField] private int _value;
        [SerializeField] private int _goal;

        public event Action<int> OnValueChanged;
        public event Action OnGoalReached;

        public void ResetAmount()
        {
            _value = 0;
            OnValueChanged?.Invoke(_value);
        }

        public void Increment()
        {
            _value++;
            OnValueChanged?.Invoke(_value);
            if (_value >= _goal) OnGoalReached?.Invoke();
        }

        public void SetGoal(int goal)
        {
            _goal = goal;
        }
    }
}
