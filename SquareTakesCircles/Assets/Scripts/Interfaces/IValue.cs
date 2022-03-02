using System;

interface IValue<T>
{
    public event Action<T> OnValueChanged;
}
