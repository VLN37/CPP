// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "MutantStack.hpp"

int main(void) {
	std::cout << "This compiles!\n";
	std::stack<int> stack;

	stack.push(5);
	std::cout << stack.top() << '\n';

	MutantStack<int> mutant1;
	mutant1.push(5);

	std::cout << mutant1.top() << '\n';
	MutantStack<int> mutant2(mutant1);
	std::cout << mutant2.top() << '\n';

	// MutantStack<int> mutant(dynamic_cast< MutantStack<int> >(stack));
}
