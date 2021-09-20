#include <iostream>
#include <iomanip>

static void printChar(int ch){
	std::cout<<"char: ";
	if (ch < 33 || ch > 126)
		std::cout<<" Non displayable"<<std::endl;
	else
		std::cout<<"char: '"<<(char)ch<<"'"<<std::endl;
}
static void printInt(int num){
	std::cout<<"int: "<<num<<std::endl;
}
static void printFloat(float num){
	std::cout<<"float: "<<std::fixed<<std::setprecision(3)<<num<<"f"<<std::endl;
}
static void printDouble(double num){
	std::cout<<"double: "<<num<<std::endl;
}

void printAll(double num){
	printChar((int)num);
	printInt((int)num);
	printFloat((float)num);
	printDouble(num);
}

void printExcep(std::string &str){
	std::cout<<"char: impossible"<<std::endl;
	std::cout<<"int: impossible"<<std::endl;
	std::cout<<"float: "<<str<<std::endl;
	std::cout<<"double: "<<str<<std::endl;
}