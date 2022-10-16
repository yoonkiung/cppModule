#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T>
Array::Array() : _n(0)
{
	_arr = new T[0];
}

template <typename T>
Array::Array(unsigned int n) : _n(n)
{
	_arr = new T[n];
}

template <typename T>
Array::Array( const Array & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
Array::~Array()
{
	delete _arr[];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
Array &				Array::operator=( Array const & rhs )
{
	if ( this != &rhs )
	{
		this->_n = rhs._n;
		this->_arr = new T[_n];
		for (int i = 0; i < _n; i++)
			this->_arr[i] = rhs._arr[i];
	}
	return *this;
}

template <typename T>
T &		Array::operator=( int index )
{
	try
	{
		T &temp = _arr[index];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (temp);
}

/* ************************************************************************** */