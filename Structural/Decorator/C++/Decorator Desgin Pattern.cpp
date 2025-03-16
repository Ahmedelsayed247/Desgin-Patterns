#include<bits/stdc++.h>
using namespace std ;
class PizzaComponent
{
public:
    virtual double getCost() = 0 ;
    virtual string printDescription()=0;
};
class BasicPizza : public PizzaComponent
{
    double getCost ()override
    {
        return 10.0;
    }
    string  printDescription () override
    {
        return "Basic Pizza" ;
    }
};
class PizzaDecorator : public PizzaComponent
{
public :
    PizzaComponent  * pizza ;
    PizzaDecorator(PizzaComponent *p): pizza(p) {}


};
class ShrimpComponent :public PizzaDecorator
{
public:
    ShrimpComponent(PizzaComponent *p) :PizzaDecorator(p) {};
    double getCost ()override
    {
        return pizza->getCost() + 5.0;
    }
    string  printDescription () override
    {
        return pizza->printDescription() +" , Shrimp" ;
    }
};
class CheeseComponent :public PizzaDecorator
{
public:
    CheeseComponent(PizzaComponent *p) :PizzaDecorator(p) {};
    double getCost ()override
    {
        return pizza->getCost() + 3.0;
    }
    string  printDescription () override
    {
        return pizza->printDescription() +" , Cheese" ;
    }
};
int main()
{
    PizzaComponent *pizza = new BasicPizza();
    cout << "Order: " << pizza->printDescription() << " | Cost: $" << pizza->getCost() << endl;

    pizza= new ShrimpComponent(pizza) ;
    cout << "Order: " << pizza->printDescription() << " | Cost: $" << pizza->getCost() << endl;


    PizzaComponent *pizza3 = new CheeseComponent(new ShrimpComponent(new BasicPizza()));
    cout << "Order: " << pizza3->printDescription() << " | Cost: $" << pizza3->getCost() << endl;



}
