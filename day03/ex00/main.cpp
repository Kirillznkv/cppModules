#include "ClapTrap.hpp"

int main(void){
	ClapTrap p1("player1"), p2("player2"), p3("player3");

	//Первый игрок атакует второго 10 раз, чтобы он умер
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());
	p1.attack("player2");
	p2.takeDamage(p1.getAttackDamage());

	std::cout<<std::endl;

	//Первый игрок атакует третьего, но у него не хватает энергии
	p1.attack("player3");

	std::cout<<std::endl;

	//Первый игрок получает поинт инергии для атаки
	p1.beRepaired(1);
	p1.attack("player3");
	p3.takeDamage(p1.getAttackDamage());

	std::cout<<std::endl;

	ClapTrap a(p1);

	std::cout<<std::endl;

	ClapTrap b("blablabla");

	b = p2;

	std::cout<<std::endl;

	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;

	return (0);
}