#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
}
{
    std::cout << RED << "Wrong section\n";
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    delete meta;
    delete i;
    std::cout << RESET << std::endl;
}
// system("leaks Polymorphism");
return (0);
}