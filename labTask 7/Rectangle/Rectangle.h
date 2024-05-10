#pragma once
#include <string>

class Rectangle
{
    private: //Declaring private member varibles
    float length, width;

    public:
    // Default constructor
    Rectangle();

    Rectangle(float newLength, float newWidth);//Overloaded constructor
    //Default destructor
    ~Rectangle();
    
    void setLength(float newLength);//Setter functions
     void setWidth(float newWidth);
    
    //Getter member function
    float getLength();
    float getWidth();
    //Getter method to return area
    float getArea();

};