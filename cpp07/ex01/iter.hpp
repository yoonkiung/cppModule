#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print(T &a)
{
    std::cout << a << " ";
}

template <typename T>
void add(T &a)
{
    a++;
}

template <typename T>
void iter(T *a, int len, void (*f)(T &))
{
    for (int i = 0; i < len; i++)
        f(a[i]);
}

#endif