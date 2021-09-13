#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal{
private:
	Brain *_brain;
public:
	Cat(void);
	Cat(Cat & copyDog);
	Cat &operator=(Cat & operatorCat);
	virtual ~Cat(void);
	void makeSound(void) const;
	Brain &getBrain(void) const;
};

std::ostream &operator<<(std::ostream &out, const Cat &cat);

#endif