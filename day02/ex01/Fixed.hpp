#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int					_fixedValue;
	static const int	_numberFractionalBits;
public:
	Fixed(void);
	Fixed(int value);
	Fixed(float value);
	Fixed(const Fixed &copyFixed);
	~Fixed(void);
	Fixed& operator = (const Fixed &operatorFixed);
	/*---Functions---*/
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
