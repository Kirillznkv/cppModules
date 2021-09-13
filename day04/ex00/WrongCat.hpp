#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{
private:
public:
	WrongCat(void);
	WrongCat(WrongCat & copyDog);
	WrongCat &operator=(WrongCat & operatorWrongCat);
	~WrongCat(void);
	void makeSound(void) const;
};

std::ostream &operator<<(std::ostream &out, const WrongCat &wrongCat);

#endif