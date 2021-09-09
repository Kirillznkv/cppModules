#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int					_fixedValue;
	static const int	_numberFractionalBits;
public:
	/*---Constructs-and-destruct---*/
	Fixed(void);
	Fixed(int value);
	Fixed(float value);
	Fixed(const Fixed &copyFixed);
	~Fixed(void);
	/*---Operator-overload---*/
	Fixed &operator = (const Fixed &operatorFixed);
	/*---Comparison-operators---*/
	bool operator == (const Fixed &operatorFixed) const;
	bool operator != (const Fixed &operatorFixed) const;
	bool operator < (const Fixed &operatorFixed) const;
	bool operator <= (const Fixed &operatorFixed) const;
	bool operator > (const Fixed &operatorFixed) const;
	bool operator >= (const Fixed &operatorFixed) const;
	/*---Arithmetic-operators---*/
	Fixed operator + (const Fixed &operatorFixed);
	Fixed operator - (const Fixed &operatorFixed);
	Fixed operator * (const Fixed &operatorFixed);
	Fixed operator / (const Fixed &operatorFixed);
	/*---Increment-and-decrement-operators---*/
	Fixed &operator ++ (void);
	Fixed operator ++ (int);
	Fixed &operator -- (void);
	Fixed operator -- (int);
	/*--Min-max---*/
	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
	/*---Functions---*/
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
