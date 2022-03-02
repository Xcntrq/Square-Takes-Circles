using UnityEngine;
using UnityEngine.SceneManagement;

namespace nsSceneReloader
{
    public class SceneReloader
    {
        public void ReloadScene()
        {
            Time.timeScale = 1;
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
    }
}
