#include <iostream>
#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook myBook;
	std::string command;

	std::cout<<"Hello, i am your book, you can ADD, SEARCH and EXIT"<<std::endl;
	do{
		std::cout<<"-->";
		std::cin>>command;
		if (command == "ADD"){
			myBook.AddContact();
			std::cout<<"Contact added"<<std::endl;
		}
		else if (command == "SEARCH")
			myBook.SearchContact();
		else if (command == "EXIT")
			myBook.Exit();
	}while (myBook.isExit() == false);
	return (0);
}