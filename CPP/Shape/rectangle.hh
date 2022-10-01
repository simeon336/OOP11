#ifndef _RECTANGLE_HH_
#define _RECTANGLE_HH_
#include "shape.hh"

class Rectangle : public Shape{
    Point upLeft;
    Point downRight;
    int a;
    int b;

public:
    virtual double getArea(float upLeft, float downRight);
    virtual float getDisance(Point upLeft, Point downRight);
    void setA(float a);
    void setB(float b);
};

#endif