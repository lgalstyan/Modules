#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed& operator= (const Fixed& rhs); //right hand side
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
    
    private:
        int _fix_p;
	    static const int _fract_bits = 8;
};

#endif