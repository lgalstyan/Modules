#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#define RED		"\033[31m"
#define RESET	"\033[0m"

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string typ);
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal& operator= (const WrongAnimal& rhs);
        void setType(std::string typ);
        virtual ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
    protected:
        std::string _type;
};

#endif