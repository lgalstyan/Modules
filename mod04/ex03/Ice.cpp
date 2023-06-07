#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
    std::cout << "Called Ice's default constructor\n";
}

Ice::Ice(const Ice &other)
{
    std::cout << "Called Ice's copy constructor\n";
    *this = other;
}

Ice& Ice::operator= (const Ice& rhs)
{
    std::cout << "Called Ice's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}


Ice* Ice::clone() const
{
    Ice *copy_ice = new Ice;
    return (copy_ice);
}

void Ice::use(ICharacter& obj) const
{
    std::cout << "* shoots an ice bolt at " << obj.getName() <<" *";
}