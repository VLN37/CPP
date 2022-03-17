// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base* generate(void) {
	unsigned int seed;

	srand((unsigned int)time(0));
	seed = rand() % 3;
	std::cout << seed << '\n';
	if (seed == 0)
		return new ClassA;
	else if (seed == 1)
		return new ClassB;
	else
		return new ClassC;
}

void identify(Base* p) {
	if (dynamic_cast<ClassA*>(p))
		std::cout << "This object pointer is of Class A\n";
	if (dynamic_cast<ClassB*>(p))
		std::cout << "This object pointer is of Class B\n";
	if (dynamic_cast<ClassC*>(p))
		std::cout << "This object pointer is of Class C\n";

}

void identify(Base& p) {
	try {
		dynamic_cast<ClassA&>(p);
		std::cout << "This object referece is of Class A\n";
	}
	catch (std::exception &e) { std::cout << e.what() << '\n'; }
	try {
		dynamic_cast<ClassB&>(p);
		std::cout << "This object referece is of Class B\n";
	}
	catch (std::exception &e) { std::cout << e.what() << '\n'; }
	try {
		dynamic_cast<ClassC&>(p);
		std::cout << "This object referece is of Class C\n";
	}
	catch (std::exception &e) { std::cout << e.what() << '\n'; }
}

int main(void) {
	Base* ptr = generate();
	Base& ref = *ptr;

	identify(ptr);
	identify(ref);
	return 0;
}
