#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & copyTrap);
	~ScavTrap(void);
	ScavTrap &operator=(const ScavTrap & operatorTrap);
	/*---Functions---*/
	void guardGate(void);
};

std::ostream& operator<< (std::ostream &out, const ScavTrap &trap);

#endif