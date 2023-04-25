#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type)
{
    this->_name = name;
    this->_weapon_type = &type;
}

HumanA::HumanA(){}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout   << _name 
                << " attacks with their "
                << _weapon_type->getType()
                << std::endl; 
}