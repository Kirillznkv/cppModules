#include <iostream>
#include <iomanip>

struct Data{
	std::string name;
	unsigned short int age;
};

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(void){
	Data kirill;
	kirill.name = "Kirill";
	kirill.age = 22;

	std::cout<<std::setw(13)<<"ptrData = "<<&kirill<<std::endl;
	std::cout<<std::setw(13)<<"newPtrData = "<<deserialize(serialize(&kirill))<<std::endl;
	return (0);
}