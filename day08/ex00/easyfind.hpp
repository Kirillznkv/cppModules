#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class NotFound : public std::exception{
	virtual const char *what() const throw(){return "not found";}
};

template <typename T>
typename T::iterator easyfind(T &intContainer, int x)
{
	typename T::iterator elem;
	elem = std::find(intContainer.begin(), intContainer.end(), x);
	if (elem == intContainer.end())
		throw NotFound();
	return(elem);
}

#endif