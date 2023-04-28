#include "Harl.hpp"

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(std::string level)
{
    int i;
    std::string arr_function[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = 0;
    while (level !=  arr_function[i])
        i++;
    switch (i)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
        default :
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break ;
    }
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.";
    std::cout << "I really do!"; 
    std::cout << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"; 
    std::cout << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I've been coming for years whereas you started working here since last month."; 
    std::cout << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now."; 
    std::cout << std::endl;
}
