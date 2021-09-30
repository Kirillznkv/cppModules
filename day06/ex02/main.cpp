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

	std::cout<<"=================="<<std::endl;
	A a;
	identify(a);
	identify(&a);

	std::cout<<"=================="<<std::endl;
	Base *tmpNull = nullptr;
	identify(tmpNull);
	identify(*tmpNull);
	return (0);
}