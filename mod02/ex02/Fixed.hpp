#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int nf);
        Fixed(const float nf);
        Fixed(const Fixed &other);
        Fixed& operator = (const Fixed& rhs); //right hand side
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt( void ) const;
        float toFloat( void ) const;
        bool operator < (Fixed f);
        bool operator <= (Fixed f);
        bool operator > (Fixed f);
        bool operator >= (Fixed f);
        bool operator == (Fixed f);
        bool operator != (Fixed f);

        Fixed operator + (Fixed f);
    private:
        int _fix_p;
	    static const int _fract_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif