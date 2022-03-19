// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "whatever.hpp"

int main(void) {
	int ia = 42;
	int ib = 21;

	float fa = 42;
	float fb = 21;

	char ca = 42;
	char cb = 41;

	std::cout << "min value between 42 and 21 int: " << min(ia, ib) << '\n';
	std::cout << "max value between 42 and 21 int: " << max(ia, ib) << '\n';

	std::cout << "min value between 42 and 21 float: " << min(fa, fb) << '\n';
	std::cout << "max value between 42 and 21 float: " << max(fa, fb) << '\n';

	std::cout << "min value between 42 and 41 char: " << min(ca, cb) << '\n';
	std::cout << "max value between 42 and 41 char: " << max(ca, cb) << '\n';

	std::cout << "before swap -> A = " << ia << " B = " << ib << '\n';
	swap(ia, ib);
	std::cout << "after swap  -> A = " << ia << " B = " << ib << "\n\n";

	// PDF script
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;


	return 0;
}
