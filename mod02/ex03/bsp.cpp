#include "Point.hpp"

static Fixed area(Point p1, Point p2, Point p3)
{
    Fixed res;
    res = ((p1.getX()*(p2.getY() - p3.getY())) +
            p2.getX()*(p3.getY() - p1.getY()) +
            p3.getX()*(p1.getY() - p2.getY()))
            * 5;
    if (res < 0)
        res  = res * (-1);
    return (res);
}

bool bsp( Point p1, Point p2, Point p3, Point point)
{
    Fixed a, b, c, find;
    find = area(p1, p2, p3);
    a = area(point, p2, p3);
    b = area(p1, point, p3);
    c = area(p1, p2, point);
    
    if (find == a + b + c && a != 0 && b != 0 && c != 0 )
        return (true);
    return (false);
}
