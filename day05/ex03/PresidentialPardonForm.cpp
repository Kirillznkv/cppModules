#include "PresidentialPardonForm.hpp"

/*---Constructors-and-Destructor---*/
PresidentialPardonForm::~PresidentialPardonForm(void){}
PresidentialPardonForm::PresidentialPardonForm(std::string name):
		Form(name, 25, 5){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
		Form(copy){}

/*---Functions---*/
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	Form::execute(executor);
	std::cout<<this->getName()<<" has been pardoned by Zafod Beeblebrox"<<std::endl;
}