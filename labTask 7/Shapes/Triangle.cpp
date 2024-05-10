#include "Triangle.h"
#include "Area.h"
#include <iostream>
#include <string>
using namespace shapes;
using namespace std;

//Implementing Triangle class
shapes::Triangle::Triangle()// Implementing default constructor
{
    base = 0;
    height = 0;
}

shapes::Triangle::Triangle(double newBase, double newHeight){
    //Implementing overloaded constructor
    base = newBase;
    height = newHeight;
}
//shapes::Triangle::~Triangle(){
    //Destructor
//}

//Implementing getter and setter member functions
void shapes::Triangle::setBase(double newBase){
    base = newBase;
}
double shapes::Triangle::getBase() const{
    return base;
}
void shapes::Triangle::setHeight(double newHeight){
    height = newHeight;
}
double shapes::Triangle::getHeight() const{
    return height;
}
