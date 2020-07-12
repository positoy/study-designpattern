package creational;

import creational.builder.*;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;

public class Builder {

    @Test
    public void testBuilder() {
        Director director = new Director();

        Car sportsCar = director.getSportsCar();
        assertEquals(sportsCar.getSeatNumber(), 2);
        assertEquals(sportsCar.getDoorNumber(), 2);
        assertEquals(sportsCar.getEngine(), "4000hp");

        Car suvCar = director.getSUVCar();
        assertEquals(suvCar.getSeatNumber(), 4);
        assertEquals(suvCar.getDoorNumber(), 4);
        assertEquals(suvCar.getEngine(), "600hp");
    }
}
