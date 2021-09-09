#include "ScavTrap.hpp"

int main(void){
	ScavTrap p1("name1"), p2("name2");

	ScavTrap p3(p1);

	p2 = p1;

	p1.guardGate();

	return (0);
}