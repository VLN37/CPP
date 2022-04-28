// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef ITER_HPP
# define ITER_HPP

#include <string.h>
#include <iostream>
#include <string>
#include <cstdlib>


template<typename T>
void addOne(T* var) {
	*var += 1;
}

template<typename T>
void print_array(T* arr, unsigned int size) {
	for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
	std::cout << '\n';
}

template<typename T>
void iter(T* arr, unsigned int size, void(*f)(T*)) {
	int i = -1;
	int size2 = static_cast<int>(size);
	while (++i < size2) {
		f(&arr[i]);
	}
}

#endif
