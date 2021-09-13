#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal{
private:
	Brain *_brain;
public:
	Dog(void);
	Dog(Dog & copyDog);
	Dog &operator=(Dog & operatorDog);
	virtual ~Dog(void);
	void makeSound(void) const;
	Brain &getBrain(void) const;
};

std::ostream &operator<<(std::ostream &out, const Dog &dog);

#endif