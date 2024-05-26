#pragma once
#include "Polygon.h"

class Rectangle : public Polygon
{
    public:
        int area();
        Rectangle(int mWidth, int mHeight);
};