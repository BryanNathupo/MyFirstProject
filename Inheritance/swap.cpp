#include <iostream>
using namespace std;
int SwapNumbers(int& varA, int& varB)
{
    int varC = varB;
    varB = varA;
    varA = varC;
         //cout << "VarA after swap is: "<<varA<<endl;
    
        // cout << "VarA after swap is: "<<varA<<endl;
    //varA  = varB;
   
    //cout <<"VarB after swap is: "<<varB <<endl;
    return 0;
}

int main(){
int varA = 25;
int varB = 100;
cout << "varA before swap: " << varA << endl; //varA is 25
cout << "VarB before swap: " << varB << endl; //varB is 100

SwapNumbers(varA, varB);
cout << "varA after swap: " << varA << endl; //varA is 100
cout << "VarB after swap: " << varB << endl; //varB is 25
return 0;
}