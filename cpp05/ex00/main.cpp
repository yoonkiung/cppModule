#include <iostream>

int main()
{
    const std::string a = "abcdef";

    const std::string b = a;
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}