#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
    public: 
        Ice();
        Ice(const Ice &other);
        Ice& operator= (const Ice& rhs);
        ~Ice();
        Ice* clone() const;
        void use(ICharacter&) const;
};

#endif