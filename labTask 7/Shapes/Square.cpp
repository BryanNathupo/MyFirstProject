#include "Square.h"
#include "Area.h"
#include <iostream>
#include <string>

using namespace std;
//Implementation of Square class
shapes::Square::Square()//Default constructor implementation
{
    sideLength = 0;
}
shapes::Square::Square(double newSideLength)//Implementation of Overloaded constructor
{
    sideLength = newSideLength;
}
shapes::Square::~Square(){
    //Destructor
}
void shapes::Square::setSideLength(double newSideLength){
    sideLength = newSideLength;
}
double shapes::Square::getSideLength() const{
    return sideLength;
    
}
