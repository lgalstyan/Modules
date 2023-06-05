#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    const int count = 6;

    Animal* animal[count];
    for (int i = 0; i < count; ++i)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < count; ++i)
    {
        delete animal[i];
    }
    // system("leaks Polymorphism");
    return (0);
}