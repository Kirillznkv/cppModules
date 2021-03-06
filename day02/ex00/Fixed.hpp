#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int					_fixedValue;
	static const int	_numberFractionalBits;
public:
	Fixed(void);
	Fixed(const Fixed &copyFixed);
	Fixed& operator = (const Fixed &operatorFixed);
	~Fixed(void);
	/*---Functions---*/
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
