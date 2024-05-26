#include "Derived.h"
#include <iostream>

using namespace std;

int main()
{
    Base* pba = new Derived(); //casting will be successfull
    Base* pbb = new Base();
    Derived* pd;

    pd = dynamic_cast<Derived*>(pba);

    if(pd == nullptr)
    {
        cout <<"Null pointer on the first type-cast. \n";
    }

    pd = dynamic_cast<Derived*>(pbb);

    if(pd == nullptr) //This will be executed
    {
          cout <<"Null pointer on the second type-cast. \n";
    }

    delete pba; //deallocating the dynamic memory
    pba = nullptr; //to avoid wild pointer

    delete pbb; //deallocating dynamic memory for pbb
    pbb = nullptr; //setting it to null

    return 0;
}