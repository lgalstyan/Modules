#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
    public:
        Animal();
        Animal(std::string typ);
        Animal(const Animal &other);
        Animal& operator= (const Animal& rhs);
        ~Animal();
        void SetType(std::string typ);
        std::string GetType();
    
    protected:
        std::string _type;
};

#endif