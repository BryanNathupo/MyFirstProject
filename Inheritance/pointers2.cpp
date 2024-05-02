#include <iostream>
using namespace std;

int main()
{
    //Declare a pointer and initialise it
    int* pPointer = nullptr;
    int integerVar = 5;

//Assign the address of the variable to the pointer
pPointer = &integerVar;

//Output the value of integer
cout<< "integerVar is "<<integerVar<<endl;
//output the value address of the integer
cout<< "The address of integerVar is "<<&integerVar<<endl;

//Output the address assigned to the pPointer
cout<< "The address of the pointer is "<<pPointer <<endl;

//Output the address of the pPointer
cout<< "The address of the pPointer is "<<&pPointer<<endl;

//Pointer arithmetics 
cout<<"The value of integerVar after pointe arithmetic "<<*++pPointer<<endl;
 cout<<"++*pPointer "<<++*pPointer<<endl;

return 0;
}