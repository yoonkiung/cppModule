#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        int cur_index;
        Contact contact[8];

    public:
        PhoneBook();
        
        void add_contact(std::string first_name, std::string last_name, std::string nick_name);
        void search_contact();
};

#endif