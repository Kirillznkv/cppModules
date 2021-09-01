#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include "ContactInformation.hpp"

class PhoneBook{
private:
	bool exitBook;
	unsigned short int nextAddInx;
	ContactInformation contacts[8];

	void OutputPrecisionContactField(std::string contactField, unsigned short int precision);
public:
	PhoneBook(void);
	~PhoneBook(void);
	void AddContact(void);
	void SearchContact(void);
	void Exit(void);
	bool isExit(void);
};

#endif