#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP

# include "AMateria.hpp"
# include "IMaterialSource.hpp"

class MaterialSource : IMaterialSource
{

	public:

		MaterialSource();
		MaterialSource( MaterialSource const & src );
		~MaterialSource();

		MaterialSource &		operator=( MaterialSource const & rhs );

		void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:
		AMateria *_inventory[4];
};


#endif /* ************************************************** MATERIALSOURCE_H */