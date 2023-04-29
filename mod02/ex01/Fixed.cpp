#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    _fix_p = 0;
}

Fixed::Fixed(const int nf)
{
    std::cout << "Int constructor called\n";
    _fix_p = nf << _fract_bits; 
}

Fixed::Fixed(const float nf)
{
    std::cout << "Float constructor called\n";
    _fix_p = roundf(nf * (1 << Fixed::_fract_bits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed& Fixed::operator= (const Fixed& rhs)
{
    std::cout << "Copy assignment operator called\n";
    _fix_p  = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    return (_fix_p);
}

void Fixed::setRawBits(int const raw)
{
    _fix_p = raw;
}

int Fixed::toInt(void) const
{
    int res = static_cast<float>(_fix_p) / (1 << _fract_bits);
    return (res);
}

float   Fixed::toFloat(void) const
{
    float res = _fix_p >> _fract_bits;
    return (res);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)
{
    os << fix.toFloat();
    return os;
}
