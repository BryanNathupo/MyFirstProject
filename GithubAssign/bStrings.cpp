#include <iostream>
#include <string>
using namespace std;

int main()
{
    //CREATING AND INTIALIZING THE ARRAY STRING

    string elements[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    string accomodate;
    
    //cout<<hold[0]<<endl;
    for(int y = 0; y <= 7; y++)
    {
        accomodate = elements[y];
        if(accomodate[0] == 'B')
            cout<<accomodate<<endl;
    }

    return 0;
}