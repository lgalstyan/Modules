#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon type) : _weapon_type(type), _name(name){}

HumanA::HumanA(std::string name, std::string type)
{
    _name = name;
    _weapon_type.setType(type);
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout   << _name 
                << " attacks with their "
                << _weapon_type.getType(); 
}