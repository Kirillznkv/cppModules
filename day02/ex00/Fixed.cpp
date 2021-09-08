#include "Fixed.hpp"

const int Fixed::_numberFractionalBits = 8;

Fixed::Fixed(void){
	std::cout<<"Default constructor called"<<std::endl;
	_fixedValue = 0;
}

Fixed::~Fixed(void){
	std::cout<<"Destructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &copyFixed){
	std::cout<<"Copy constructor called"<<std::endl;
	this->operator=(copyFixed);
}

Fixed &Fixed::operator = (const Fixed &overloadFixed){
	std::cout<<"Assignation operator called"<<std::endl;
	_fixedValue = overloadFixed.getRawBits();
	return(*this);
}

void Fixed::setRawBits(int raw){
	std::cout<<"getRawBits member function called"<<std::endl;
	_fixedValue = raw;
}

int Fixed::getRawBits(void) const{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (_fixedValue);
}