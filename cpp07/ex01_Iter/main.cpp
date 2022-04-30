// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "iter.hpp"

int main(void) {
	std::cout << "this compiles\n";

	char	str[] = "DMBQXOSHNN";
	float	arrfloat[] = { 42.21, 21.42, 12.24};
	int		arrint[] = { 24, 42, 21};

	std::cout << "String before     : ";
	print_array(str, strlen(str));
	iter(str, 9, addOne<char>);
	std::cout << "String after      : ";
	print_array(str, strlen(str));

	std::cout << "Float array before: ";
	print_array(arrfloat, 3);
	iter(arrfloat, 3, addOne<float>);
	std::cout << "Float array after : ";
	print_array(arrfloat, 3);

	std::cout << "Int array before  : ";
	print_array(arrint, 3);
	iter(arrint, 3, addOne<int>);
	std::cout << "Int array after   : ";
	print_array(arrint, 3);

	//PDF script
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}

