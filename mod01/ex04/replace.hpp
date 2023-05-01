#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>

class Replace
{
    public:
        Replace(std::string fn, std::string s1, std::string s2);
        ~Replace();
        void replace_file();
    private:
        std::string _s1;
        std::string _s2;
        std::string _filename;
        
        std::string replace_string(std::string str, std::string s1, std::string s2);
};

#endif