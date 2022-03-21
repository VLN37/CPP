// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Span.hpp"

Span::Span(void) { }

Span::Span(unsigned int N) {
	this->_min_span = INT_MAX;
	this->_max_span = 0;
	this->_max_size = N;
}

Span::Span(Span const& src) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Span::~Span(void) { }

Span const& Span::operator=(Span const& rhs) {
	std::cout << "Assignment operator caled\n";
	this->_list = rhs.getList();
	this->_max_size = rhs.getSize();
	this->_max_span = rhs.longestSpan();
	this->_min_span = rhs.shortestSpan();
	return *this;
}

std::list<int> const& Span::getList(void) const {
	return this->_list;
}

/**************************************************************************** */
void Span::update_span(int cmp, int nbr) {
	int diff = std::abs(nbr - cmp);
	if (diff > this->_max_span)
		this->_max_span = diff;
	if (diff < this->_min_span)
		this->_min_span = diff;
}

void Span::addNumber(int n) {
	std::list<int>::iterator next;
	std::list<int>::iterator prev = _list.begin();
	std::list<int>::iterator it = _list.begin();

	if (_list.size() >= _max_size) {
		throw(std::length_error(EXC_LENGTH));
		return;
	}
	while (it != _list.end() && *it < n) {
		prev = it;
		++it;
	}
	if (it != prev)
		update_span(*prev, n);
	if (it != _list.end())
		update_span(*it, n);
	_list.insert(it, n);
}
/**************************************************************************** */

void Span::addRange(int first, int last) {
	try {
		if (first > last)
			throw(std::range_error(EXC_RANGE));
		while (first <= last)
			addNumber(first++);
	}
	catch (std::exception& e) {
		std::cout << e.what();
		return;
	}
}

void Span::out(int n) {
	std::cout << n << " ";
}

int Span::shortestSpan(void) const {
	try {
		if (this->_list.size() < 2) {
			throw(std::logic_error(EXC_SPAN));
		}
		return this->_min_span;
	}
	catch (std::exception& e) {
		std::cout << e.what();
		return 0;
	}
}

int Span::longestSpan(void) const {
	try {
		if (this->_list.size() < 2) {
			throw(std::logic_error(EXC_SPAN));
		}
		return this->_max_span;
	}
	catch (std::exception& e) {
		std::cout << e.what();
		return 0;
	}
}

size_t Span::getSize(void) const {
	return this->_max_size;
}

void Span::print(void) const {
	std::for_each(_list.begin(), _list.end(), out);
	std::cout << "\n\n";
	std::cout << "Cur_size: " << this->_list.size() << '\n'
			  << "Max_size: " << this->_max_size << '\n'
			  << "Min_span: " << this->shortestSpan() << "\n"
			  << "Max_span: " << this->longestSpan() << "\n\n";
}
