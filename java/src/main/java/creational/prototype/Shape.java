package creational.prototype;

public abstract class Shape {
    public int x;
    public int y;

    public Shape(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public Shape(Shape s) {
        this.x = s.x;
        this.y = s.y;
    }

    public abstract Shape clone();
}