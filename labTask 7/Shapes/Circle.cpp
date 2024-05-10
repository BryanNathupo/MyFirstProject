#include "Circle.h"
#include "Area.h"
#include <string>
using namespace std;

//Implementing Circle class Member functions
shapes::Circle::Circle()//default constructor
{
    radius = 0;
}
shapes::Circle::Circle(double newRadius)//Overloaded constructor
{
    radius = newRadius;
}
shapes::Circle::~Circle(){
    //default constructor
}
//Implementing setter and getter methods
void shapes::Circle::setRadius(double newRadius)
{
    radius = newRadius;
}
double shapes::Circle::getRadius() const
{
    return radius;
}