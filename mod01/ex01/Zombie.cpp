#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << RED << "A zombie named " << RESET << _name <<  RED << " is dead\n" << RESET ;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

 void Zombie::setName(std::string name)
{
    _name = name;
}