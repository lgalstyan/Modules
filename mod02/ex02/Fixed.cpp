#include "Fixed.hpp"

Fixed::Fixed()
{
    _fix_p = 0;
}

Fixed::Fixed(const int nf)
{
    _fix_p = nf << _fract_bits; 
}

Fixed::Fixed(const float nf)
{
    _fix_p = roundf(nf * (1 << Fixed::_fract_bits));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed& Fixed::operator= (const Fixed& rhs)
{
    if (this != &rhs)
        _fix_p  = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed(){}

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
    int res = _fix_p >> _fract_bits;
    return (res);
}

float   Fixed::toFloat(void) const
{
    float res = static_cast<float>(_fix_p) / (1 << _fract_bits);
    return (res);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)
{
    os << fix.toFloat();
    return os;
}

bool Fixed::operator< (const Fixed &f) const
{
    if (this->getRawBits() < f.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<= (const Fixed &f) const 
{   
    if (this->getRawBits() <= f.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator> (const Fixed &f) const
{   
    if (this->getRawBits() > f.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>= (const Fixed &f) const
{   
    if (this->getRawBits() >= f.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator== (const Fixed &f) const
{   
    if (this->getRawBits() == f.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!= (const Fixed &f) const
{   
    if (this->getRawBits() != f.getRawBits())
        return (true);
    return (false);
}

Fixed Fixed::operator+ (const Fixed &f) const
{
    Fixed tmp;
    tmp = this->toFloat() + f.toFloat();
    return tmp;
}

Fixed Fixed::operator- (const Fixed &f) const
{
    Fixed tmp;
    tmp = this->toFloat() - f.toFloat();
    return tmp;
}

Fixed Fixed::operator* (const Fixed &f) const
{
    Fixed tmp;
    tmp = this->toFloat() * f.toFloat();
    return tmp;
}

Fixed Fixed::operator/ (const Fixed &f) const
{
    Fixed tmp;
    tmp = this->toFloat() / f.toFloat();
    return tmp;
}

// prefix increment
Fixed& Fixed::operator++()
{
    ++this->_fix_p;
    return *this;
}

// postfix increment
Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    operator++();  
    return old;    
}

Fixed&  Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed&  Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

const Fixed&  Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.operator<(f2))
        return (f1);
    return (f2);
}

const Fixed&  Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}