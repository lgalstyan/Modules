#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _weapon_type = NULL;
}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &type)
{
    _weapon_type = &type;
}

void HumanB::attack()
{
    std::cout   << _name 
                << " attacks with their "
                << _weapon_type->getType()
                << std::endl;
}