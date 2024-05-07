#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sizeArray;
    //to enter the size of the array
    cout <<"Enter the dimension of the array:"<<endl;
    cin >> sizeArray;
    //Declaring the dynamic array of integers and Strings respectively

    int* arrayOfIntegers = new int[sizeArray];//dynamic array for integers

    //Dynamic array for Strings
    string* arrayOfStrings = new string[sizeArray];

     cout<< "Enter " << sizeArray << " integers:" <<endl;
    for(int i = 0; i < sizeArray; i++)
    {   
        //Assigning values to the index of the Integer Array
        int inputInteger;
        cin >> inputInteger;
        arrayOfIntegers[i] = inputInteger;

    }
    //To assign values to the index of Array of Strings
    cout<< "Enter "<<sizeArray << " Strings: "<<endl;
    for(int x = 0; x < sizeArray; x++)
    {
        string inputString;
        cin >> inputString;
        arrayOfStrings[x] = inputString;
    }
     cout<<"The elements are of the array of integers are: " <<endl;
    for(int y = 0; y < sizeArray; y++ )
    {
        cout <<arrayOfIntegers[y]<<", ";

    }
    //Deallocating the dynammic memory for array of integers
    delete[] arrayOfIntegers;
    cout <<endl;
    
    //To output the values for the array of integers
    cout<< "The elements of the array of strings are:" <<endl;
    for(int y = 0; y < sizeArray; y++)
    {
        cout <<arrayOfStrings[y] <<", ";
    }
    //Deallocating the dynamic memory for an array of integers
    delete[] arrayOfStrings;

    return 0;
}
