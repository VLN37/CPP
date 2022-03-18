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
	for (int i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
	std::cout << '\n';
}

template<typename T>
void iter(T* arr, unsigned int size, void(*f)(T*)) {
	int i = -1;
	while (++i < size) {
		f(&arr[i]);
	}
}

#endif
