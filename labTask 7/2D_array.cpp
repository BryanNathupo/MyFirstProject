#include <iostream>
using namespace std;

int main()
{
   int sizeOfRow, sizeOfColumn;

    cout << "Enter the size of the Row:";
    cin >> sizeOfRow;
    cout << "Enter the size of the Column:";
    cin >> sizeOfColumn;
while(sizeOfRow > 3 || sizeOfColumn > 3)
{
     cout << "Fatal. Dimensions should not exceed 3!!";
     cout <<endl <<endl;
     cout << "Enter the size of the Row:";
     cin >> sizeOfRow;
     cout << "Enter the size of the Column:";
     cin >> sizeOfColumn;
}
     cout <<endl;
     //Creating an array of pointers
     double ** twoDArray = new double *[sizeOfRow];
     for(int a = 0; a < sizeOfRow; a++)
     {
          //An array of doubles
        twoDArray[a] = new double [sizeOfColumn]; 
     }

     cout << "Input the values to the Array:" <<endl;
     for(int i = 0; i < sizeOfRow; i++)
     {
        for(int b = 0; b < sizeOfColumn; b++)
        {
             int inputs;
             cin >> inputs;
             twoDArray[i][b] = inputs;
             cout << "TwoDArray[" << i <<"]" <<"["<< b <<"]" << " = " << inputs <<endl;
        }
   }
      //To output the values of the inputed values
     cout << endl;
     cout << "The values of the TwoDimensional Array are:" <<endl;
     for(int c = 0; c < sizeOfRow; c++)
     {
          //Outputing the values of the Array

        for(int d = 0; d < sizeOfColumn; d++)
        {
            cout << twoDArray[c][d] <<", ";
        }
    } 
    for(int  e = 0;e < sizeOfRow; e++){
           //Deleting single dimensional Array of doubles
          delete [] twoDArray[e];
    }
          //Deleting array of pointers
          delete [] twoDArray;
 
    return 0;
}