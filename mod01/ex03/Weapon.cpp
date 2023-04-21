#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string a) : _type(a){}

Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
    return (_type);
}

void Weapon::setType(std::string typ)
{
    _type = typ;
}