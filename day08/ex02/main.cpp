#include <iostream>
#include <list>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// int main()
// {
// 	MutantStack<char> mutant;
// 	std::list<char> list;
// 	for (char i = 'a'; i <= 'z'; ++i){
// 		mutant.push(i);
// 		list.push_back(i);
// 	}

// 	MutantStack<char>::iterator mutantIterator;
// 	std::list<char>::iterator listIterator;
// 	mutantIterator = mutant.begin();
// 	listIterator = list.begin();
// 	std::cout<<"begin mutant:   |"<<*mutantIterator<<"|\t\t";
// 	std::cout<<"begin list:   |"<<*listIterator<<"|"<<std::endl;
// 	mutantIterator++;
// 	listIterator++;
// 	std::cout<<"begin+1 mutant: |"<<*mutantIterator<<"|\t\t";
// 	std::cout<<"begin+1 list: |"<<*listIterator<<"|"<<std::endl;

// 	MutantStack<char>::const_iterator mutantIteratorConst;
// 	std::list<char>::const_iterator listIteratorConst;
// 	mutantIteratorConst = mutant.cend();
// 	listIteratorConst = list.cend();
// 	std::cout<<"begin mutant:   |"<<*mutantIteratorConst<<"|\t\t";
// 	std::cout<<"begin list:   |"<<*listIteratorConst<<"|"<<std::endl;
// 	mutantIteratorConst--;
// 	listIteratorConst--;
// 	std::cout<<"begin-1 mutant: |"<<*mutantIteratorConst<<"|\t\t";
// 	std::cout<<"begin-1 list: |"<<*listIteratorConst<<"|"<<std::endl;

// 	return 0;
// }

//   метод cbegin() возвращает константный (только для чтения) итератор, представляющий начальный элемент контейнера;

// https://ravesli.com/urok-198-iteratory-stl/