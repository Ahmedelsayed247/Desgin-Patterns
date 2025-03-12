//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        // Creating a Rectangle using its Factory
        IShapeFactory rectangleFactory = new RectangleFactory();
        Shape rectangle = rectangleFactory.createShape();
        rectangle.calculateArea();

        // Creating a Circle using its Factory
        IShapeFactory circleFactory = new CircleFactory();
        Shape circle = circleFactory.createShape();
        circle.calculateArea();
    }
}