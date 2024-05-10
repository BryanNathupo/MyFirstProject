#include "Rectangle.h"
#include <string>

//Member function definition
Rectangle::Rectangle() //Constructor definition
{
    length = 0;
    width = 0;
}

//Assigning member function length via Setter metthod

void Rectangle::setLength(float newLength)
{
    length = newLength;
}

float Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(float newWidth)
{
    width = newWidth;
}
float Rectangle::getWidth()
{
    return width;
}
 float Rectangle::getArea()//To get area of the Rectangle
 {
    return( length * width);
 }
 //IMPLEMENTING OVERLOADED CONSTRUCTOR
Rectangle::Rectangle(float newLength, float newWidth)
{
    //Intializing member variables 
     length = newLength;
     width = newWidth;
}

Rectangle::~Rectangle(){
    //the destructor
}
