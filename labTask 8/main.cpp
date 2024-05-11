#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Person Jane = Person (60.0f);
    Person John = Person (75.5f);

    float totalWeight = Jane + John;
    cout << endl;
    cout << "Total Weight "<< totalWeight<<endl;
    Person onePerson2(John) , onePerson3(Jane);

    
    if(John == Jane)
    {
        cout <<"This is the same person" <<endl;
    }
    if(John != Jane)
    {
        cout << "This is NOT the same person" <<endl;
    }

    

    Person newPerson1(15);
    Person newPerson2(20);

    if(Jane < John)
    {
        cout <<"Jane is younger than John" <<endl;
    }

    if(John > Jane)
    {
        cout << "John is older than Jane" <<endl;
    }
    cout <<endl;
    //operator Conversion calls
    int johnAge = John;
    cout <<"John's Age:" << johnAge <<endl;

    string janeFirstName = Jane;
    cout <<"Jane's FirstName "<< janeFirstName <<endl;
     
     float janeWeight = Jane;
     cout <<"Jane's weight " <<janeWeight<<endl;

    return 0;
}