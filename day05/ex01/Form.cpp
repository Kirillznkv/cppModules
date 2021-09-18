#include "Form.hpp"

/*---Constructors-and-Destructor---*/
Form::~Form(void){}
Form::Form(std::string name, int gradeSign, int gradeExec):
		_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec){
	if (gradeExec < 1 || gradeSign < 1)
		throw GradeTooHighException();
	if (gradeExec > 150 || gradeSign > 150)
		throw GradeTooLowException();
	_done = false;
}
Form::Form(const Form &copy):
		_name(copy.getName()), _gradeSign(copy.getGradeSign()),
		_gradeExec(copy.getGradeExec()), _done(copy.getDone()){}

/*---Overload-operator---*/
Form &Form::operator=(const Form &op){op.getName(); return *this;}
std::ostream &operator<<(std::ostream &out, const Form &op){
	out<<op.getName()<<" ("<<op.getDone()<<") "
		"sign("<<op.getGradeSign()<<") "
		"exec("<<op.getGradeExec()<<")";
	return (out);
}

/*---Getters---*/
std::string Form::getName(void) const{
	return (_name);
}
unsigned short int Form::getGradeSign(void) const{
	return (_gradeSign);
}
unsigned short int Form::getGradeExec(void) const{
	return (_gradeExec);
}
bool Form::getDone(void) const{
	return (_done);
}

/*---exceptions-classes---*/
const char* Form::GradeTooHighException::what(void) const _NOEXCEPT{
	return "Grade doc too high";
}
const char* Form::GradeTooLowException::what(void) const _NOEXCEPT{
	return "Grade doc too low";
}

/*---Functions---*/
void Form::beSigned(const Bureaucrat &bur){
	if (bur.getGrade() > _gradeSign)
		throw GradeTooLowException();
	_done = true;
}