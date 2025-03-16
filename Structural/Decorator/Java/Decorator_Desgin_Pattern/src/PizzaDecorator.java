public abstract class PizzaDecorator implements PizzaComponent {
    protected PizzaComponent pizza  ;
    public PizzaDecorator(PizzaComponent p) {
        this.pizza = p ;
    }
}
