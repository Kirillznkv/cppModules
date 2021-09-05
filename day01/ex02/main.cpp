#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";

	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout<<"str adr:      "<<&str<<std::endl;
	std::cout<<"strPTR adr:   "<<strPTR<<std::endl;
	std::cout<<"strREF adr:   "<<&strREF<<std::endl;

	std::cout<<"strPTR =   "<<*strPTR<<std::endl;
	std::cout<<"strREF =   "<<strREF<<std::endl;
    return 0;
}
