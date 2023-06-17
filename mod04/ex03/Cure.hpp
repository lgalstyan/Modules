#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &other);
        Cure& operator= (const Cure& rhs);
        ~Cure();
        Cure* clone() const;
        void use(ICharacter&) const;
};

#endif