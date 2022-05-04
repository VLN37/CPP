// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <algorithm>
#include "MutantStack.hpp"

template <typename T>
void print(T& val) {
	std::cout << val << ' ';
}

int main(void) {
	std::cout << "This compiles!\n";
	std::stack<int> stack;


	std::cout << "***** STD STACK *****\n";
	for(int i = 0; i < 10; i++)
		stack.push(i);
	while (stack.empty() == false) {
		std::cout << stack.top() << ' ';
		stack.pop();
	}
	std::cout << "\n\n";

	std::cout << "***** FT STACK *****\n";
	MutantStack<int> mutant1;
	for(int i = 0; i < 10; i++)
		mutant1.push(i);
	while (mutant1.empty() == false) {
		std::cout << mutant1.top() << ' ';
		mutant1.pop();
	}
	std::cout << "\n\n";


	std::cout << "***** FT STACK ITERATOR *****\n";
	for(int i = 0; i < 10; i++)
		mutant1.push(i);
	std::for_each(mutant1.begin(), mutant1.end(), print<int>);
	std::cout << "\n\n";

	MutantStack<int> cpy(mutant1);
	std::cout << "***** FT STACK COPY CONSTRUCTOR *****\n";
	std::for_each(mutant1.begin(), mutant1.end(), print<int>);
	std::cout << "\n\n";
}
