#include "Karen.hpp"

enum levelType{
	DEBUG = 0,
	INFO,
	WARNING,
	ERROR,
	DEFAULT
};

levelType getLevelType(std::string level)
{
	levelType lvlType = DEFAULT;
	if (level == "DEBUG")
		lvlType = DEBUG;
	if (level == "INFO")
		lvlType = INFO;
	if (level == "WARNING")
		lvlType = WARNING;
	if (level == "ERROR")
		lvlType = ERROR;
	return (lvlType);
}

int		main(int argc, char *argv[]) {
	if (argc != 2)
		return (1);
	Karen myKaren;
	std::string level(argv[1]);
	std::string levelArr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	levelType levelT = getLevelType(level);
	switch (levelT){
		case DEBUG: {myKaren.complain("DEBUG"); std::cout<<std::endl;}
		case INFO: {myKaren.complain("INFO"); std::cout<<std::endl;}
		case WARNING: {myKaren.complain("WARNING"); std::cout<<std::endl;}
		case ERROR: {myKaren.complain("ERROR"); std::cout<<std::endl; break;}
		default: {std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;}
	}
	return 0;
}
