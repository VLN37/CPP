// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array {
public:
	Array(void);
	Array(Array<T> const& src);
	Array(unsigned int n);
	~Array(void);

	Array<T> const&	operator=(Array const& rhs);
	T const&		operator=(T const& rhs);
	T&				operator[](int);

	unsigned int	size(void) const;
	T				getElem(int index) const;
	void			print(void) const;

	class IndexOutOfBounds : public std::exception {
		public:
			virtual const char* what() const throw();
	};
private:
	unsigned int	_size;
	T*				_array;
};

#include "Array.tpp"

#endif
