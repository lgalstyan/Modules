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
        bool operator < (const Fixed &f) const;
        bool operator > (const Fixed &f) const;
        bool operator <= (const Fixed &f) const;
        bool operator >= (const Fixed &f) const;
        bool operator == (const Fixed &f) const;
        bool operator != (const Fixed &f) const;

        Fixed operator+ (const Fixed &f) const;
        Fixed operator- (const Fixed &f) const;
        Fixed operator* (const Fixed &f) const;
        Fixed operator/ (const Fixed &f) const;

        Fixed& operator++();
        Fixed operator++(int);

        static Fixed& min(Fixed &f1, Fixed &f2);
        static Fixed& max(Fixed &f1, Fixed &f2);
        static const Fixed& min(const Fixed &f1, const Fixed &f2);
        static const Fixed& max(const Fixed &f1, const Fixed &f2);

    private:
        int _fix_p;
	    static const int _fract_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif