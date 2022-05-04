// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <vector>
#include <iostream>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
private:
	// typedef typename std::vector<T>::iterator iterator;
	typedef typename std::stack<T> subcontainer;
	typedef typename std::vector<T>::iterator itVec;
	typedef typename std::vector<T>::reverse_iterator revitVec;

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator
		reverse_iterator;
	MutantStack(void);
	MutantStack(MutantStack<T> const& src);
	~MutantStack(void);

	MutantStack<T> const& operator=(MutantStack<T> const& rhs);
	iterator begin(void)  { return this->c.begin(); }
	iterator end(void)    { return this->c.end(); }
	reverse_iterator rend(void)   { return this->c.rend(); }
	reverse_iterator rbegin(void) { return this->c.rbegin(); }

private:
	std::vector<T> vec;

};

#include "MutantStack.tpp"

#endif //MUTANT_STACK_HPP
