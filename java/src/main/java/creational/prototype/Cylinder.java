package creational.prototype;

public class Cylinder extends Circle{
    public int height;

    public Cylinder(int x, int y, int radius, int height) {
        super(x, y, radius);
        this.height = height;
    }

    public Cylinder(Shape s, int radius, int height) {
        super(s, radius);
        this.height = height;
    }

    public Cylinder(Circle c, int height) {
        super(c);
        this.height = height;
    }

    public Cylinder(Cylinder c) {
        this(c.x, c.y, c.radius, c.height);
    }

    @Override
    public Shape clone() {
        return new Cylinder(this);
    }
}
