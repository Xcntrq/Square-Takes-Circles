using UnityEngine;

public class OnMouseDragMover : MonoBehaviour
{
    private Rigidbody2D _rigidbody2D;
    private Camera _mainCamera;
    private Plane _dragPlane;

    private void Awake()
    {
        _rigidbody2D = GetComponent<Rigidbody2D>();
        _mainCamera = Camera.main;
    }

    private void OnMouseDown()
    {
        _dragPlane = new Plane(_mainCamera.transform.forward, transform.position);
    }

    private void OnMouseDrag()
    {
        Ray cameraRay = _mainCamera.ScreenPointToRay(Input.mousePosition);
        if (_dragPlane.Raycast(cameraRay, out float enter)) _rigidbody2D.MovePosition(cameraRay.GetPoint(enter));
    }
}
