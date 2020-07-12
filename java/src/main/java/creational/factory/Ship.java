package creational.factory;

public class Ship implements Transport {

    @Override
    public void deliever() {
        System.out.println("delivery by Ship");
    }
}
