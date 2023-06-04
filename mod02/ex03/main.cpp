#include "Point.hpp"

int main()
{
    Point p1(0, 4), p2, p3(12);
    Point p(1, 2);

    if (bsp(p1, p2, p3, p))
        std::cout << "Point is inside triangle!\n";
    else
        std::cout << "Point isn't inside triangle!\n";
}
