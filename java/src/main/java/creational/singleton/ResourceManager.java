package creational.singleton;

public class ResourceManager {

    private static ResourceManager instance = null;
    private int resourceState = 0;

    private ResourceManager() {
    }

    public static ResourceManager getInstance() {
        if (instance == null) {
            instance = new ResourceManager();
        }
        return instance;
    }

    public int getResourceState() {
        return resourceState;
    }

    public void setResourceState(int resourceState) {
        this.resourceState = resourceState;
    }
}
