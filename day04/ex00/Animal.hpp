#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
protected:
	std::string _type;
public:
	Animal(void);
	Animal(Animal & copyAnimal);
	~Animal(void);
	Animal &operator=(Animal & operatorAnimal);
	std::string getType(void);
};

std::ostream &operator<< (std::ostream &cout, const Animal &animal);

#endif