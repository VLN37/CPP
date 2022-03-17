// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor called\n";
	this->type = "Animal";
}

Animal::Animal(Animal& animal) {
	std::cout << "Animal copy constructor called\n";
	*this = animal;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called\n";
	return;
}

Animal& Animal::operator=(Animal const& rhs) {
	this->type = rhs.type;
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "Err... hi?\n";
}

std::string	Animal::getType(void) const {
	return this->type;
}
