#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class AAnimal
{
    public:
        AAnimal();
        AAnimal(std::string typ);
        AAnimal(const AAnimal &other);
        AAnimal& operator= (const AAnimal& rhs);
        void setType(std::string typ);
        virtual ~AAnimal();
        virtual std::string getType() const = 0;
        virtual void makeSound() const;

    protected:
        std::string _type;
};

#endif