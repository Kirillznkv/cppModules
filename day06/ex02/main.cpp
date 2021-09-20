#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void){
	Base *tmp;

	tmp = generate();
	identify(tmp);
	identify(*tmp);
	return (0);
}