#ifndef _SHAPE_HH_
#define _SHAPE_HH_
#include "point.hh"

class Shape{
public:
    virtual float getArea(const Point &upLeft, const Point &upRight)const = 0;
    //virtual float getPerimeter(const Point &a, const Point &b) = 0;
   // static float getDistance(const Point &upLeft, const Point &upRight);
};

#endif