#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void){}
A::~A(void){std::cout<<"A"<<std::endl;}
B::~B(void){std::cout<<"B"<<std::endl;}
C::~C(void){std::cout<<"C"<<std::endl;}