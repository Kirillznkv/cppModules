#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
private:
	std::string _name;
	unsigned short int _grade;
public:
/*---Constructors-and-Destructor---*/
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat(void);
/*---Overload-operator---*/
	Bureaucrat &operator=(const Bureaucrat &op);
/*---Getters---*/
	std::string getName(void) const;
	unsigned short int getGrade(void) const;
/*---Functions---*/
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &form);
/*---exceptions-classes---*/
	class GradeTooHighException: public std::exception{
	public:
		const char* what(void) const _NOEXCEPT;
	};
	class GradeTooLowException: public std::exception{
	public:
		const char* what(void) const _NOEXCEPT;
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &op);

#endif