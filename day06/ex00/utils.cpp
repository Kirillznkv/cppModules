#include <iostream>

void	printChar(int ch){
	std::cout<<"char: ";
	if (ch < 33 || ch > 126)
		std::cout<<" Non displayable"<<std::endl;
	else
		std::cout<<"char: "
}