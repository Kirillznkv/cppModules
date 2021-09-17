#include "Bureaucrat.hpp"

int main(void){
	{
		std::cout<<"========================================"<<std::endl;
		Bureaucrat kirill("kirill", 3);

		std::cout<<kirill<<std::endl;
		try {kirill.incrementGrade();}
		catch (std::exception& e){std::cerr << "Error: " << e.what() << '\n';}

		try {kirill.incrementGrade();}
		catch (std::exception& e){std::cerr << "Error: " << e.what() << '\n';}

		try {kirill.incrementGrade();}
		catch (std::exception& e){std::cerr << "Error: " << e.what() << '\n';}//error

		try {kirill.incrementGrade();}
		catch (std::exception& e){std::cerr << "Error: " << e.what() << '\n';}//error
		std::cout<<kirill<<std::endl;
	}
	{
		std::cout<<"========================================"<<std::endl;
		Bureaucrat kirill("kirill", 149);

		std::cout<<kirill<<std::endl;
		try {kirill.decrementGrade();}
		catch (std::exception& e){std::cerr << "Error: " << e.what() << '\n';}

		try {kirill.decrementGrade();}
		catch (std::exception& e){std::cerr << "Error: " << e.what() << '\n';}//error
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