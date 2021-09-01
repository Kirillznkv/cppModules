#ifndef CONTACTINFORMATION_HPP
# define CONTACTINFORMATION_HPP
# include <string>
# include <iostream>

class ContactInformation{
private:
	bool init;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkSecret;
public:
	ContactInformation(void);
	~ContactInformation(void);
	// void OutputPrecisionContactField(std::string contactField, unsigned short int precision);
	void InitContactInformaion(void);
	void OutputInformation(unsigned int idForOutPut);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
};

#endif