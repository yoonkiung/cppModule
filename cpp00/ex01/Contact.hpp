#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;

    public:
        Contact(std::string first_name, std::string last_name, std::string nick_name);
        Contact();
        
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
};

#endif