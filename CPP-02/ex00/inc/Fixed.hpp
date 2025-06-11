#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {
	private:
		int	fixedvalue;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
};	

#endif
