// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called\n";
	this->type = "Dog";
}

Dog::Dog(Dog& dog) : Animal() {
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
	return;
}

Dog& Dog::operator=(Dog& rhs) {
	this->type = rhs.type;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Whoof! Whoof!\n";
}

std::string	Dog::getType(void) const {
	return this->type;
}
