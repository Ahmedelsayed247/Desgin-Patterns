public class Rectangle implements Shape{
    public Rectangle(){
        System.out.println("I am Rectangle");
    }
    @Override
    public void calculateArea() {
        System.out.println("Rectangle Area");
    }
}
