#ifndef HARL_HPP
#define HARL_HPP

#define RESET	"\033[0m"
#define BLUE	"\x1b[35m"
#define RED		"\033[31m"

#include <iostream>

class Harl
{
    public:
        Harl();
        ~Harl();
        void    complain( std::string level );
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif