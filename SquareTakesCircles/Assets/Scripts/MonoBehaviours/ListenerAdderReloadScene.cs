using nsSceneReloader;
using UnityEngine;
using UnityEngine.UI;

namespace nsListenerAdderReloadScene
{
    public class ListenerAdderReloadScene : MonoBehaviour
    {
        private void Awake()
        {
            Button button = GetComponent<Button>();
            if (button != null)
            {
                SceneReloader sceneReloader = new SceneReloader();
                button.onClick.AddListener(sceneReloader.ReloadScene);
            }
            else
            {
                string errorMessage = string.Concat("No Button component on object: ", gameObject.name);
                Debug.Log(errorMessage);
            }
        }
    }
}
