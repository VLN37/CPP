// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) {
	// std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(const Fixed& src) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value) {
	// std::cout << "Int variable constructor called" << std::endl;
	this->_rawBits = value << Fixed::_bits;
}

Fixed::Fixed(const float value) {
	// std::cout << "Float variable constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << Fixed::_bits));
}

Fixed::~Fixed(void) {
	// std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
	// std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const& rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const& rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const& rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const& rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

std::ostream& operator<<(std::ostream& o, Fixed const& i) {
	o << i.toFloat();
	return o;
}

Fixed	Fixed::operator++(void) {
	++this->_rawBits;
	return Fixed(this->toFloat());
}

Fixed	Fixed::operator++(int) {
	Fixed	Fixed(this->toFloat());
	++this->_rawBits;
	return Fixed;
}

Fixed	Fixed::operator--(void) {
	--this->_rawBits;
	return Fixed(this->toFloat());
}

Fixed	Fixed::operator--(int) {
	Fixed	Fixed(this->toFloat());
	--this->_rawBits;
	return Fixed;
}

bool	Fixed::operator>(Fixed const& rhs) const {
	return _rawBits > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const& rhs) const {
	return _rawBits < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const& rhs) const {
	return _rawBits >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const& rhs) const {
	return _rawBits <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const& rhs) const {
	return _rawBits == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const& rhs) const {
	return _rawBits != rhs.getRawBits();
}

Fixed const& Fixed::min(Fixed const& var1, Fixed const& var2) {
	return var1 < var2 ? var1 : var2;
}

Fixed const& Fixed::min(Fixed& var1, Fixed& var2) {
	return var1 < var2 ? var1 : var2;
}

Fixed const& Fixed::max(Fixed const& var1, Fixed const& var2) {
	return var1 > var2 ? var1 : var2;
}

Fixed const& Fixed::max(Fixed& var1, Fixed& var2) {
	return var1 > var2 ? var1 : var2;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw << Fixed::_bits;
}

int		Fixed::getRawBits(void) const {
	return this->_rawBits >> Fixed::_bits;
}

float		Fixed::toFloat(void) const {
	return (float)this->_rawBits / (1 << Fixed::_bits);
}

int		Fixed::toInt(void) const {
	return this->_rawBits >> Fixed::_bits;
}
