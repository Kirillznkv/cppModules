#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria{
public:
	/*---Constructors-and-Destructor---*/
	Cure(void);
	Cure(const Cure & copy);
	~Cure(void);
	/*---Overload-operator---*/
	Cure &operator=(const Cure & op);
	/*---Functions---*/
	AMateria *clone(void) const;
	void use(ICharacter & target);
};

#endif