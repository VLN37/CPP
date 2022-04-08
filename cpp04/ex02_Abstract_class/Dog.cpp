// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called\n";
	this->type = "Dog";
	this->ideas = new Brain;
}

Dog::Dog(Dog const& dog) : AAnimal() {
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
	delete this->ideas;
}

Dog& Dog::operator=(Dog const& rhs) {
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
