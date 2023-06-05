#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"

class Dog : public AAnimal
{
    public:
        Dog();
        Dog(std::string typ);
        Dog(const Dog &other);
        Dog& operator= (const Dog& rhs);
        std::string getType() const;
        ~Dog();
        void makeSound() const;
    private:
        std::string _type;
        Brain *_brain;
};

#endif