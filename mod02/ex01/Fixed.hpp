#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const int nf);
        Fixed(const float nf);
        Fixed(const Fixed &other);
        Fixed& operator= (const Fixed& rhs); //right hand side
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt( void ) const;
        float toFloat( void ) const;

    private:
        int _fix_p;
	    static const int _fract_bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif