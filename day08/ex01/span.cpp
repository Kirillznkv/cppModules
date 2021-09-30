#include "span.hpp"

Span::Span(int maxSize){
	if (maxSize < 1)
		throw ErrorSize();
	_maxSize = maxSize;
}

Span::~Span(void){}

Span::Span(const Span & copy){
	this->operator=(copy);
}

void Span::addNumber(int newValue){
	if (_vec.size() >= _maxSize)
		throw FullArray();
	_vec.push_back(newValue);
}

unsigned int Span::shortSpan(void) const{
	if (_vec.size() < 2)
		throw EmptyArray();
	std::vector<int> temporaryVec(_vec);
	std::sort(temporaryVec.begin(), temporaryVec.end());
	unsigned int res = temporaryVec.at(1) - temporaryVec.at(0);
	for (int i = 1; i < (int)temporaryVec.size() - 1; ++i)
		if ((unsigned int)(temporaryVec.at(i + 1) - temporaryVec.at(i)) < res)
			res = temporaryVec.at(i + 1) - temporaryVec.at(i);
	return (res);
}

unsigned int Span::longestSpan(void) const{
	if (_vec.size() < 2)
		throw EmptyArray();
	std::vector<int>::const_iterator maxValue, minValue;
	maxValue = std::max_element(_vec.begin(), _vec.end());
	minValue = std::min_element(_vec.begin(), _vec.end());
	return (*maxValue - *minValue);
}

void Span::fillingSpan(std::vector<int>::const_iterator begVec, std::vector<int>::const_iterator endVec){
	if ((int)(endVec - begVec) + (int)_vec.size() > (int)_maxSize)
		throw FullArray();
	this->_vec.insert(_vec.begin(), begVec, endVec);
}

void Span::output(void) const{
	for (int i = 0; i < (int)_vec.size(); ++i)
		std::cout<<_vec.at(i);
}

Span &Span::operator=(const Span & op){
	if (this == &op)
		return (*this);
	_vec = op._vec;
	_maxSize = op._maxSize;
	return (*this);
}

const char *Span::ErrorSize::what(void) const throw(){
	return "size error";
}

const char *Span::FullArray::what(void) const throw(){
	return "array is full";
}

const char *Span::EmptyArray::what(void) const throw(){
	return "array is empty or has one element";
}