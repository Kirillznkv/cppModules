#include "RobotomyRequestForm.hpp"

/*---Constructors-and-Destructor---*/
RobotomyRequestForm::~RobotomyRequestForm(void){}
RobotomyRequestForm::RobotomyRequestForm(std::string name):
		Form(name, 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
		Form(copy){}

/*---Functions---*/
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	Form::execute(executor);
	//  std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::srand(std::time(0));
	if (std::rand() % 2)
		std::cout<<"*some drilling noises*"<<std::endl<<this->getName()<<
		" has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout<<"It's a failure"<<std::endl;
}