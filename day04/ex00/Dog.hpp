#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal{
private:
public:
	Dog(void);
	Dog(Dog & copyDog);
	Dog &operator=(Dog & operatorDog);
	~Dog(void);
	void makeSound(void) const;
};

std::ostream &operator<<(std::ostream &out, const Dog &dog);

#endif