// This is factory design pattern (Creational)
#include<bits/stdc++.h>
using namespace std;
class Shape
{
public:
    virtual void calculateArea ()=0 ;
};
class Rectangle :public Shape
{
    public:
    Rectangle()
    {
        cout << "I am rectangle :)" <<endl;
    }
    void calculateArea() override
    {
        cout << "Area Of the Rectangle" <<endl ;
    }

};
class Circle :public Shape
{
    public:
    Circle()
    {
        cout << "I am Circle :)" <<endl;
    }
    void calculateArea() override
    {
        cout << "Area Of the Circle" <<endl ;
    }

};
// Factory Interface
class IShapeFactory
{
public:
    virtual Shape* createShape() = 0; // Factory method
};
class RectangleFactory  : public IShapeFactory
{
    Shape* createShape()override
    {
        return new Rectangle() ;
    }

};
class CircleFactory  : public IShapeFactory
{
    Shape* createShape()override
    {
        return new Circle () ;
    }
};
int main()
{
    IShapeFactory* rectanglefact = new RectangleFactory() ;
    Shape* rectangle = rectanglefact->createShape() ;
    rectangle->calculateArea() ;

    delete rectangle ;
    delete rectanglefact ;

    IShapeFactory* circlefact = new CircleFactory() ;
    Shape* circle = circlefact->createShape() ;
    circle->calculateArea() ;


    delete circle ;
    delete circlefact ;

}
