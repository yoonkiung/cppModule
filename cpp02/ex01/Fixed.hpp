#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(const int val);
		Fixed(const float val);

		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
		
	private:
		int value;
		static const int fract = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif /* *********************************************************** FIXED_H */