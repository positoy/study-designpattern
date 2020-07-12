package creational.prototype;

public class Circle extends Shape{

    public int radius;

    public Circle(int x, int y, int radius) {
        super(x, y);
        this.radius = radius;
    }

    public Circle(Shape s, int radius) {
        super(s);
        this.radius = radius;
    }

    public Circle(Circle c) {
        this(c.x, c.y, c.radius);
    }

    @Override
    public Shape clone() {
        return new Circle(this);
    }
}
