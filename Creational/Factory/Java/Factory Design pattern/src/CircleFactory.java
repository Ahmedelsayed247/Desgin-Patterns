public class CircleFactory implements IShapeFactory{
    @Override
    public Shape createShape() {
        return new Circle();
    }
}
