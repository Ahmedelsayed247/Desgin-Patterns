public class CheeseComponent extends PizzaDecorator{
    CheeseComponent(PizzaComponent p) {
        super(p);
    }
    @Override
    public double getCost() {
        return pizza.getCost() + 3.0 ;
    }

    @Override
    public String getDescription() {
        return pizza.getDescription() + " ,Cheese";
    }
}
