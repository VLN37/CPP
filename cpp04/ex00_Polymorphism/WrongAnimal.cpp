// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal default constructor called\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const& animal) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = animal;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called\n";
	return;
}

void	WrongAnimal::operator=(WrongAnimal const& rhs) {
	this->type = rhs.type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "This is the wrong function call\n";
}

std::string	WrongAnimal::getType(void) const {
	return this->type;
}
