#include "Array.hpp"

int main()
{
    Array <float>arr(3);
    arr[0] = 1.1;
    arr[1] = 2.2;
    arr[2] = 3.3;

    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    std::cout << arr[2] << std::endl;
}