#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Called Cat's default constructor\n";
}

Cat::Cat(std::string typ)
{
    std::cout << "Called Cat's constructor with parametrs\n";
    _type = typ;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Called Cat's copy constructor\n";
    *this = other;
}

Cat& Cat::operator= (const Cat& rhs)
{
    std::cout << "Called Cat's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Called Cat's destructor\n";
}
