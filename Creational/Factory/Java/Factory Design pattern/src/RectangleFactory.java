public class RectangleFactory implements IShapeFactory{
    @Override
    public Shape createShape() {
        return new Rectangle();
    }
}
