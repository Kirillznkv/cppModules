#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void func(T value){
	std::cout<<"-->"<<value<<std::endl;
}

template <typename TAddr, typename TSize>
void inter(TAddr addr, TSize size, void (*func)(decltype(*std::declval<TAddr>()))){
	for (TSize i = 0; i < size; ++i)
		func(addr[i]);
}

#endif