#include "Zombie.hpp"

int main(void) {
	Zombie *zombies;

	zombies = ZombieHorde(10, "kshanti");
	for (int i = 0; i < 10; ++i)
		zombies[i].announce();
	delete[] zombies;
    return 0;
}
