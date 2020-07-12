package creational;

import creational.factory.*;
import org.junit.jupiter.api.Test;

public class Factory {

    @Test
    public void testFactory() {

        Logistics l = null;

        l = new RoadLogistics();
        l.planDelivery();

        l = new SeaLogistics();
        l.planDelivery();
    }
}
