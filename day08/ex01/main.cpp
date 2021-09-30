#include <iostream>
#include "span.hpp"

int main(int, char**)
{
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	{
																												std::cout<<"............................"<<std::endl;
		Span sp1(3);

		sp1.addNumber(1);
		sp1.addNumber(2);
		sp1.addNumber(3);
																												std::cout<<"..     ";
		try{sp1.addNumber(4);}
		catch(std::exception &e){std::cerr<<e.what()<<"      .."<<std::endl;}
																												std::cout<<"..     ";
		try{sp1.addNumber(5);}
		catch(std::exception &e){std::cerr<<e.what()<<"      .."<<std::endl;}
																												std::cout<<"..  ";
		sp1.output();
																												std::cout<<"                   .."<<std::endl;
																												std::cout<<"..  ";
		std::cout<<"min: "<<sp1.shortSpan()<<"    max: "<<sp1.longestSpan();
																												std::cout<<"      .."<<std::endl;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	{
																												std::cout<<"............................"<<std::endl;
		Span sp2(20);
		std::vector<int> vec(10, 1);
		std::vector<int> vec2(10, 0);
		std::vector<int> vec3(1, 2);
		sp2.fillingSpan(vec.begin(), vec.end());
		sp2.fillingSpan(vec2.begin(), vec2.end());
																												std::cout<<"..     ";
		try{sp2.fillingSpan(vec3.begin(), vec3.end());}
		catch(std::exception &e){std::cerr<<e.what()<<"      .."<<std::endl;}
																												std::cout<<"..  ";
		sp2.output();
																												std::cout<<"  .."<<std::endl;
																												std::cout<<"..  ";
		std::cout<<"min: "<<sp2.shortSpan()<<"    max: "<<sp2.longestSpan();
																												std::cout<<"      .."<<std::endl;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	{
																												std::cout<<"............................"<<std::endl;
		Span sp3(21);
		std::vector<int> vec(10, 1);
		std::vector<int> vec2(10, 0);
		std::vector<int> vec3(1, 2);
		sp3.fillingSpan(vec.begin(), vec.end());
		sp3.fillingSpan(vec2.begin(), vec2.end());
		try{sp3.fillingSpan(vec3.begin(), vec3.end());}
		catch(std::exception &e){std::cerr<<e.what()<<"      .."<<std::endl;}
																												std::cout<<"..  ";
		sp3.output();
																												std::cout<<" .."<<std::endl;
																												std::cout<<"..  ";
		std::cout<<"min: "<<sp3.shortSpan()<<"    max: "<<sp3.longestSpan();
																												std::cout<<"      .."<<std::endl;
																												std::cout<<"............................"<<std::endl;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	{
																												std::cout<<"............................"<<std::endl;
		Span sp4(20);
		std::vector<int> vec(20, 9);
		sp4.fillingSpan(vec.begin(), vec.end());
																												std::cout<<"..  ";
		sp4.output();
																												std::cout<<"  .."<<std::endl;
																												std::cout<<"..  ";
		std::cout<<"min: "<<sp4.shortSpan()<<"    max: "<<sp4.longestSpan();
																												std::cout<<"      .."<<std::endl;
																												std::cout<<"............................"<<std::endl;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	{
		try{Span span(-10);}
		catch(std::exception &e){std::cerr<<"Error: "<<e.what()<<std::endl;}
		Span span1(1);
		span1.addNumber(10);
		try{span1.longestSpan();}
		catch(std::exception &e){std::cerr<<"Error: "<<e.what()<<std::endl;}
		try{span1.shortSpan();}
		catch(std::exception &e){std::cerr<<"Error: "<<e.what()<<std::endl;}
	}
	return (0);
}