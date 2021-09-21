#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
	std::srand(std::time(0));
	int res = std::rand() % 3;
	if (res == 0)
		return (new A());
	else if (res == 1)
		return (new B());
	else
		return (new C());
	return (nullptr);
}

void identify(Base* p){
	try{
		if (p == nullptr)
			throw "Error: nullptr";
		p->~Base();
	}
	catch(char const * str){
		std::cerr<<str<<std::endl;
	}
}

void identify(Base& p){
	try{
		if (&p == nullptr)
			throw "Error: nullptr";
		p.~Base();
	}
	catch(char const * str){
		std::cerr<<str<<std::endl;
	}
}