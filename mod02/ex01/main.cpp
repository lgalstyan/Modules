#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    // // float w = 1 << 8;
    // float   a = 8.995533;
    // int     fix = roundf(a * ( 1 << 8));
    // float   ret = static_cast<float>(fix / ( 1 << 8));
    // std::cout << a << std::endl;
    // std::cout << fix << std::endl;
    // std::cout << ret << std::endl;
    return 0;
}