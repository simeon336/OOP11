#include "rectangle.hh"
#include "point.hh"
#include <math.h>

Rectangle::Rectangle(const Point &upLeft, const Point &upRight){
    this->upLeft = upLeft;
    this->upRight = upRight;
}

int Rectangle::getA(const Point &upLeft, const Point &upRight)const{
    int x1, x2;
    if(upLeft.getX() < 0){
        x1 = -upLeft.getX();
    } else{
        x1 = upLeft.getX();
    }

    if(upRight.getX() < 0){
        x2 = -upRight.getX();
    } else{
        x2 = upRight.getX();
    }

    return x1 + x2;
}

int Rectangle::getB(const Point &upLeft, const Point &upRight)const{
    int y1, y2;
    if(upLeft.getY() < 0){
        y1 = -upLeft.getY();
    } else{
        y1 = upLeft.getY();
    }

    if(upRight.getY() < 0){
        y2 = -upRight.getY();
    } else{
        y2 = upRight.getY();
    }

    return y1 + y2;
}

float Rectangle::getArea(const Point &upLeft, const Point &upRight) const{
    return getA(upLeft, upRight) * getB(upLeft, upRight);
}

// float Rectangle::getArea(a, b)const{
//     return getDistance(a, b) * 
// }