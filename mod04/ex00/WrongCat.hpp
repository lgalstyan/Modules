#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string typ);
        WrongCat(const WrongCat &other);
        WrongCat& operator= (const WrongCat& rhs);
        ~WrongCat();
        std::string getType() const;
        void makeSound() const;
    private:
        std::string _type;
};

#endif