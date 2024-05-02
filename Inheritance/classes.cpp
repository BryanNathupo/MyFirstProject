#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

//Declaring a class
class Student
{
    string fName;
    string lName;

    //declaring member variable

    void initialize();
    int calculateAge(int currentYear, int yearBorn);
};

//Implementation of member function
void Student::initialize()
{
    fName = "Bryan";
    lName = "Nathupo";
}
//implementaation of member function
int student::calculateAge(int currentYear, int yearBorn)
{
    newYear = currentYear - yearBorn;
}


int main()
{
    #include "Student.h"
    //instatiation
    student calculations;
    cout <<calculation.initialize()<<endl;
}