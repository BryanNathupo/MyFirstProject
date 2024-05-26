#pragma once

class Polygon
{
   /*protected:
    //member variables
        int width;
        int height;

    public:
        void setValues(int mWidth, int mHeight);
        virtual int area();
        */ 
         
       //Rewriting this class
       protected:
         int width;
         int height;
       public:
        void setValues(int mWidth, int mHeight);
        //virtual function
        virtual int area() = 0;
        void PrintArea();

};