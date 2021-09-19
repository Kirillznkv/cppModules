#include "Intern.hpp"

//Карен приследует нас
int main(void){
	Intern kirill;
	Form* rrf;

	rrf = kirill.makeForm("robotomy request", "Bender1");
	std::cout<<*rrf<<std::endl;
	delete rrf;
	rrf = kirill.makeForm("shrubbery creation", "Bender2");
	std::cout<<*rrf<<std::endl;
	delete rrf;
	rrf = kirill.makeForm("presidential pardon", "Bender3");
	std::cout<<*rrf<<std::endl;
	delete rrf;
	return (0);
}