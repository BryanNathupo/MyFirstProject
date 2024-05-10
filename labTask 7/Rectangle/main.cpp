#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    //OBJECT INSTANTIATION
    Rectangle rectangle1;
    //Creating another instance
    Rectangle rectangleOverload;
    float newLength, newWidth;

    //To Assign values of length and width
    cout <<"Enter length of rectangle: \n";
    cin >>newLength;
    cout <<"Enter width of rectangle: \n";
    cin >> newWidth;
    cout <<endl;

    rectangle1.setLength(newLength);//Assigning length
    rectangle1.setWidth(newWidth); //Assigning width

//to get the area of the Rectangle  
cout <<"Enter length of rectangle for the oveloaded Constructor: \n";
    cin >>newLength;
    cout <<"Enter width of rectangle for the overloaded constructor: \n";
    cin >> newWidth;
    cout <<endl;
    
rectangleOverload = Rectangle(newLength, newWidth);//CALLING THE OVERLOADED CONSTRUCTOR
cout <<"The area of the Rectangle is " <<rectangle1.getArea()<< "m^2" <<endl;
 cout <<"The area of the Rectangle after OverloadedConstructor is "<<rectangleOverload.getArea()<<"m^2";
 return 0;
}