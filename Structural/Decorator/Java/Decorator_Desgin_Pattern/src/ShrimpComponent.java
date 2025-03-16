public class ShrimpComponent extends PizzaDecorator {
    ShrimpComponent(PizzaComponent p) {
       super(p);
    }
    @Override
    public double getCost() {
        return pizza.getCost() + 5.0;
    }

    @Override
    public String getDescription() {
        return pizza.getDescription() + " , Shrimp";
    }
}
