// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack(void);
	MutantStack(MutantStack<T> const& src);
	~MutantStack(void);

	MutantStack<T> const& operator=(MutantStack<T> const& rhs);

private:
};

#include "MutantStack.tpp"

#endif //MUTANT_STACK_HPP
