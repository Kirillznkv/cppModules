#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
private:
	std::vector<int> _vec;
	unsigned int _maxSize;
public:
	Span(int maxSize);
	Span(const Span & copy);
	~Span(void);
	Span &operator=(const Span & op);
	void addNumber(int newValue);
	unsigned int shortSpan(void) const;
	unsigned int longestSpan(void) const;
	void fillingSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
	void output(void) const;
	class ErrorSize : public std::exception{
		virtual const char *what(void) const throw();
	};
	class FullArray : public std::exception{
		virtual const char *what(void) const throw();
	};
	class EmptyArray : public std::exception{
		virtual const char *what(void) const throw();
	};
};

#endif