#include "Person.h"

//Class implementation
Person::Person(){
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(float newWeight){
    mWeight = newWeight;
    mFirstName = "John";
    mAge = 0;
}

Person::Person(string newFirstName):mFirstName(newFirstName)
{

}

Person::~Person(){

}

float Person::operator + (const Person &otherPerson){
    return mWeight + otherPerson.mWeight;
}
bool Person::operator == (const Person& onePerson){

    return  mFirstName == onePerson.mFirstName;
}
bool Person::operator !=(const Person& newPerson)//overloading != operator
{
    return 1;
}
int Person::operator < (const Person& newPerson)
{
    return 1;
}

int Person::operator > (const Person& newPerson)
{
    return 1;
}

Person::operator int()
{
    return mAge;
}
Person::operator string()
{
    return mFirstName;
}

Person::operator float()
{
    return mWeight;
}