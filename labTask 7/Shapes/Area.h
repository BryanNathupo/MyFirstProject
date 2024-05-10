#include <iostream>
#include <cmath>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "string"
using namespace shapes;
using namespace std;

//Creating Area Class
class Area
{
    public:
        static double calculateAreaOfSquare(const Square& square) //An instance of Square class
        {   
            double storeSideLength;
            storeSideLength = square.getSideLength();
            return (storeSideLength * storeSideLength);
        }

        static double calculateAreaOfTriangle(const Triangle& triangle)// An instance of Triangle class
        {
           double storeBase, storeHeight;
           storeBase = triangle.getBase();
           storeHeight = triangle.getHeight();
           return (storeBase * storeHeight * 0.5);//To calculate area of Triangle
           
        } 

        static double calculateAreaOfCircle(const Circle& circle)// An object of Circle class
        {
            double newRadius;
            newRadius = circle.getRadius();
            return 2 * ( newRadius* M_PI );//To calculate Area of Circle
        }
};