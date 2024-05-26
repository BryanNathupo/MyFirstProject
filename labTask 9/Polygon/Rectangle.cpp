#include "Rectangle.h"

int Rectangle::area()
{
    return width * height;
}
Rectangle::Rectangle(int mWidth, int mHeight)
{
    width = mWidth;
    height = mHeight;
    
}