#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap d("hi");
	d.whoAmI();
	d.attack("hi2");
	DiamondTrap a("a");
	a=d;
	a.whoAmI();
	return (0);
}