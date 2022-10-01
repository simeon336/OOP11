#include "shape.hh"
#include <math.h>

float Shape::getDistance(const Point &a, const Point &b){
    return sqrt((a.getX() - b.getX())^2 + (a.getY() - b.getY())^2);
}