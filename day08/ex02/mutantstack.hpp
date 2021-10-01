#ifndef MUTANTSTAC_HPP
#define MUTANTSTAC_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
private:
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	MutantStack(void) : std::stack<T>(){}
	MutantStack(MutantStack const & copy) : std::stack<T>(copy){}
	~MutantStack(void){};
	MutantStack &operator=(MutantStack<T> const &op){
		return (std::stack<T>::operator=(op));
	}
	iterator begin(void){
		return (this->c.begin());
	}
	iterator end(void){
		return (this->c.end());
	}
	const_iterator cbegin(void){
		return (this->c.cbegin());
	}
	const_iterator cend(void){
		return (this->c.cend());
	}
};

#endif