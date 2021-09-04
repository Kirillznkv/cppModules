#include "ContactInformation.hpp"

ContactInformation::ContactInformation(void){
	init = false;
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkSecret = "";
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

bool	ContactInformation::isInit(void){
	return (init);
}

void	ContactInformation::OutputInformation(void) const{
	if (init == false)
		return ;
	std::cout<<"First name: "<<firstName<<std::endl;
	std::cout<<"Last name: "<<lastName<<std::endl;
	std::cout<<"Nick name: "<<nickName<<std::endl;
	std::cout<<"Phone number: "<<phoneNumber<<std::endl;
	std::cout<<"Dark secret: "<<darkSecret<<std::endl;
}