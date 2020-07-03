package structural.adapter;

public class OnDeviceVoice {

    public void startEmbeddedService() {
        System.out.println("local service started.");
    }
    public void stopEmbeddedService() {
        System.out.println("local service stopped.");
    }
    public void cancelEmbeddedService() {
        System.out.println("local service canceled.");
    }
}
