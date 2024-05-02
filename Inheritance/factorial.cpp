#include <iostream>
using namespace std;
//COMPUTING THE FACTORIAL OF NUMBER 4
int factorial(int number){
    if(number == 0){
        return 0; //Base condition
    }
    else{
        return number * factorial(number - 1);
    }
}// here number is the parameter
int main(){
    int number; //Declaring a variable 
    cout << "Enter the number:" << endl; 
    cin >> number;//Accepting input on the console
    cout<< factorial(number) <<endl; //Printing the results
}