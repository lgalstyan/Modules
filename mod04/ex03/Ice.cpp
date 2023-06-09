#include "Ice.hpp"

Ice::~Ice(){}
Ice::Ice()
{
    _type = "ice";
}

Ice::Ice(const Ice &other)
{
    *this = other;
}

Ice& Ice::operator= (const Ice& rhs)
{
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}


Ice* Ice::clone() const
{
    // Ice *copy_ice = new Ice(*this);
    return (new Ice(*this));
}

void Ice::use(ICharacter& obj) const
{
    std::cout << "* shoots an ice bolt at " << obj.getName() <<" *";
}