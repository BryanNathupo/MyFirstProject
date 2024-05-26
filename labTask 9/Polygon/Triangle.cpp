#include "Triangle.h"

int Triangle::area() //calculating Area
{
    return width * height / 2;
}
Triangle::Triangle(int mWidth, int mHeight)
{
    width = mWidth;
    height = mHeight;
}