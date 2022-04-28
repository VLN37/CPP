// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "iter.hpp"


int main(void) {
	std::cout << "this compiles\n";

	char	str[] = "DMBQXOSHNN";
	float	arrfloat[] = { 42.21, 21.42, 12.24};
	int		arrint[] = { 24, 42, 21};

	void (*fint)(int *) = &addOne<int>;
	void (*fchar)(char *) = &addOne<char>;
	void (*ffloat)(float *) = &addOne<float>;

	std::cout << "String before     : ";
	print_array(str, strlen(str));
	iter(str, 9, fchar);
	std::cout << "String after      : ";
	print_array(str, strlen(str));

	std::cout << "Int array before  : ";
	print_array(arrint, 3);
	iter(arrint, 3, fint);
	std::cout << "Int array after   : ";
	print_array(arrint, 3);

	std::cout << "Float array before: ";
	print_array(arrfloat, 3);
	iter(arrfloat, 3, ffloat);
	std::cout << "Float array after : ";
	print_array(arrfloat, 3);
}
