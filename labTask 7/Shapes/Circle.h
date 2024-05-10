#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace shapes
{
    class Circle
    {
        private:
            double radius;

        public:

            Circle();//Default constructor
            Circle(double newRadius);//Overloaded constructor 
            ~Circle();//Destructor

            void setRadius(double newRadius);// Setter method
            double getRadius() const;// Getter method   
    };
};