#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
protected:
	std::string _type;
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal & copyWrongAnimal);
	~WrongAnimal(void);
	WrongAnimal &operator=(WrongAnimal & operatorWrongAnimal);
	/*---Getters---*/
	std::string getType(void) const;
	/*---Functions---*/
	void makeSound(void) const;
};

std::ostream &operator<< (std::ostream &cout, const WrongAnimal &WrongAnimal);

#endif