#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	exitBook = false;
	nextAddInx = 0;
}

PhoneBook::~PhoneBook(void){
}

void PhoneBook::Exit(void){
	exitBook = true;
}

bool PhoneBook::isExit(void){
	return (exitBook);
}

void PhoneBook::AddContact(void){
	contacts[nextAddInx].InitContactInformaion();
	nextAddInx = (nextAddInx + 1) % 8;
}

void PhoneBook::OutputPrecisionContactField(std::string contactField, unsigned short int widthField){
	bool dot = false;
	int widthWriteWord = contactField.size();
	int widthSpasec = widthField - contactField.size();
	if (widthSpasec < 0){
		widthSpasec = 0;
		widthWriteWord = widthField - 1;
		dot = true;
	}
	for (int i = 0; i < widthSpasec; ++i)
		std::cout<<" ";
	for (int i = 0; i < widthWriteWord; ++i)
		std::cout<<contactField[i];
	if (dot == true)
		std::cout<<".";
}

void PhoneBook::SearchContact(void){
	if (contacts[0].isInit() == false)
		return ;
	for(int i = 0; i < 8 && contacts[i].isInit(); ++i){
		std::cout<<"|";
		OutputPrecisionContactField(std::to_string(i), 10);
		std::cout<<"|";
		OutputPrecisionContactField(contacts[i].getFirstName(), 10);
		std::cout<<"|";
		OutputPrecisionContactField(contacts[i].getLastName(), 10);
		std::cout<<"|";
		OutputPrecisionContactField(contacts[i].getNickName(), 10);
		std::cout<<"|"<<std::endl;
	}
	int number = 0;
	std::cout<<"Choose numder: ";
	std::cin>>number;
	while (number < 0 || number > 7 || contacts[number].isInit() == false){
		std::cout<<"Choose correct numder: ";
		std::cin>>number;
	}
	std::cout<<"Contact information:"<<std::endl;
	contacts[number].OutputInformation();
}