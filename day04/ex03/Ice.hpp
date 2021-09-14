#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria{
public:
	/*---Constructors-and-Destructor---*/
	Ice(void);
	Ice(const Ice & copy);
	~Ice(void);
	/*---Overload-operator---*/
	Ice &operator=(const Ice & op);
	/*---Functions---*/
	AMateria *clone(void) const;
	void use(ICharacter & target);
};

#endif