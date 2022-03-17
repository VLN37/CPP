// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	b.setRawBits(42);
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
