 #include <iostream>
 #include <fstream>
 using namespace std;

 int main(){
    int store_my_pointer ;
    int *pMyPointer;
    
    pMyPointer = &store_my_pointer;
    cout <<pMyPointer <<endl;
    *pMyPointer = 10;

    cout<<"The value of store_my_pointer is "<<store_my_pointer;
   

    return 0;
 }