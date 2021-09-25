#include "whatever.hpp"
#include <iostream>

int main(void){
	{
	//int
	std::cout<<"################---INT---################"<<std::endl;
	int a = -1, b = 2;
	std::cout<<"#\tmin: "<<min(a, b)<<std::endl;
	std::cout<<"#\tmax: "<<max(a, b)<<std::endl;
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tswaping..."<<std::endl;
	swap(a, b);
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tmin(a): "<<min(a, a)<<std::endl;
	std::cout<<"#\tmax(b): "<<max(b, b)<<std::endl;
	}

	{
	//double
	std::cout<<"###############---DOUBLE---##############"<<std::endl;
	double a = -1.01, b = 2.05;
	std::cout<<"#\tmin: "<<min(a, b)<<std::endl;
	std::cout<<"#\tmax: "<<max(a, b)<<std::endl;
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tswaping..."<<std::endl;
	swap(a, b);
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tmin(a): "<<min(a, a)<<std::endl;
	std::cout<<"#\tmax(b): "<<max(b, b)<<std::endl;
	}

	{
	//float
	std::cout<<"###############---FLOAT---###############"<<std::endl;
	float a = 10.011f, b = 22.022f;
	std::cout<<"#\tmin: "<<min(a, b)<<std::endl;
	std::cout<<"#\tmax: "<<max(a, b)<<std::endl;
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tswaping..."<<std::endl;
	swap(a, b);
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tmin(a): "<<min(a, a)<<std::endl;
	std::cout<<"#\tmax(b): "<<max(b, b)<<std::endl;
	}

	{
	//bool
	std::cout<<"###############---BOOL---###############"<<std::endl;
	bool a = true, b = false;
	std::cout<<"#\tmin: "<<min(a, b)<<std::endl;
	std::cout<<"#\tmax: "<<max(a, b)<<std::endl;
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tswaping..."<<std::endl;
	swap(a, b);
	std::cout<<"#\ta = "<<a<<"    b = "<<b<<std::endl;
	std::cout<<"#\tmin(a): "<<min(a, a)<<std::endl;
	std::cout<<"#\tmax(b): "<<max(b, b)<<std::endl;
	}

	return (0);
}