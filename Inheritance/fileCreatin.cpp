#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
//Create and open file 
//ofstream myFile("exampleFile.txt");
//myFile<<"This is advanced programming \n";

string line;
fstream myFile("exmapleFile.txt");
if(!myFile.is_open())
{
    while(getline(myFile, line))
    {
        myFile>>line;
    }
    myFile.close();
}
else
{
    cout<<"unable to open the file";
}
return 0;
}
