package creational;

import creational.prototype.*;
import static org.junit.jupiter.api.Assertions.assertEquals;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;

public class Prototype {

    @Test
    public void testPrototype() {
        ArrayList<Shape> arr = new ArrayList<>();
        arr.add(new Circle(10,20,5));
        arr.add(new Cylinder((Circle)arr.get(0), 10));


        assertEquals(arr.get(0).x, arr.get(1).x);
        assertEquals(arr.get(0).y, arr.get(1).y);
        assertEquals(((Circle) arr.get(0)).radius, ((Circle)arr.get(1)).radius);

        Cylinder cylinder = (Cylinder) arr.get(1);
        assertEquals(cylinder.height, 10);
    }
}
