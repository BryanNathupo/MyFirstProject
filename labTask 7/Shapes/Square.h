#pragma once
#include <string>

using namespace std;
namespace shapes
{
    class Square
    {
        //Declaring data members
        private:
            double sideLength;

        //member functions
        public:
            Square(); //Default constructor
            Square(double newSideLength);//Overloaded constructor
            ~Square(); //Destructor

            void setSideLength( double newSideLength);
            double getSideLength() const;
            
    };
};

