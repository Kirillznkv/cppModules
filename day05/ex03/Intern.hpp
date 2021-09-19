#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
public:
	Intern(void);
	~Intern(void);
	Form *makeForm(std::string nameForm, std::string name);
};

#endif