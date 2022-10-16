#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    std::vector<int>::iterator iter = easyfind(vec, 3);
    std::cout << iter;
}