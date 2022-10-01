#ifndef _RECTANGLE_HH_
#define _RECTANGLE_HH_
#include "shape.hh"
#include "point.hh"

class Rectangle : public Shape{
    Point upLeft;
    Point upRight;
public:
    Rectangle(const Point &upLeft, const Point &upRight){
        this->upLeft = upLeft;
        this->upRight = upRight;
    }
    float getArea() const;
    float getPerimeter() const;

};

#endif