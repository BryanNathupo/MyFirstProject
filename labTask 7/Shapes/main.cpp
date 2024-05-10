#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
#include <string>

using namespace shapes;
using namespace std;

int main()
{
    //Creating Square, Triangle and circle instances
    Square squareObject;
    Triangle triangleObject;
    Circle circleObject;
    bool x = true;
    int input;
    double newSideLength, newBase, newHeight, newRadius;

    cout << "1.Calculate the area of a square: \n";
    cout << "2.Calculate the area of triangle \n";
    cout << "3.Calculate the area of a circle \n" ;
    cout << "4.Quit \n";   
    cout <<"Enter the choice:"<<endl;
    cin >> input;
while(input != 4){
    if(input == 1)
    {
        cout << "Enter side length of a square:"<<endl;
        cin >>newSideLength;
        squareObject.setSideLength(newSideLength);//To assign SideLength
        //Invoking Square 
        Square square(newSideLength);
         cout <<"The area of Square is "<< Area::calculateAreaOfSquare(square)<<"m^2"<<endl;
         cout << endl;
         cout << "1.Calculate the area of a square: \n";
         cout << "2.Calculate the area of triangle \n";
         cout << "3.Calculate the area of a circle \n" ;
         cout << "4.Quit \n"; 
         cout <<"Enter the choice"<<endl;
         cin >>input;
    }

    else if(input == 4)
    {
        break;
    }

    else if(input == 2)
    {
        cout << "Enter the base of triangle"<<endl;
        cin >>newBase;
        cout <<"Enter the height of triangle: "<<endl;
        cin >>newHeight;
        triangleObject.setBase(newBase);
        triangleObject.setHeight(newHeight);

        //Invoking object Triangle
       Triangle triangle(newBase, newHeight);
        cout <<"The area of Triangle is "<<Area::calculateAreaOfTriangle(triangle)<<"m^2"<<endl;
        cout << endl;

        cout << "1.Calculate the area of a square: \n";
        cout << "2.Calculate the area of triangle \n";
        cout << "3.Calculate the area of a circle \n" ;
        cout << "4.Quit \n"; 
        cout <<"Enter the choice"<<endl;
        cin >>input;
    }
    else if(input == 3)
    {
        cout << "Enter the radius of a circle:"<<endl;
        cin >>newRadius;
        //circleObject.setRadius(newRadius);
        Circle circle(newRadius);
        cout <<"The area of Circle is "<<Area::calculateAreaOfCircle(circle)<<"m^2"<<endl;
        cout << endl;

        cout << "1.Calculate the area of a square: \n";
        cout << "2.Calculate the area of triangle \n";
        cout << "3.Calculate the area of a circle \n" ;
        cout << "4.Quit \n"; 
        cout<<"Enter the choice"<<endl;
        cin >>input;
    }
    else if(input > 4 || input == 0)
    {
        cout<< "Fatal.\n Enter the choice: \n";
        cout << endl;

        cout << "1.Calculate the area of a square: \n";
        cout << "2.Calculate the area of triangle \n";
        cout << "3.Calculate the area of a circle \n" ;
        cout << "4.Quit \n"; 
        cin>>input;
    }
    
 } 

}