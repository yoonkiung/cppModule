#include "easyfind.hpp"

int main()
{
    // std::vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    
    // std::vector<int>::iterator iter = easyfind(vec, 1);
    // std::cout << *iter;
    {
		std::vector<int> vec(5, 5);
		for (int i = 0; i < 5; i++)
			vec[i] = i;
		std::vector<int>::iterator found = easyfind(vec, 2);
		if (found == vec.end())
			std::cout << "cannot find 2 in vector" << std::endl;
		else
			std::cout << "found 2 in vector " << *found << std::endl;
		if (easyfind(vec, 99) == vec.end())
			std::cout << "99 not found in vector" << std::endl;
	}
}