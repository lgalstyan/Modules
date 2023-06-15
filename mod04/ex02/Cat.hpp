#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        Cat();
        Cat(std::string typ);
        Cat(const Cat &other);
        Cat& operator= (const Cat& rhs);
        ~Cat();
        std::string getType() const;
        void makeSound() const;
    private:
        std::string _type;
        Brain *_brain;
};

#endif