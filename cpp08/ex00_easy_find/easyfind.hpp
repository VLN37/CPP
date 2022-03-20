// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template<typename T>
void out(T var) {
	std::cout << var << ' ';
}

template<typename T>
void print_vector(std::vector<T> vec) {
	std::for_each(vec.begin(), vec.end(), out<T>);
	std::cout << '\n';
}

template<typename T>
typename std::vector<T>::iterator easyfind(std::vector<T> vec, int i) {
	typename std::vector<T>::iterator it;
	it = std::find(vec.begin(), vec.end(), i);
	if (it == vec.end())
		throw(std::out_of_range("Element not found in vector\n"));
	return it;
}

#endif
