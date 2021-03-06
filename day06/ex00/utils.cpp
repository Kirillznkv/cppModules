#include <iostream>
#include <iomanip>

static void printChar(unsigned char ch){
	std::cout<<"char: ";
	if (ch < 33 || ch > 126)
		std::cout<<"Non displayable"<<std::endl;
	else
		std::cout<<"'"<<ch<<"'"<<std::endl;
}
static void printInt(int num){
	std::cout<<"int: "<<num<<std::endl;
}
static void printFloat(float num){
	if (num - (int)num == 0)
		std::cout<<"float: "<<num<<".0f"<<std::endl;
	else
		std::cout<<"float: "<<num<<"f"<<std::endl;
}
static void printDouble(double num){
	if (num - (int)num == 0)
		std::cout<<"double: "<<num<<".0"<<std::endl;
	else
		std::cout<<"double: "<<num<<std::endl;
}

void printAll(double num){
	printChar(static_cast<unsigned char>(num));
	printInt(static_cast<int>(num));
	printFloat(static_cast<float>(num));
	printDouble(num);
}

void printExcep(std::string &str){
	std::cout<<"char: impossible"<<std::endl;
	std::cout<<"int: impossible"<<std::endl;
	std::cout<<"float: "<<str<<"f"<<std::endl;
	std::cout<<"double: "<<str<<std::endl;
}