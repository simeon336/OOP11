#ifndef _SHAPE_HH_
#define _SHAPE_HH_
#include "point.hh"


class Shape : public Point{
    public:
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
        virtual int getDistance() = 0;
};


#endif