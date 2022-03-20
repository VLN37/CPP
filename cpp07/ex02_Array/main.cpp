// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Array.hpp"

int main(void) {
	std::cout << "this compiles\n";
	Array<int> arr1(static_cast<unsigned int>(3));
	Array<int> arr2(static_cast<unsigned int>(3));

	Array<float>arrfloat(static_cast<unsigned int>(5));
	arrfloat.print();

	int* a = new int();
	std::cout << "a: " << *a << '\n';

	arrfloat[0] = 24.42;
	std::cout << arrfloat[0] << '\n';

	arr1[0] = 24;
	arr1[1] = 42;
	arr1[2] = 12;
	arr1.print();
	arr2.print();
	arr2[0] = arr1[0];
	arr2[1] = arr1[1];
	arr2[2] = arr1[2];
	arr1.print();
	arr2.print();

	Array<int> arr3(arr1);
	arr3.print();
	try {
		arr1[42] = arr1[0];
	}
	catch (Array<int>::IndexOutOfBounds& e) {
		std::cout << "Ha. Ha. Nice try.\n";
	}
	delete a;
	return 0;
}
