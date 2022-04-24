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

	srand((static_cast<unsigned int>(time(0))));
	seed = rand() % 3;
	std::cout << "Seed: " << seed << '\n';
	if (seed == 0)
		return new ClassA;
	else if (seed == 1)
		return new ClassB;
	else
		return new ClassC;
}

void identify(Base* p) {
	if (dynamic_cast<ClassA*>(p))
		std::cout << "PTR: This object pointer is of Class A\n";
	if (dynamic_cast<ClassB*>(p))
		std::cout << "PTR: This object pointer is of Class B\n";
	if (dynamic_cast<ClassC*>(p))
		std::cout << "PTR: This object pointer is of Class C\n";
}

void identify(Base& p) {
	try {
		ClassA A = dynamic_cast<ClassA&>(p);
		std::cout << "REF: This object referece is of Class A\n";
	}
	catch (std::exception &e) { std::cout << "REF: " << e.what() << '\n'; }
	try {
		ClassB B = dynamic_cast<ClassB&>(p);
		std::cout << "REF: This object referece is of Class B\n";
	}
	catch (std::exception &e) { std::cout << "REF: " << e.what() << '\n'; }
	try {
		ClassC C = dynamic_cast<ClassC&>(p);
		std::cout << "REF: This object referece is of Class C\n";
	}
	catch (std::exception &e) { std::cout << "REF: " << e.what() << '\n'; }
}

int main(void) {
	Base* ptr = generate();
	Base& ref = *ptr;

	identify(ptr);
	identify(ref);
  delete ptr;
	return 0;
}
