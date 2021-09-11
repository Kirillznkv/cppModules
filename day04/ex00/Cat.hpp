#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{
private:
public:
	Cat(void);
	Cat(Cat & copyDog);
	Cat &operator=(Cat & operatorCat);
	~Cat(void);
	void makeSound(void);
};

std::ostream &operator<<(std::ostream &out, Dog &cat);

#endif