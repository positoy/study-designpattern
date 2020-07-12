package creational.builder;

public class CarBuilder {
    Car car;

    CarBuilder() {
        car = new Car();
    }

     void reset() {
        car = new Car();
    }

     void setSeatNumber(int seatNumber) {
        car.seatNumber = seatNumber;
    }

     void setDoorNumber(int doorNumber) {
        car.doorNumber = doorNumber;
    }

     void setEngine(String engine) {
        car.engine = engine;
    }

     Car getCar() {
        return car;
    }
}
