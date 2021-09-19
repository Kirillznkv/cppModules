#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>

int main(void){
	{
		ShrubberyCreationForm form("dom");
		Bureaucrat kirill("Kirill", 1);
		kirill.signForm(form);
		kirill.executeForm(form);
	}

	// {
	// 	ShrubberyCreationForm form("dom");
	// 	Bureaucrat kirill("Kirill", 146);
	// 	kirill.signForm(form);
	// 	kirill.incrementGrade();
	// 	kirill.signForm(form);
	// 	kirill.executeForm(form);
	// }

	// {
	// 	ShrubberyCreationForm form("dom");
	// 	Bureaucrat kirill("Kirill", 138);
	// 	kirill.signForm(form);
	// 	kirill.executeForm(form);
	// 	kirill.incrementGrade();
	// 	kirill.executeForm(form);
	// }

	// {
	// 	ShrubberyCreationForm form("dom");
	// 	Bureaucrat kirill("Kirill", 1);
	// 	kirill.executeForm(form);
	// }

	// {
	// 	RobotomyRequestForm form("Robotomy");
	// 	Bureaucrat kirill("Kirill", 1);
	// 	kirill.signForm(form);
	// 	kirill.executeForm(form);
	// 	sleep(1);
	// 	kirill.executeForm(form);
	// }

	// {
	// 	PresidentialPardonForm form("Robotomy");
	// 	Bureaucrat kirill("Kirill", 100);
	// 	kirill.signForm(form);
	// 	kirill.executeForm(form);
	// }
	// Form form("form", 100, 100);
	return (0);
}