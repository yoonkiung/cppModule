#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : AMateria
{

	public:
		Ice();
		Ice( Ice const & src );
		~Ice();
		
		Ice &				operator=( Ice const & rhs );

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif /* ************************************************************* ICE_H */