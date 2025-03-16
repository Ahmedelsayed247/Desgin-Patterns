public class BasicPizza implements PizzaComponent{
    @Override
    public double getCost() {
        return 10.0;
    }

    @Override
    public String getDescription() {
        return "Basic Pizza";
    }
}
