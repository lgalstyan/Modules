#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Called Cat's default constructor\n";
}

Cat::Cat(std::string typ)
{
    _type = typ;
    _brain = new Brain();
    std::cout << "Called Cat's constructor with parametrs\n";
}

std::string Cat::getType() const
{
    return (_type);
}

Cat::Cat(const Cat &other)
{
    std::cout << "Called Cat's copy constructor\n";
    _brain = new Brain();
    *this = other;
}

Cat& Cat::operator= (const Cat& rhs)
{
    std::cout << "Called Cat's copy assigment constructor\n";
    if (this != &rhs)
    {
        delete _brain;
        _brain = new Brain(*rhs._brain);
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

// void Cat::SetBrain(const std::string &str)
// {
//     _brain->set_idea(str);
// }

// void Cat::DisplayBrain()
// {
//     _brain->display_ideas();
// }