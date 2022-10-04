#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name) :
    first_name(first_name), last_name(last_name), nick_name(nick_name) {};

std::string Contact::get_first_name()
{
    return first_name;
}

std::string Contact::get_last_name()
{
    return last_name;
}

std::string Contact::get_nick_name()
{
    return nick_name;
}