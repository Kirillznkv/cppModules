#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
/*---Constructors-and-Destructor---*/
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	~PresidentialPardonForm(void);
/*---Functions---*/
	void execute(Bureaucrat const & executor) const;
};

#endif