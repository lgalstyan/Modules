#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "Called WrongAnimal's constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Called WrongAnimal's copy constructor\n";
    *this = other;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& rhs)
{
    std::cout << "Called WrongAnimal's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Called WrongAnimal's destructor\n";
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

void WrongAnimal::setType(std::string str)
{
    _type = str;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sound!!!\n";
}