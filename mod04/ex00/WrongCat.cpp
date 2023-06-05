#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Called WrongCat's default constructor\n";
}

WrongCat::WrongCat(std::string typ)
{
    std::cout << "Called WrongCat's constructor with parametrs\n";
    _type = typ;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "Called WrongCat's copy constructor\n";
    *this = other;
}

WrongCat& WrongCat::operator= (const WrongCat& rhs)
{
    std::cout << "Called WrongCat's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

std::string WrongCat::getType() const
{
    return (_type);
}

WrongCat::~WrongCat()
{
    std::cout << "Called WrongCat's destructor\n";
}

void WrongCat::makeSound() const
{
    std::cout << "Meooow!!\n";
}