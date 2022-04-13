// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << "this compiles\n";

	Bureaucrat suplicy("Suplicy", 0);
	Bureaucrat duval("Duval", 200);
	Bureaucrat clone(Bureaucrat("Tiririca", 50));

	suplicy++;
	clone--;
	--clone;
	++clone;
	std::cout << suplicy;
	std::cout << duval;
	std::cout << clone;
}
