#include "iter.hpp"
#include <iostream>

int main(void){
	int arrInt[]={1, 2, 3};
	inter(arrInt, 3, &func);

	double arrDouble[]={1.1, 2.2, 3.3};
	inter(arrDouble, 3, &func);

	std::string arrString[]={"Hello,", "World", "!"};
	inter(arrString, 3, &func);
	return (0);
}