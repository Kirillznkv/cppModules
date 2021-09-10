#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap & copyTrap);
	~FragTrap(void);
	FragTrap &operator=(const FragTrap & operatorTrap);
	/*---Functions---*/
	void highFivesGuys(void);
};

std::ostream& operator<< (std::ostream &out, const FragTrap &trap);

#endif