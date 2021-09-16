#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
protected:
	std::string _type;
public:
	/*---Constructors-and-Destructor---*/
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	virtual ~AMateria(void);
	/*---Overload-operator---*/
	AMateria &operator=(const AMateria &op);
	/*---Functions---*/
	std::string const & getType(void) const;
	virtual AMateria *clone(void) const;
	virtual void use(ICharacter & target);
};

#endif