// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <exception>

template<typename T>
void out(int var) {
	std::cout << var << ' ';
}

template<typename T>
void print(T vec) {
	std::for_each(vec.begin(), vec.end(), out<T>);
	std::cout << '\n';
}

template<typename T>
typename T::iterator easyfind(T& vec, int i) {
	typename T::iterator it;
	it = std::find(vec.begin(), vec.end(), i);
	if (it == vec.end())
		throw(std::out_of_range("Exception: Element not found\n"));
	return it;
}

#endif
