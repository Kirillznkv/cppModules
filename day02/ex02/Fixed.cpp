#include "Fixed.hpp"

const int Fixed::_numberFractionalBits = 8;

/*---Constructs-and-destruct---*/
Fixed::Fixed(void){
	_fixedValue = 0;
}
Fixed::Fixed(int value){
	_fixedValue = value * (1 << _numberFractionalBits);
}
Fixed::Fixed(float value){
	_fixedValue = roundf(value * (1 << _numberFractionalBits));
}
Fixed::~Fixed(void){
}
Fixed::Fixed(const Fixed &copyFixed){
	this->operator=(copyFixed);
}

/*---Operator-overload---*/
Fixed &Fixed::operator = (const Fixed &operatorFixed){
	_fixedValue = operatorFixed.getRawBits();
	return(*this);
}

/*---Comparison-operators---*/
bool Fixed::operator == (const Fixed &operatorFixed) const{
	return (this->_fixedValue == operatorFixed.getRawBits());
}
bool Fixed::operator != (const Fixed &operatorFixed) const{
	return (this->_fixedValue != operatorFixed.getRawBits());
}
bool Fixed::operator < (const Fixed &operatorFixed) const{
	return (this->_fixedValue < operatorFixed.getRawBits());
}
bool Fixed::operator <= (const Fixed &operatorFixed) const{
	return (this->_fixedValue <= operatorFixed.getRawBits());
}
bool Fixed::operator > (const Fixed &operatorFixed) const{
	return (this->_fixedValue > operatorFixed.getRawBits());
}
bool Fixed::operator >= (const Fixed &operatorFixed) const{
	return (this->_fixedValue >= operatorFixed.getRawBits());
}

/*---Arithmetic-operators---*/
Fixed Fixed::operator + (const Fixed &operatorFixed){
	return (Fixed(toFloat() + operatorFixed.toFloat()));
}
Fixed Fixed::operator - (const Fixed &operatorFixed){
	return (Fixed(toFloat() - operatorFixed.toFloat()));
}
Fixed Fixed::operator * (const Fixed &operatorFixed){
	return (Fixed(toFloat() * operatorFixed.toFloat()));
}
Fixed Fixed::operator / (const Fixed &operatorFixed){
	return (Fixed(toFloat() / operatorFixed.toFloat()));
}

/*---Increment-and-decrement-operators---*/
Fixed &Fixed::operator ++ (void){
	++(this->_fixedValue);
	return (*this);
}
Fixed Fixed::operator ++ (int){
	Fixed buf(*this);
	++(this->_fixedValue);
	return (buf);
}
Fixed &Fixed::operator -- (void){
	--(this->_fixedValue);
	return (*this);
}
Fixed Fixed::operator -- (int){
	Fixed buf(*this);
	--(this->_fixedValue);
	return (buf);
}

/*---Functions---*/
void Fixed::setRawBits(int raw){
	_fixedValue = raw;
}
int Fixed::getRawBits(void) const{
	return (_fixedValue);
}
float Fixed::toFloat(void) const{
	return (_fixedValue / float(1 << _numberFractionalBits));
}
int Fixed::toInt(void) const{
	return (_fixedValue / (1 << _numberFractionalBits));
}

/*--Min-max---*/
Fixed &Fixed::min(Fixed &f1, Fixed &f2){
	if (f1 < f2)
		return (f1);
	return (f2);
}
Fixed &Fixed::max(Fixed &f1, Fixed &f2){
	if (f1 > f2)
		return (f1);
	return (f2);
}
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2){
	if (f1 < f2)
		return (f1);
	return (f2);
}
const Fixed &Fixed::max(const Fixed &f1, const  Fixed &f2){
	if (f1 > f2)
		return (f1);
	return (f2);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed){
	out<<fixed.toFloat();
	return (out);
}
