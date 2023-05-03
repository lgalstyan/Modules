#include "Point.hpp"

static void barycentric(Point p1, Point p2, Point p3, Point p, Fixed& a, Fixed& b, Fixed& c)
{
    Fixed one(static_cast<float>(1.0));
    Fixed denom = (p2.getY() - p3.getY()) * (p1.getX() - p2.getX())
                + (p3.getX() - p2.getX()) * (p1.getY() - p3.getY());
    a = ((p2.getY() - p3.getY()) * (p.getX() - p3.getX())
        + (p3.getX() - p2.getX()) * (p.getY() - p3.getY())) / denom;
    b = ((p3.getY() - p1.getY()) * (p.getX() - p3.getX())
        + (p1.getX() - p3.getX()) * (p.getY() - p3.getY())) / denom;
    c = one - a - b;
}

bool bsp( Point p1, Point p2, Point p3, Point point)
{
    Fixed a, b, c, nal(static_cast<float>(0.0));
    barycentric(p1, p2, p3, point, a, b, c);

    if (a > nal && b > nal && c > nal)
        return (true);
    return (false);
}
