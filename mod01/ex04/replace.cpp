#include "replace.hpp"

Replace::Replace(std::string fn, std::string s1, std::string s2)
{
    _old_file.open(fn, std::ios::out);
    if (!_old_file)
    {
        std::cout << "Error: " << fn << "file not found\n";
    }
    else
    {
        _s1 = s1;
        _s2 = s2;
    }
    _new_file.open(fn + ".replace", std::ios::in);
    if (!_new_file)
    {
        std::cout << "Error: con't create " << fn + ".replace" << " file\n";
    }
}

std::string Replace::replace_string(std::string str, std::string s1, std::string s2)
{
    size_t end = s1.length();
    size_t start = str.find(s1);
    while (start < str.length() && start != std::string::npos)
    {
        str.erase(start, end);
        str.insert(start, s2);
        start = str.find(s1, start + end);
    }
    return (str);
}

void Replace::replace_file()
{
    std::string rep_string;

    while (std::getline(_old_file, rep_string))
    {
        rep_string = replace_string(rep_string, _s1, _s2);
        _new_file << rep_string;
        std::cout << rep_string << "\n";
        if (!_old_file.eof())
            _new_file << '\n';
        else
            break;
    }
}

Replace::~Replace()
{
    _old_file.close();
    _new_file.close();
}