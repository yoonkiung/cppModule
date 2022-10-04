#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    cur_index = 0;
}

void PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nick_name)
{
    if (first_name.length() >= 10)
    {
        first_name.erase(9, first_name.length() - 1);
        first_name.insert(9, ".");

    }
    if (last_name.length() >= 10)
    {
        last_name.erase(9, last_name.length() - 1);
        last_name.insert(9, ".");
    }
    if (nick_name.length() >= 10)
    {
        nick_name.erase(9, nick_name.length() - 1);
        nick_name.insert(9, ".");
    }
    Contact new_contact = Contact(first_name, last_name, nick_name);
    contact[cur_index % 8] = new_contact;
    cur_index++;
}

void PhoneBook::search_contact()
{
    int i = 0;

    while (i < cur_index && i < 8)
    {
        std::cout << "|";
        std::cout.width(10);
        std::cout <<std::right << i + 1;
        std::cout << "|";
        std::cout.width(10);
        std::cout << contact[i].get_first_name();
        std::cout << "|";
        std::cout.width(10);
        std::cout << contact[i].get_last_name();
        std::cout << "|";
        std::cout.width(10);
        std::cout << contact[i].get_nick_name();
        std::cout << "|";
        std::cout << std::endl;
        i++;
    }
}