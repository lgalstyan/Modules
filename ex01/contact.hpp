#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
    public:
        Contact();
        void set_first_name(std::string n);
        void set_last_name(std::string n);
        void set_nickname(std::string n);
        void set_phone_number(std::string n);
        void set_darkest_secret(std::string n);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret();
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
	    std::string _phone_number;
        std::string _darkest_secret;
};

#endif