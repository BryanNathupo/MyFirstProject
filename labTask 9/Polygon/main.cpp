#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    /*Rectangle rect; //Rectangle Object
     Triangle trgl;  //Triangle object
      //Polygon poly;  
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
   // Polygon* pPoly3 = &poly;
   
    pPoly1 ->setValues(4, 5);//Calling setValue function
    pPoly2 ->setValues(4, 5);//Calling setValue function for triangle

    //pPoly3 ->setValues(4, 5);

    //cout <<pPoly1->area() <<'\n';
    //cout <<pPoly2->area() << '\n';
    pPoly1->PrintArea();
    pPoly2->PrintArea();*/

    //rewriting main function

    Polygon * pPoly1 = new Rectangle(4, 5);
    Polygon * pPoly2 = new Triangle(4, 5);

    pPoly1->PrintArea();
    pPoly2->PrintArea();

    delete pPoly1; //deallocating the memory but it will be wild pointer after returning
    delete pPoly2;
    
    return 0;
}