#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Called Dog's default constructor\n";
}

Dog::Dog(std::string typ)
{
    std::cout << "Called Dog's constructor with parametrs\n";
    _type = typ;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Called Dog's copy constructor\n";
    *this = other;
}

Dog& Dog::operator= (const Dog& rhs)
{
    std::cout << "Called Dog's copy assigment constructor\n";
    if (this != other)
    {
        _type = other._type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Called Dog's destructor\n";
}