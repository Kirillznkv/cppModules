#include "Brain.hpp"

/*---Constructors-and-distructor---*/
Brain::~Brain(void){std::cout<<"#Destructor Brain"<<std::endl;}
Brain::Brain(void){
	std::cout<<"#Constructor Brain"<<std::endl;
	std::srand(std::time(nullptr));
	int time;
	static int r = 0;
	for (int i = 0; i < 100; ++i){
		time = (r + std::rand()) % 7 + 1;
		switch (time){
			case 1: {_ideas[i] = "i'm cat?"; break;}
			case 2: {_ideas[i] = "i'm dog?"; break;}
			case 3: {_ideas[i] = "i'm cat'o'dog?"; break;}
			case 4: {_ideas[i] = "i'm human?"; break;}
			case 5: {_ideas[i] = "i'm butterfly?"; break;}
			case 6: {_ideas[i] = "i want to sleep"; break;}
			case 7: {_ideas[i] = "i want to eat"; break;}
			default: {};
		}
	}
	r++;
}
Brain::Brain(const Brain & copyBrain){
	std::cout<<"#Copy constructor Brain"<<std::endl;
	this->operator=(copyBrain);
}

/*---Overload-operators---*/
Brain &Brain::operator=(const Brain & op){
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = op._ideas[i];
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const Brain &brain){
	for (int i = 0; i < 3; ++i)
		out<<i + 1<<": "<<brain.getIdea(i)<<std::endl;
	out<<"..."<<std::endl;
	return (out);
}

/*---Getters-and-Settters*/
std::string Brain::getIdea(unsigned short int inx) const{
	if (inx < 0 || inx >= 100)
		return (_ideas[0]);
	return (_ideas[inx]);
}