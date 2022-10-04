#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string temp;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    while (true)
    {
        std::cout << "input : ";
        std::cin >> temp;
        if (temp == "ADD")
        {
            std::cout << "first_name : ";
            std::cin >> first_name;
            std::cout << "last_name : ";
            std::cin >> last_name;
            std::cout << "nick_name : ";
            std::cin >> nick_name;
            std::cout << "phone_number : ";
            std::cin >> phone_number;
            std::cout << "darkest_secret : ";
            std::cin >> darkest_secret;
            phonebook.add_contact(first_name, last_name, nick_name);
        }
        else if (temp == "SEARCH")
            phonebook.search_contact();
        else if (temp == "EXIT")
            return (0);
        else
            std::cout << "invalid" << std::endl;
    }
    return (1);
}