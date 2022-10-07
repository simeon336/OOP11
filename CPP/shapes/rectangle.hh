#ifndef _RECTANGLE_HH_
#define _RECTANGLE_HH_
#include "shape.hh"


class Rectangle : public Shape{
    Point upLeft;
    Point upRight;
    int a; // stranite
    int b;
public:
    Rectangle(const Point &upLeft, const Point &upRight);
    int getA(const Point &upLeft, const Point &upRight)const;
    int getB(const Point &upLeft, const Point &upRight)const;
    float getArea(const Point &upLeft, const Point &upRight) const;
   // virtual float getPerimeter() const;

};

#endif