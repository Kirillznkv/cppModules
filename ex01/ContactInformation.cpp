#include "ContactInformation.hpp"

ContactInformation::ContactInformation(void){
	init = false;
	firstName = nullptr;
	lastName = nullptr;
	nickName = nullptr;
	phoneNumber = nullptr;
	darkSecret = nullptr;
}

ContactInformation::~ContactInformation(void){
}

void	ContactInformation::InitContactInformaion(void){
	std::cout<<"Write first name: ";
	std::cin>>firstName;
	std::cout<<"Write last name: ";
	std::cin>>lastName;
	std::cout<<"Write nickname: ";
	std::cin>>nickName;
	std::cout<<"Write phone number: ";
	std::cin>>phoneNumber;
	std::cout<<"Write dark secret: ";
	std::cin>>darkSecret;
	init = true;
}

std::string		ContactInformation::getFirstName(void){
	return (firstName);
}

std::string		ContactInformation::getLastName(void){
	return (lastName);
}

std::string		ContactInformation::getNickName(void){
	return (nickName);
}

// void	ContactInformation::OutputPrecisionContactField(std::string contactField, unsigned short int widthField){
// 	if (init == false)
// 		return ;
// 	bool dot = false;
// 	int widthWriteWord = contactField.size();
// 	int widthSpasec = widthField - contactField.size();
// 	if (widthSpasec < 0){
// 		widthSpasec = 0;
// 		widthWriteWord = widthField - 1;
// 		dot = true;
// 	}
// 	for (int i = 0; i < widthSpasec; ++i)
// 		std::cout<<" ";
// 	for (int i = 0; i < widthWriteWord; ++i)
// 		std::cout<<contactField[i];
// 	if (dot == true)
// 		std::cout<<".";
// }

void	ContactInformation::OutputInformation(unsigned int id){
	if (init == false)
		return ;
	std::cout<<"First name: "<<firstName<<std::endl;
	std::cout<<"Last name: "<<lastName<<std::endl;
	std::cout<<"Nick name: "<<nickName<<std::endl;
	std::cout<<"Phone number: "<<phoneNumber<<std::endl;
	std::cout<<"Dark secret: "<<darkSecret<<std::endl;
}