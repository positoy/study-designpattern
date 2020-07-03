package structural.adapter;

public class CloudVoiceAdapter implements VoiceControlInterface {

    CloudVoice cloudVoice = new CloudVoice();

    @Override
    public int start() {
        cloudVoice.startCloudService();
        return 0;
    }

    @Override
    public int stop() {
        cloudVoice.stopCloudService();
        return 0;
    }

    @Override
    public int cancel() {
        cloudVoice.cancelCloudService();
        return 0;
    }
}
