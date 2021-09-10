#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap{
private:
	std::string _name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap & copyTrap);
	~DiamondTrap(void);
	DiamondTrap &operator=(const DiamondTrap & operatorTrap);
	/*---Functions---*/
	void whoAmI(void);
	void attack(std::string const & target);
};

std::ostream& operator<< (std::ostream &out, const DiamondTrap &trap);

#endif