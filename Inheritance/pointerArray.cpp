#include <iostream>
using namespace std;

int main(){
    int numbersArray[5];
    int* pPointer = nullptr;

   //Assign the address of the element to the pointer
    pPointer = numbersArray;

    *pPointer = 10; //Assign the value to the first element

    *pPointer = 20;//Assign the value to the second element

    //Assign the address to the third element to the pointer
    pPointer = &numbersArray[2];
    *pPointer = 30;//Assign the value to the third element

   //assign the address of the fourth element to the pointer 
   pPointer =numbersArray + 3;
   *pPointer = 40; //Assign the value to the fourth element using indirection and pointer arithmetic

    pPointer = numbersArray;

     //Assign the value to the fourth element using indirection and pointer arithmetic
     *(pPointer + 4)= 50;
     //iterate and output all the elements in the array
     for(int n = 0; n <5; n++){
            cout<<numbersArray[n] << ", ";
     }

     return 0;
}
