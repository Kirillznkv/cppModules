#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
protected:
	std::string _type;
public:
	Animal(void);
	Animal(Animal & copyAnimal);
	virtual ~Animal(void);
	Animal &operator=(Animal & operatorAnimal);
	/*---Getters---*/
	std::string getType(void) const;
	/*---Functions---*/
	virtual void makeSound(void) const;
};

std::ostream &operator<< (std::ostream &cout, const Animal &animal);

#endif