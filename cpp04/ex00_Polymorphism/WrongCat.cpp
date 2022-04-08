// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& cat) : WrongAnimal() {
	std::cout << "WrongCat copy constructor called\n";
	*this = cat;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called\n";
	return;
}

void	WrongCat::operator=(WrongCat const& rhs) {
	this->type = rhs.type;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meoow~\n";
}

std::string	WrongCat::getType(void) const {
	return this->type;
}
