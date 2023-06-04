#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string typ);
        Cat(const Cat &other);
        Cat& operator= (const Cat& rhs);
        ~Cat();
    private:
        
};

#endif