#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const AAnimal* meta = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    Cat cat;
    Cat cat2;
    // const std::string str = "xelq"; 
    // cat.SetBrain(str);
    // cat.DisplayBrain();
    cat2 = cat;
    // cat2.DisplayBrain();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    // delete meta;
    delete i;
    delete j;
    system("leaks Abstract");
    return (0);
}