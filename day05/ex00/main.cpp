#include "Bureaucrat.hpp"

int main(void){
	{
		std::cout<<"========================================"<<std::endl;
		Bureaucrat kirill("kirill", 3);

		std::cout<<kirill<<std::endl;
		kirill.incrementGrade();
		kirill.incrementGrade();
		kirill.incrementGrade();//error
		kirill.incrementGrade();//error
		std::cout<<kirill<<std::endl;
	}
	{
		std::cout<<"========================================"<<std::endl;
		Bureaucrat kirill("kirill", 149);

		std::cout<<kirill<<std::endl;
		kirill.decrementGrade();
		kirill.decrementGrade();//error
		std::cout<<kirill<<std::endl;
	}
	{
		std::cout<<"========================================"<<std::endl;
		try{
			Bureaucrat kirill("kirill", -1);
		}
		catch(std::exception& e){std::cerr << "Error: " << e.what() << '\n';}
		try{
			Bureaucrat kirill("kirill", 151);
		}
		catch(std::exception& e){std::cerr << "Error: " << e.what() << '\n';}
	}
	return (0);
}