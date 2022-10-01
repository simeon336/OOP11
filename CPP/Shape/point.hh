#ifndef _POINT_HH_
#define _POINT_HH_


class Point{
    private:
        float x;
        float y;
    public:
        Point();
        Point(float x, float y) : x(x), y(y) {};
        void setX(float x);
        void setY(float y);
        int getX()const;
        int getY()const;

};

#endif