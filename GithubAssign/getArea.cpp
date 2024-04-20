#include <iostream>
#include <string>
#include <limits>

using namespace std;

 double area_sqaure (double length)
 {
    double area = length * length;
    return area;
 }
double area_rectangle (double length, double width)
{
     double area = length * width;
     return area;
}
double area_triangle (double base, double height)
{
     double area = 0.5 * base * height;
     return area;
}

int main()
{
 double choice;
    bool condition = false;

    cout<<"Please select the area of the shape to calculate \n1.Sqaure \n2.Rectangle \n3.Triangle \n4.Quit Program \n"<<endl<<"Enter selection:"<<endl;
    cin>>choice;

    while(!condition)
    {
        // CONDITIONS TO BE SATIFIED

        if(choice >=1 || choice < 5)
        {
            if (choice==1)
            {
                double length;
                cout<<"Enter length of the sqaure"<<endl;
                cin>>length;
                cout<<"Area of the sqaure is "<<area_sqaure(length)<<"m^2 "<<endl<<endl;
                cout<<"Please select the area of the shape to calculate \n1.Sqaure \n2.Rectangle \n3.Triangle \n4.Quit Program \n"<<endl<<"Enter selection:"<<endl;
                cin>>choice;
            }
            else if (choice == 2)
            {
                double length;
                double width;
                cout<<"Enter length of the rectangle "<<endl;
                cin>>length;
                cout<<"Enter width of the rectangle "<<endl;
                cin>>width;
                cout<<"Area of the rectangle is "<<area_rectangle(length,width)<<"m^2 "<<endl<<endl;
                cout<<"Please select the area of the shape to calculate \n1.Sqaure \n2.Rectangle \n3.Triangle \n4.Quit Program \n"<<endl<<"Enter selection:"<<endl; 
                cin>>choice;
            }
            else if (choice==3)
            {
                double base;
                double height;
                cout<<"Enter base of the triangle "<<endl;
                cin>>base;
                cout<<"Enter height of the triangle "<<endl;
                cin>>height;
                cout<<"Area of the triangle is "<<area_triangle(base,height)<<"m^2 "<<endl<<endl;
                cout<<"Please select the area of the shape to calculate \n1.Sqaure \n2.Rectangle \n3.Triangle \n4.Quit Program \nEnter selection:"<<endl;
                cin>>choice;
            }
             
            else if (choice == 0 || choice >= 5)
            {
                  cout <<"Invalid choice. Please enter a valid choice\n";
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout<<endl;
                   cout<<"Please select the area of the shape to calculate \n1.Sqaure \n2.Rectangle \n3.Triangle \n4.Quit Program \n"<<endl<<"Enter selection:"<<endl;
                  cin>> choice ;
            }

            else
            {
             condition =true;

            }
       
        }
               
    }
}
