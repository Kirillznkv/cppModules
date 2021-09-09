#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
private:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	ClapTrap(void);
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copeTrap);
	~ClapTrap(void);
	ClapTrap &operator = (const ClapTrap &operatorClapTrap);
	/*---Functions---*/
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	/*---Getters---*/
	std::string getName(void) const;
	unsigned int getHitpoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getAttackDamage(void) const;
};

std::ostream& operator<< (std::ostream &out, const ClapTrap &trap);

#endif