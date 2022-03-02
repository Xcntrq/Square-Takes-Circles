using TMPro;
using UnityEngine;

namespace nsValueDisplayInt
{
    public class ValueDisplayInt : MonoBehaviour
    {
        [SerializeField] private string _label;
        [SerializeField] private ScriptableObject _scriptableObject;

        private TextMeshProUGUI _textMeshProUGUI;
        private IValue<int> _value;

        private void Awake()
        {
            _textMeshProUGUI = GetComponent<TextMeshProUGUI>();
            _value = _scriptableObject as IValue<int>;
        }

        private void OnEnable()
        {
            _value.OnValueChanged += OnValueChanged;
        }

        private void OnDisable()
        {
            _value.OnValueChanged -= OnValueChanged;
        }

        private void OnValueChanged(int value)
        {
            _textMeshProUGUI.text = string.Concat(_label, value);
        }
    }
}
