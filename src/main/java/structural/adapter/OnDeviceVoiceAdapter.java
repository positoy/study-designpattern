package structural.adapter;

public class OnDeviceVoiceAdapter implements VoiceControlInterface {

    OnDeviceVoice onDeviceVoice = new OnDeviceVoice();

    @Override
    public int start() {
        onDeviceVoice.startEmbeddedService();
        return 0;
    }

    @Override
    public int stop() {
        onDeviceVoice.stopEmbeddedService();
        return 0;
    }

    @Override
    public int cancel() {
        onDeviceVoice.cancelEmbeddedService();
        return 0;
    }
}
