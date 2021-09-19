#include "Intern.hpp"

Intern::Intern(void){}
Intern::~Intern(void){}

Form *Intern::makeForm(std::string nameForm, std::string name){
	std::string arrStr[4] = {"shrubbery creation",
							"robotomy request",
							"presidential pardon",
							""};
	Form *arrForm[4];
	arrForm[0] = new ShrubberyCreationForm(name);
	arrForm[1] = new RobotomyRequestForm(name);
	arrForm[2] = new PresidentialPardonForm(name);
	arrForm[3] = nullptr;
	int i = 0;
	for (; i < 4; ++i)
		if (arrStr[i] == nameForm)
			break ;
	for (int idx = 0; idx < 3; ++idx)
		if (idx != i)
			delete arrForm[idx];
	return (arrForm[i]);
}