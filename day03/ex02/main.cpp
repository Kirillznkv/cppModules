#include "FragTrap.hpp"

int main(void){
	FragTrap p1("name1"), p2("name2");

	FragTrap p3(p1);

	p2 = p1;

	p1.highFivesGuys();
	return (0);
}