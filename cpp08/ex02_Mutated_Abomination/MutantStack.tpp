// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) { }

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& src)
: std::stack<T>(src) {
	*this = src;
}

template <typename T>
MutantStack<T>::~MutantStack(void) { }

template <typename T>
MutantStack<T> const& MutantStack<T>::operator=(MutantStack<T> const& rhs) {
	(void)rhs;				//equality performed by parent class
	return *this;
}
