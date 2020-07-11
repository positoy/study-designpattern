package creational;

import creational.singleton.ResourceManager;
import org.junit.jupiter.api.Test;

public class Singleton {

    @Test
    void testSingleton() throws InterruptedException {
        Thread thread1 = new Thread(() -> {
            threadMethod("Thread1");
        });
        Thread.sleep(50);
        Thread thread2 = new Thread(() -> {
            threadMethod("Thread2");
        });
        thread1.start();
        thread2.start();
        thread1.join();
        thread2.join();
    }

    public static void threadMethod(String threadName) {
        int differ = threadName.contains("1") ? 1 : 2;
        for (int i = 0; i < 100; i++) {
            ResourceManager.getInstance().setResourceState(i*10-differ);
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println(threadName + " : " + ResourceManager.getInstance().getResourceState());
        }
    }
}
