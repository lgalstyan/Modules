#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    public: 
    AMateria(const std::string & type);
    virtual ~AMateria();

    const std::string & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter&) const = 0;

    protected:
        std::string _type;
};

#endif