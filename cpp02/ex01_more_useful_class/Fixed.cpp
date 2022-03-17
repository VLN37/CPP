// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = src.getRawBits();
}

Fixed::Fixed(const int value) {
	std::cout << "Int variable constructor called" << std::endl;
	this->_rawBits = value << Fixed::_bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float variable constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << Fixed::_bits));
}

Fixed::~Fixed(void) {
	std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const& i) {
	o << i.toFloat();
	return o;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

int		Fixed::getRawBits(void) const {
	return this->_rawBits;
}

float		Fixed::toFloat(void) const {
	return (float)this->_rawBits / (1 << Fixed::_bits);
}

int		Fixed::toInt(void) const {
	return this->_rawBits >> Fixed::_bits;
}
