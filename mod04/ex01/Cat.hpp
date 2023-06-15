#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator= (const Cat& rhs);
        virtual ~Cat();
        std::string getType() const;
        void makeSound() const;
    private:
        std::string _type;
        Brain *_brain;
};

#endif