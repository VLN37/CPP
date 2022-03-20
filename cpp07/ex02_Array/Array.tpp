// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Array.hpp"

template<typename T>
Array<T>::Array(Array<T> const& src) {
	std::cout << "copy constructor called\n";
	this->_array = new T[0];
	*this = src;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->_array = new T[n];
	std::cout << "unsigned constructor called\n";
	this->_size = n;
	if (n == 0)
		return;
	for (unsigned int i = 0; i < n; i++)
		_array[i] = 0;
}

template<typename T>
Array<T>::Array(void) {
	std::cout << "default constructor called\n";
	this->_array = new T[0];
	this->_size = 0;
}

template<typename T>
Array<T>::~Array(void) {
	std::cout << "destructor called\n";
	delete[] this->_array;
}

template<typename T>
unsigned int Array<T>::size(void) const {
	return this->_size;
}

template<typename T>
T Array<T>::getElem(int index) const {
	return this->_array[index];
}

template<typename T>
void Array<T>::print(void) const {
	for (unsigned int i = 0; i < this->_size; i++)
		std::cout << this->_array[i] << " ";
	std::cout << '\n';
}

template<typename T>
T& Array<T>::operator[](int i) {
	if (i < 0 || static_cast<unsigned int>(i) > this->size() - 1)
		throw(Array<T>::IndexOutOfBounds());
	std::cout << "T subscript operator called\n";
	return this->_array[i];
}

template<typename T>
T const& Array<T>::operator=(T const& rhs) {
	std::cout << "T assignment operator called\n";
	return static_cast<T>(rhs);
}

template<typename T>
Array<T> const& Array<T>::operator=(Array<T> const& rhs) {
	std::cout << "assignment operator called\n";
	delete[] this->_array;
	this->_array = new T[rhs.size()];
	this->_size = rhs.size();
	for (unsigned int i = 0; i < this->_size; i++)
		_array[i] = rhs.getElem(i);
	return *this;
}

template<typename T>
const char* Array<T>::IndexOutOfBounds::what(void) const throw() {
	return ("Provided index is out of bounds\n");
}
