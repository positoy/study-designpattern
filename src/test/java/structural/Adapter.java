package structural;

import org.junit.jupiter.api.Test;
import structural.adapter.*;

public class Adapter {

    @Test
    public void testAdapter() {

        VoiceControlInterface voiceAdapter = null;

        voiceAdapter = new OnDeviceVoiceAdapter();
        voiceAdapter.start();
        voiceAdapter.stop();
        voiceAdapter.cancel();

        voiceAdapter = new CloudVoiceAdapter();
        voiceAdapter.start();
        voiceAdapter.stop();
        voiceAdapter.cancel();
    }
}
