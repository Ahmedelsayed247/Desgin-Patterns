public class Circle implements Shape{
    public Circle() {
        System.out.println("I am Circle");
    }

    @Override
    public void calculateArea() {
        System.out.println("Circle Area");
    }
}
