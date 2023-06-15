#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator= (const Dog& rhs);
        std::string getType() const;
        virtual ~Dog();
        void makeSound() const;
    private:
        std::string _type;
        Brain *_brain;
};

#endif