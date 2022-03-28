// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Fixed.hpp"

int main(void) {
	{
		std::cout << "PDF -------------\n";
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << "PDF -------------\n";
	}
	Fixed a(50);
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a 		<< std::endl;
	std::cout << ++a 	<< std::endl;
	std::cout << a 		<< std::endl;
	std::cout << a++ 	<< std::endl;
	std::cout << a 		<< std::endl;
	std::cout << b 		<< std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << Fixed(42) << std::endl;
	std::cout << Fixed(4.2f) << std::endl;
	std::cout << Fixed(0.45f) << std::endl;

	Fixed nbr1(4.1f);
	Fixed nbr2(4.2f);
	Fixed nbr3(4.3f);
	Fixed nbr4(42);
	Fixed nbr5(8);

	std::cout << Fixed(42) << '\n';
	std::cout << Fixed(4.2f) << '\n';
	std::cout << Fixed(0.01f) << '\n';
	std::cout << Fixed(2142) << '\n';



	std::cout << "nbr1 + nbr2   = " << nbr1 + nbr2 << '\n';
	std::cout << "nbr2 - nbr1   = " << nbr2 - nbr1 << '\n';
	std::cout << "nbr4 / nbr5   = " << nbr4 / nbr5 << '\n';
	std::cout << "nbr4 * nbr5   = " << nbr4 * nbr5 << '\n';
	std::cout << "min nbr4 nbr5 = " << Fixed::min(nbr4, nbr5) << '\n';
	std::cout << "max nbr4 nbr5 = " << Fixed::max(nbr4, nbr5) << '\n';
	std::cout << "min nbr1 nbr2 = " << Fixed::min(nbr1, nbr2) << '\n';
	std::cout << "max nbr1 nbr2 = " << Fixed::max(nbr1, nbr2) << '\n';
	if (nbr2 > nbr1)
		std::cout << nbr2 << " is higher than " << nbr1 << '\n';
	else
		std::cout << "WARNING\n";
	if (nbr2 < nbr3)
		std::cout << nbr2 << " is lower than " << nbr3 << '\n';
	else
		std::cout << "WARNING\n";
	if (nbr2 >= nbr1)
		std::cout << nbr2 << " is higher or equal to " << nbr1 << '\n';
	else
		std::cout << "WARNING\n";
	if (nbr2 <= nbr3)
		std::cout << nbr2 << " is lower or equal to " << nbr3 << '\n';
	else
		std::cout << "WARNING\n";
	if (Fixed(42) == Fixed(42))
		std::cout << "42 is equal to 42 !\n";
	else
		std::cout << "WARNING\n";
	if (nbr1 != nbr2)
		std::cout << nbr1 << " is different than " << nbr2 << '\n';
	else
		std::cout << "WARNING\n";
	return 0;
}
