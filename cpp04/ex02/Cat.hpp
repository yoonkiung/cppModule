#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &		operator=( Cat const & rhs );

		void makeSound() const;

	private:
		Brain *brain;
};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* Cat_H */