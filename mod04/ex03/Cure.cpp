#include "Cure.hpp"

Cure::Cure()
{
    _type = "Cure";
}

Cure::Cure(const Cure &other)
{
    *this = other;
}

Cure& Cure::operator= (const Cure& rhs)
{
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

Cure* Cure::clone() const
{
    // Cure *copy_cure = new Cure(*this);
    return (new Cure(*this));
}

void Cure::use(ICharacter& obj) const
{
    std::cout <<"* heals "<< obj.getName() <<"'s wounds *" ;
}

Cure::~Cure(){}
