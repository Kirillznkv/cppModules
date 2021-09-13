#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongDog : public WrongAnimal{
private:
public:
	WrongDog(void);
	WrongDog(WrongDog & copyWrongDog);
	WrongDog &operator=(WrongDog & operatorWrongDog);
	~WrongDog(void);
	void makeSound(void) const;
};

std::ostream &operator<<(std::ostream &out, const WrongDog &wrongDog);

#endif