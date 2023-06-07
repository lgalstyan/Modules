#include "Cure.hpp"

Cure::Cure()
{
    _type = "Cure";
    std::cout << "Called Cure's default constructor\n";
}

Cure::Cure(const Cure &other)
{
    std::cout << "Called Cure's copy constructor\n";
    *this = other;
}

Cure& Cure::operator= (const Cure& rhs)
{
    std::cout << "Called Cure's copy assigment constructor\n";
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

Cure* Cure::clone() const
{
    Cure *copy_cure = new Cure;
    return (copy_cure);
}

void Cure::use(ICharacter& obj) const
{
    std::cout <<"* heals "<< obj.getName <<"'s wounds *" ;
}
