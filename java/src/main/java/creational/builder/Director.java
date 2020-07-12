package creational.builder;

public class Director {

    public Car getSportsCar() {
        CarBuilder builder = new CarBuilder();
        builder.setDoorNumber(2);
        builder.setSeatNumber(2);
        builder.setEngine("4000hp");
        return builder.getCar();
    }

    public Car getSUVCar() {
        CarBuilder builder = new CarBuilder();
        builder.setDoorNumber(4);
        builder.setSeatNumber(4);
        builder.setEngine("600hp");
        return builder.getCar();
    }
}
