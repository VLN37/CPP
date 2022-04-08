// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called\n";
	this->type = "Dog";
	this->ideas = new Brain;
}

Dog::Dog(Dog const& src) : Animal() {
	std::cout << "Dog copy constructor called\n";
	this->ideas = new Brain;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
	delete this->ideas;
	return;
}

Dog& Dog::operator=(Dog const& rhs) {
	std::cout << "Dog assignment operator called\n";
	this->type = rhs.type;
	*this->ideas = *rhs.ideas;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Whoof! Whoof!\n";
}

std::string	Dog::getType(void) const {
	return this->type;
}
