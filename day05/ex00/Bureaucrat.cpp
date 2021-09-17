#include "Bureaucrat.hpp"

/*---Constructors-and-Destructor---*/
Bureaucrat::~Bureaucrat(void){std::cout<<"\tDefoult Bureaucrat destructor"<<std::endl;}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	std::cout<<"\tFull Bureaucrat constructor"<<std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat & copy){
	std::cout<<"\tCopy Bureaucrat constructor"<<std::endl;
	this->operator=(copy);
}

/*---Overload-operator---*/
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op){
	if (this == &op)
		return (*this);
	this->_name = op._name;
	this->_grade = op._grade;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &op){
	out<<op.getName()<<" №"<<op.getGrade();
	return (out);
}

/*---Getters---*/
std::string Bureaucrat::getName(void) const{
	return (_name);
}
unsigned short int Bureaucrat::getGrade(void) const{
	return (_grade);
}

/*---Functions---*/
void Bureaucrat::incrementGrade(void){
	try{
		if (_grade - 1 < 1)
			throw GradeTooHighException();
		--_grade;
	}
	catch(const std::exception& e){
		std::cerr << "Error: " << e.what() << '\n';
	}
}
void Bureaucrat::decrementGrade(void){
	try{
		if (_grade + 1 > 150)
			throw GradeTooLowException();
		++_grade;
	}
	catch(const std::exception& e){
		std::cerr << "Error: " << e.what() << '\n';
	}
}

/*---exceptions-classes---*/
const char* Bureaucrat::GradeTooHighException::what(void) const _NOEXCEPT{
	return "Grade too high";
}
const char* Bureaucrat::GradeTooLowException::what(void) const _NOEXCEPT{
	return "Grade too low";
}