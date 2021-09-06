#ifndef ZOMNIE_HPP
#define ZOMNIE_HPP

#include <iostream>

class Zombie{
private:
    std::string name;
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void) const;
    void setName(std::string name);
};

/*function for zombies*/
Zombie* ZombieHorde(int N, std::string name);

#endif
