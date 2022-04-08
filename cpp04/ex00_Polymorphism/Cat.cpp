// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called\n";
	this->type = "Cat";
}

Cat::Cat(Cat const& cat) : Animal() {
	std::cout << "Cat copy constructor called\n";
	*this = cat;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called\n";
	return;
}

Cat& Cat::operator=(Cat const& rhs) {
	this->type = rhs.type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Meoow~\n";
}

std::string	Cat::getType(void) const {
	return this->type;
}
