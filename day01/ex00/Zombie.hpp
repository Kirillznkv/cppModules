#ifndef DAY01_ZOMBIE_H
#define DAY01_ZOMBIE_H

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
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
