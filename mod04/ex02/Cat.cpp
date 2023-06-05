#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Called Cat's default constructor\n";
}

Cat::Cat(std::string typ)
{
    _brain = new Brain();
    _type = typ;
    std::cout << "Called Cat's constructor with parametrs\n";
}

std::string Cat::getType() const
{
    return (_type);
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
    delete _brain;
    std::cout << "Called Cat's destructor\n";
}

void Cat::makeSound() const
{
    std::cout << "Meooow!!\n";
}