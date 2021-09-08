#include "Fixed.hpp"

const int Fixed::_numberFractionalBits = 8;

Fixed::Fixed(void){
	std::cout<<"Default constructor called"<<std::endl;
	_fixedValue = 0;
}

Fixed::Fixed(int value){
	std::cout<<"Int constructor called"<<std::endl;
	_fixedValue = value * (1 << _numberFractionalBits);
}

Fixed::Fixed(float value){
	std::cout<<"Float constructor called"<<std::endl;
	_fixedValue = roundf(value * (1 << _numberFractionalBits));
}

Fixed::~Fixed(void){
	std::cout<<"Destructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &copyFixed){
	std::cout<<"Copy constructor called"<<std::endl;
	this->operator=(copyFixed);
}

Fixed& Fixed::operator = (const Fixed &operatorFixed){
	std::cout<<"Assignation operator called"<<std::endl;
	_fixedValue = operatorFixed._fixedValue;
	return(*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed){
	out<<fixed.toFloat();
	return (out);
}

void Fixed::setRawBits(int raw){
	std::cout<<"getRawBits member function called"<<std::endl;
	_fixedValue = raw;
}

int Fixed::getRawBits(void) const{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (_fixedValue);
}

float Fixed::toFloat(void) const{
	return (_fixedValue / float(1 << _numberFractionalBits));
}

int Fixed::toInt(void) const{
	return (_fixedValue / (1 << _numberFractionalBits));
}

