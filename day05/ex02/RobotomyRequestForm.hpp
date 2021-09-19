#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
/*---Constructors-and-Destructor---*/
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm(void);
/*---Functions---*/
	void execute(Bureaucrat const & executor) const;
};

#endif