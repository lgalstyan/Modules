#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(std::string level)
{
    int i;
    std::string arr_function[4];
    
    i = 0;
    arr_function[0] = "DEBUG";
    arr_function[1] = "INFO";
    arr_function[2] = "WARNING";
    arr_function[3] = "ERROR";
    while (level !=  arr_function[i])
        i++;
    switch (i)
    {
        case 0:
            debug();
            break ;
        case 1:
            info();
            break ;
        case 2:
            warning();
            break ;
        case 3:
            error();
            break ;
        default :
            std::cout << "Nothing\n";
            break ;
    }
}

void Harl::debug( void )
{
    std::cout << "DEBUG level\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n"; 
}

void Harl::info( void )
{
    std::cout << "INFO level\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"; 
}

void Harl::warning( void )
{
    std::cout << "WARNING level\n";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n"; 
}

void Harl::error( void )
{
    std::cout << "ERROR level\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n"; 
}
