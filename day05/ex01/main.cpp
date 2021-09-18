#include "Bureaucrat.hpp"

int main(void){
	{
		std::cout<<"================================================="<<std::endl;
		Bureaucrat kirill("Kirill", 22);
		Form school21("School21", 21, 1);
		kirill.signForm(school21);
		std::cout<<"sign: "<<(school21.getDone()?"true":"false")<<std::endl;
		kirill.incrementGrade();
		kirill.signForm(school21);
		std::cout<<"sign: "<<(school21.getDone()?"true":"false")<<std::endl;
	}
	{
		std::cout<<"================================================="<<std::endl;
		Bureaucrat kirill("Kirill", 22);
		try{
			Form school21("School21", -1, 1);
		}
		catch(std::exception &e){
			std::cerr<<e.what()<<std::endl;
		}
		try{
			Form school21("School21", 151, 1);
		}
		catch(std::exception &e){
			std::cerr<<e.what()<<std::endl;
		}
	}
	return (0);
}