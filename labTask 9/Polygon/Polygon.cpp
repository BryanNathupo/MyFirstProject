#include "Polygon.h"
#include <iostream>
using namespace std;
void Polygon::setValues(int mWidth, int mHeight)
{
     width = mWidth;
     height = mHeight;
}

void Polygon::PrintArea()
{
     cout <<this->area() <<'\n';
} 