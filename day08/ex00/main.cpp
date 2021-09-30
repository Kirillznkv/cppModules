#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(int, char**)
{
	std::vector<int> vec;
	for (int i = 1; i <= 5; ++i)
		vec.push_back(i * 10); // 10, 20, 30, 40, 50

	try{std::cout<<*easyfind(vec, 5)<<std::endl;}
	catch(const std::exception& e){std::cout<<"Error: "<<e.what()<<std::endl;};

	try{std::cout<<*easyfind(vec, -5)<<std::endl;}
	catch(const std::exception& e){std::cout<<"Error: "<<e.what()<<std::endl;};

	try{std::cout<<*easyfind(vec, 10)<<std::endl;}
	catch(const std::exception& e){std::cout<<"Error: "<<e.what()<<std::endl;};

	try{std::cout<<*easyfind(vec, 50)<<std::endl;}
	catch(const std::exception& e){std::cout<<"Error: "<<e.what()<<std::endl;};
	return (0);
}