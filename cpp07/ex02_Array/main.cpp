// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**) {
	std::cout << "this compiles\n";
	Array<int> arr1(3);
	Array<int> arr2(3);

	Array<float>arrfloat(3);
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
		std::cout << e.what() << '\n';
		std::cout << "Ha. Ha. Nice try.\n";
	}
	Array<char> arr4(static_cast<unsigned int>(0));
	try {
		arr1[0] = arr4[0];
	}
	catch (Array<char>::IndexOutOfBounds& e) {
		std::cout << e.what() << '\n';
		std::cout << "Ha. Ha. Nice try.\n";
	}
	delete a;

    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//

	return 0;
}
