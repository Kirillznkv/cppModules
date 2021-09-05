#include "Zombie.hpp"

int main(void) {
    Zombie z1, z2;
    z1.setName("zombie1");
    z1.announce();
    z2.setName("zombie2");
    z2.announce();

    Zombie* z3 = newZombie("ZOMBIE");
    z3->announce();
    delete z3;

    randomChump("RANDOM");
    return 0;
}
