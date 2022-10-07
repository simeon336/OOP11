#include "point.hh"

Point::Point() {}

Point::Point(const int &x, const int &y){
    this->x = x;
    this->y = y;
}
int Point::getX()const{
    return this->x;
}

int Point::getY()const{
    return this->y;
}

void Point::setX(int x){
    this->x = x;
}

void Point::setY(int y){
    this->y = y;
}