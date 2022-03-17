// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "Animal default constructor called\n";
	this->type = "Animal";
}

AAnimal::AAnimal(AAnimal& animal) {
	std::cout << "Animal copy constructor called\n";
	*this = animal;
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal destructor called\n";
	return;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs) {
	this->type = rhs.type;
}
