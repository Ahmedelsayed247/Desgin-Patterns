//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        PizzaComponent pizza = new BasicPizza() ;
        System.out.println("Order: " + pizza.getDescription() + " | Cost: $" + pizza.getCost());

        pizza = new ShrimpComponent(pizza) ;
        System.out.println("Order: " + pizza.getDescription() + " | Cost: $" + pizza.getCost());

        PizzaComponent pizza3 = new CheeseComponent(new ShrimpComponent(new BasicPizza()));
        System.out.println("Order: " + pizza3.getDescription() + " | Cost: $" + pizza3.getCost());

    }
}