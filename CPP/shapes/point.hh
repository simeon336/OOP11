#ifndef _POINT_HH_
#define _POINT_HH_
#include <iostream>
using namespace std;

class Point{
    int x; //cordinates of the point
    int y;

    public:
        int getX()const;
        int getY()const;
        void setX(int x);
        void setY(int y);
};

#endif