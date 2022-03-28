// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) { }

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& src) : std::stack<T>(src) { }

template <typename T>
MutantStack<T>::~MutantStack(void) { }

template <typename T>
MutantStack<T> const& MutantStack<T>::operator=(MutantStack<T> const& rhs) {
	MutantStack<T> tmp(rhs);

	while (tmp.empty() == false) {
		this->vec.push_back(tmp.top());
		tmp.pop();
	}
	while (subcontainer::empty() == false)
		subcontainer::pop();
	for (revitVec it = vec.rbegin(); it != vec.rend(); ++it)
		subcontainer::push(*it);
	std::cout << this->top() << '\n';
	return *this;
}
