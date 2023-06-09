#include "AMateria.hpp"
AMateria::AMateria(){}

AMateria::AMateria(const std::string &type)
{
    _type = type;
}

AMateria::~AMateria(){}

const std::string& AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target) const
{
      std::cout << "* unknown materia used " << target.getName() << " *" << std::endl;
}