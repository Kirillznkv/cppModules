#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <ctime>

class Brain{
protected:
	std::string _ideas[100];
public:
	Brain(void);
	Brain(const Brain & copyBrain);
	~Brain(void);
	Brain &operator=(const Brain & op);
	/*---Getters-and-Settters*/
	std::string getIdea(unsigned short int inx) const;
};

std::ostream &operator<<(std::ostream &out, const Brain & brain);

#endif