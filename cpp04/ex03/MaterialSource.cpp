#include "MaterialSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MaterialSource::MaterialSource() : IMaterialSource()
{
	std::memset(_inventory, 0, sizeof(_inventory));
}

MaterialSource::MaterialSource( const MaterialSource & src )
{
	std::memcpy(this->_inventory, src._inventory, sizeof(this->_inventory));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MaterialSource::~MaterialSource()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MaterialSource &				MaterialSource::operator=( MaterialSource const & rhs )
{
	if ( this != &rhs )
	{
		std::memcpy(this->_inventory, rhs._inventory, sizeof(this->_inventory));
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MaterialSource::learnMateria(AMateria *materia)
{
	int i;
	for (i = 0; i < 4; i++)
		if (_inventory[i] == NULL)
			break;
	if (i == 4)
		std::cout << "inventory is full" << std::endl;
	else
		_inventory[i] = materia;
	delete materia;
}

AMateria* MaterialSource::createMateria(std::string const & type)
{
	AMateria *temp = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL && type == _inventory[i]->getType())
		{	
			temp = _inventory[i];
			break;
		}
	}
	return (temp);
}




/* ************************************************************************** */