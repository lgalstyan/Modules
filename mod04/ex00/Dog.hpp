#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string typ);
        Dog(const Dog &other);
        Dog& operator= (const Dog& rhs);
        ~Dog();

    private:

};

#endif