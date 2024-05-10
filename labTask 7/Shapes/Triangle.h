#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace shapes
{
    class Triangle
    {
        private:
            double base, height;

        public:
        Triangle();//default constructor

        Triangle(double newBase, double newHeight); //Overloaded constructor
        //Setter member functios
            void setBase(double newBase);
            void setHeight(double newHeight);

            //Getter member functions
            double getBase() const;
            double getHeight() const;
    };
};
