#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	const std::string _name;
	const unsigned short int _gradeSign;
	const unsigned short int _gradeExec;
	bool _done;
public:
/*---Constructors-and-Destructor---*/
	Form(std::string name, int gradeSign, int gradeExec);
	Form(const Form &copy);
	~Form(void);
/*---Overload-operator---*/
	Form &operator=(const Form &op);
/*---Getters---*/
	std::string getName(void) const;
	unsigned short int getGradeSign(void) const;
	unsigned short int getGradeExec(void) const;
	bool getDone(void) const;
/*---Functions---*/
	void beSigned(const Bureaucrat &bur);
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

std::ostream &operator<<(std::ostream &out, const Form &op);

#endif