#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class Animal
{
    public:
        Animal();
        Animal(std::string typ);
        Animal(const Animal &other);
        Animal& operator= (const Animal& rhs);
        void setType(std::string typ);
        virtual ~Animal();
        virtual std::string getType() const;
        virtual void makeSound() const;
    protected:
        std::string _type;
};

#endif