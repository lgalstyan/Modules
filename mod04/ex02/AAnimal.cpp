#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
    _type = "AAnimal";
    std::cout << "Called AAnimal's default constructor\n";
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "Called AAnimal's copy constructor\n";
    *this = other;
}

AAnimal& AAnimal::operator= (const AAnimal& rhs)
{
    std::cout << "Called AAnimal's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Called AAnimal's destructor\n";
}

std::string AAnimal::getType() const
{
    return (_type);
}

void AAnimal::setType(std::string str)
{
    _type = str;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal makes sound!!!\n";
}