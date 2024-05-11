#pragma once
#include <string>

using namespace std;

class Person
{
    public:
    Person();
    Person(float mWeight);
    Person(string newFirstName);
    int findAge(int mAge);
    ~Person();

    operator int(); //Conversion operator declaration

    operator string();//Conversion operator for string

    operator float(); //Convension operator for float
    
    //Overload + operator
    float operator + (const Person& otherPerson);

    //Overload == operator
    bool operator == (const Person& onePerson);

    //Overload != operator
    bool operator != (const Person& onePerson);

    //Overload less than operator(Question e) using myAge
    int operator < (const Person& newPerson);
    //To overload greater than operator
    int operator > (const Person& newPerson);

    private: //Member variables
    float mWeight;
    string mFirstName;
    int mAge;

};
