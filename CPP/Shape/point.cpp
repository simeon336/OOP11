#include "point.hh"
#include <iostream>

using namespace std;

void Point::setX(float x){
    this->x = x;
}

void Point::setY(float y){
    this->y = y;
}

int Point::getX()const{
    return this->x;
}

int Point::getY()const{
    return this->y;
}