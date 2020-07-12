package creational.factory;

public abstract class Logistics {
    public void planDelivery() {
        System.out.println("getting customer requests");
        Transport t = createTransport();
        t.deliever();
    }
    public abstract Transport createTransport();
}