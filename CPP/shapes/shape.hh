#ifndef _SHAPE_HH_
#define _SHAPE_HH_
#include "point.hh"

class Shape{
public:
    virtual float getArea() = 0;
    virtual float getPerimeter() = 0;
    static float getDistance(const Point &a, const Point &b);
};

#endif