#include <iostream>
using namespace std;

int main()
{
    int firstValue;
    int secondValaue;
    //Declare and initialise  a pointer
    int* pPointer = nullptr;
    
    //Assigning the address of first variable to the pointer
    pPointer = &firstValue;
    //INDIRECTION
    *pPointer = 10;

    //assigning the pointer an address of the secondValue
    pPointer =&secondValaue;
    *pPointer = 20;

    cout<< "FirstValue is "<< firstValue <<endl;
    cout<< "SecondValue is "<<secondValaue <<endl;
    return 0;

}