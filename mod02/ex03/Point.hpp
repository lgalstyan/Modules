#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point();
        Point(const Fixed a, const Fixed b);
        Point(const Fixed a);
        Point(const Point &other);
        Point& operator = (const Point& rhs); //right hand side
        ~Point();
        const Fixed getX();
        const Fixed getY();
};

bool bsp( Point a, Point b, Point c, Point point);

#endif