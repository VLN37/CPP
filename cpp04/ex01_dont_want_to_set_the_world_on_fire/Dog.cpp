// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called\n";
	this->type = "Dog";
	this->ideas = new Brain;
}

Dog::Dog(Dog& dog) : Animal() {
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
	delete this->ideas;
	return;
}

Dog& Dog::operator=(Dog& rhs) {
	this->type = rhs.type;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Whoof! Whoof!\n";
}

std::string	Dog::getType(void) const {
	return this->type;
}
