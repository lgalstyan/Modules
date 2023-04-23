#include "Fixed.hpp"

static const int _fract_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    _fix_p = 0;
}

Fixed::Fixed(const int nf)
{
    std::cout << "Int constructor called\n";

}

Fixed::Fixed(const float nf)
{
    std::cout << "Float constructor called\n";

}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    _fix_p  = other.getRawBits();
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
    std::cout << "getRawBits member function called\n";
    return (_fix_p);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    _fix_p = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)
{
    os << "aa";
    return os;
}
