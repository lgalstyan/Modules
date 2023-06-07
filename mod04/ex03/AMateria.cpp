#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
{
    _type = type;
}

AMateria::~AMateria(){}

const std::string& AMateria::getType() const
{
    return (_type);
}
