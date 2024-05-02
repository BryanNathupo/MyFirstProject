#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(){
    bool x = false;
    double enterInteger;
    cout<<"Enter an integer value between 5 and 10 "<<endl;
    cin>>enterInteger;

    while (!x)
    {
        if(int(enterInteger) == enterInteger && enterInteger != 0.0 && enterInteger > 5.0 && enterInteger < 10.0){
                cout<< "Your value("<< enterInteger <<") has been accepted."<<endl;
                x = true;
                    }
            else if(int(enterInteger) == 0 ){
                cout<<"Sorry, you entered an invalid number, please try again"<<endl;
                 cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cin>>enterInteger;
                
            }
            /*else if(int(enterInteger)!= enterInteger){
                cout<<"please enter an integer between 5 and 10"<<endl;
                cin>>enterInteger;
            }*/
            else{
                cout<<"You entered "<<enterInteger<<". Please enter a value between 5 and 10 :"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cin>>enterInteger;
                
            }
    }
    
    return 0;
   }
   

